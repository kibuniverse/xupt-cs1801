#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <asm/current.h>
#include <linux/sched.h>
MODULE_LICENSE("GPL");
static int major = 0;
static int minor = 0;
const int count = 3;
#define DEVNAME "demo"
static struct cdev *demop = NULL;
//打开设备 
static int demo_open(struct inode *inode, struct file *filp) 
{   
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d\n", current->comm, current->pid, __FILE__, __func__, __LINE__); 
    //get major and minor from inode 
    printk(KERN_INFO "(major=%d, minor=%d), %s : %s : %d\n", imajor(inode), iminor(inode), __FILE__, __func__, __LINE__); 
    return 0; 
} 
//关闭设备
static int demo_release(struct inode *inode, struct file *filp) 
{
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    //get major and minor from inode 
    printk(KERN_INFO "(major=%d, minor=%d), %s : %s : %d\n", imajor(inode), iminor(inode), __FILE__, __func__, __LINE__); 
    return 0; 
}
//读设备
static ssize_t demo_read(struct file *filp, char __user *buf, size_t size, loff_t *offset) 
{
    struct inode *inode = filp->f_path.dentry->d_inode; 
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    //get major and minor from inode
    printk(KERN_INFO "(major=%d, minor=%d), %s : %s : %d\n", imajor(inode), iminor(inode), __FILE__, __func__, __LINE__); 
    return 0; 
}
//写设备 
static ssize_t demo_write(struct file *filp, const char __user *buf, size_t size, loff_t *offset)
{
    struct inode *inode = filp->f_path.dentry->d_inode;
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    //get major and minor from inode
    printk(KERN_INFO "(major=%d, minor=%d), %s : %s : %d\n", imajor(inode), iminor(inode), __FILE__, __func__, __LINE__);
    return 0;
} 
//操作方法集 
static struct file_operations fops = {
    .owner = THIS_MODULE,
    .open = demo_open,
    .release= demo_release,
    .read = demo_read,
    .write = demo_write,
};
//cdev设备模块初始化 
static int __init demo_init(void) 
{
    dev_t devnum; int ret; 
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    //1. alloc cdev obj
    demop = cdev_alloc();
    if(NULL == demop)
        return -ENOMEM;
    //2. init cdev obj
    cdev_init(demop, &fops);
    ret = alloc_chrdev_region(&devnum, minor, count, DEVNAME);
    if(ret)
        goto ERR_STEP;
    major = MAJOR(devnum);
    //3. register cdev obj
    ret = cdev_add(demop, devnum, count);
    if(ret)
        goto ERR_STEP1;
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d - ok.\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    printk("%s: major=%d,  minor=%d\n",__func__,MAJOR(demop->dev),MINOR(demop->dev));
    return 0;

ERR_STEP1:
    unregister_chrdev_region(devnum, count);

ERR_STEP:
    cdev_del(demop);
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d - fail.\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    return ret;
}

static void __exit demo_exit(void)
{
    //get command and pid
    printk(KERN_INFO "(%s:pid=%d), %s : %s : %d - leave.\n", current->comm, current->pid, __FILE__, __func__, __LINE__);
    unregister_chrdev_region(MKDEV(major, minor), count);
    cdev_del(demop);
}

module_init(demo_init);
module_exit(demo_exit);
