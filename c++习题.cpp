PTA修正版
计科1801-05班第1次课前练习题
The cin stream normally is connected to the display screen.       F
使用提取符(<<)可以输出各种基本数据类型的变量的值，也可以输出指针值。     T
使用new运算符开辟存储空间后，不必使用delete运算符撤销相应的空间。    F
int i; int &ri=i；对于这条语句，ri和i这两个变量代表的是同一个存储空间。       T
C++对C语言作了很多改进，下列描述中（）使得C语言发生了质变，从面向过程变成了面向对象。     D
A.增加了一些新的运算符；
B.允许函数重载，并允许设置缺省参数；
C.规定函数说明必须用原型；
D.引进了类和对象的概念；
cout 是由I/O 流库预定义的（ ）。     B
A.类
B.对象
C.包含文件
D.常量
以下程序中，new语句干了什么。      C
int** num;
num = new int* [20];
A.分配了长度为20的整数数组空间，并将首元素的指针返回。
B.分配了一个整数变量的空间，并将其初始化为20。
C.分配了长度为20的整数指针数组空间，并将num[0]的指针返回。
D.存在错误，编译不能通过。
关于delete运算符的下列描述中，（）是错误的。       C
A.它必须用于new返回的指针；
B.使用它删除对象时要调用析构函数；
C.对一个指针可以使用多次该运算符；
D.指针名前只有一对方括号符号，不管所删除数组的维数。
计算圆的面积 
从键盘输入圆的半径，计算圆的面积并输出。圆周率PI=3.1415926。
#include <iostream>
using namespace std;

int main()
{
	const double pi = 3.1415926;
	double r = 0.0;
	cin >> r;
	cout << pi * r * r << endl;
	return 0;
}
问候
输出问候：Hello!What's your name? 从键盘输入名字，然后输出欢迎信息。
#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "Hello!What's your name?" << endl;
	cin >> name;
	cout << name << ",Welcome to learn OOP using C++!" << endl;
	return 0;
}
计科1801-3班第1次课堂练习
重载函数在调用时选择的依据中，错误的是（）。      D
A.函数的参数
B.参数的类型
C.函数的名字
D.函数的类型
对定义重载函数的下列要求中，（ ）是错误的。       C
A.要求参数的个数不同
B.要求参数中至少有一个类型不同
C.要求函数的返回值不同
D.要求参数个数相同时，参数类型不同
最大值函数重载
编写重载函数myMax可分别求取两个整数，三个整数，两个双精度数的最大值。
#include <iostream>

using namespace std;

int myMax(int, int);
int myMax(int, int, int);
double myMax(double, double);

int myMax(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int myMax(int a, int b, int c)
{
	int m = a;
	if (b > m)
		m = b;
	if (c > m)
		m = c;
	return m;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else return b;
}
计算三角形面积
从键盘输入三个数，用来表示三角形的三条边长。如果能构成三角形就输出三角形的面积，否则就输出No。
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	if ((a + b <= c) || (a + c <= b) || (b + c <= c))
		cout << "No" << endl;
	else
	{
		double p = (a + b + c) / 2;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << s << endl;
	}

	return 0;
}
计算正五边形的面积和周长
从键盘输入一个数作为正五边形的边长，计算并输出该正五边形的周长和面积。
计算正五边形的面积公式为： S=a​2​​×√​25+10×√​5​​​​​​/4
#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	double n;
	cin >> n;
	cout << 0.25 * n * n * sqrt(25 + 10 * sqrt(5)) << endl;
	cout << 5 * n << endl;
	return 0;
}
计科1801-05班第2次课前练习题
函数的参数个数和类型都相同，只是返回值不同，这不是重载函数。      T
The types of arguments in a function call must match the types of the corresponding parameters in the function prototype's parameter list.。       T
在C++语言中引入内联函数（inline function）的主要目的是降低空间复杂度，即缩短目标代码长度。     F
using namespace std; 这条语句的作用是将命名空间std内的所有标识符暴露在当前作用域内。     T
通过命名空间可以区分具有相同名字的函数       T
关于new运算符的下列描述中，（）是错误的。       D
A.它可以用来动态创建对象和对象数组；
B.使用它创建的对象或对象数组可以使用运算符delete删除；
C.使用它创建对象时要调用构造函数；
D.使用它创建对象数组时必须指定初始值；
关于delete运算符的下列描述中，（）是错误的。        C
A.它必须用于new返回的指针；
B.使用它删除对象时要调用析构函数；
C.对一个指针可以使用多次该运算符；
D.指针名前只有一对方括号符号，不管所删除数组的维数。
以下程序中，new语句干了什么。       C       
int** num;
num = new int* [20];
A.分配了长度为20的整数数组空间，并将首元素的指针返回。
B.分配了一个整数变量的空间，并将其初始化为20。
C.分配了长度为20的整数指针数组空间，并将num[0]的指针返回。
D.存在错误，编译不能通过。
以下程序存在的问题是：            C
void fun()
{
 int *num1, *num2;
 num1 = new int[10];
 num2 = new int[20];
 num1[0] = 100;
 num2[0] = 300;
 num1 = num2;
 delete [] num1;
} 
A.num2不能给num1赋值
B.num2最初指向的空间没有释放
C.num1最初指向的空间没有释放
D.程序没有问题
设void f1(int * m，long & n)；int a；long b；则以下调用合法的是（）。      B
A.f1(a，b)；
B.f1(&a，b)；
C.f1(a，&b)；
D.f1(&a，&b)；
一个函数功能不太复杂，但要求被频繁调用，选用（ ）。       A
A.内联函数
B.重载函数
C.递归函数
D.嵌套函数
重载函数在调用时选择的依据中，错误的是（）。         A
A.函数的参数
B.参数的类型
C.函数的名字
D.函数的类型
在（ ）情况下适宜采用inline定义内联函数。              C
A.函数体含有循环语句
B.函数体含有递归语句
C.函数代码少、频繁调用
D.函数代码多、不常调用
下面说法正确的是（）。      B
A.内联函数在运行时是将该函数的目标代码插入每个调用该函数的地方
B.内联函数在编译时是将该函数的目标代码插入每个调用该函数的地方
C.类的内联函数必须在类体内定义
D.类的内联函数必须在类体外通过加关键字inline定义
对定义重载函数的下列要求中，（ ）是错误的。       C
A.要求参数的个数不同
B.要求参数中至少有一个类型不同
C.要求函数的返回值不同
D.要求参数个数相同时，参数类型不同
命名空间应用于：          B
A.在类外定义类的成员函数
B.避免各个不同函数、变量等的名称冲突
C.提高代码的执行速度
D.以上答案都正确
要说明标识符是属于哪个命名空间时，需要在标识符和命名空间名字之间加上：       A
A.::
B.->
C..
D.( )
重载绝对值函数
将绝对值函数abs( )重载三次，以便在下列的主函数中调用。
int abs(int x) {  
	if(x < 0)  x = -x;  
	return x; 
}
long abs(long x) {  
	if(x < 0)   x = -x;  
	return x;
}
double abs(double x) {  
	if(x < 0)  x=-x;  
	return x;
}
计科1801~3班第2次课堂练习题
重载函数可以带有默认值参数，但是要注意二义性。    T
命名空间应用于：          D
A.在类外定义类的成员函数
B.避免各个不同函数、变量等的名称冲突
C.提高代码的执行速度
D.以上答案都正确
如果在函数中定义的局部变量与命名空间中的变量同名时，（）被隐藏。          B
A.函数中的变量
B.命名空间中的变量
C.两个变量都
D.两个变量都不
如果程序中使用了using命令同时引用了多个命名空间，并且命名空间中存在相同的函数，将出现：          A
A.编译错误
B.语法错误
C.逻辑错误
D.无法判定错误类型
要说明标识符是属于哪个命名空间时，需要在标识符和命名空间名字之间加上：       A
A.::
B.->
C..
D.( )
如果默认参数的函数声明为“ void fun(int a,int b=1,char c='a',float d=3.2);”， 则下面调用写法正确的是（ ）.    B
A.fun();
B.fun(2,3);
C.fun(2, ,'c',3.14)
D.fun(int a=1);
#include <iostream>
using namespace std;

int main ( )
{
  double* pDouble  = NULL; // initialized with null
  pDouble  = new double(4分);   // Request memory for the variable
	
  char* pChar  = NULL(2分);   // initialized with null
  pChar  = new char[20];   // Request memory for the array
	
  cin>>*pDouble >>pChar;     // Store value at allocated address
  cout << *pDouble<<endl << pChar<<endl ;
	
  delete pDouble;         // free up the memory.
  delete pChar(4分);       // free the memory pointed to by pChar
	
  return 0;
}

面积计算器（函数重载）
实现一个面积计算器，它能够计算矩形或长方体的面积。
int area(int x, int y) {  
	return(x * y);
}
int area(int x, int y, int z) {  
	return(2  * ( x * y + x * z + y * z ) );
}
求最大值和最小值
本题要求实现一个函数f，可找出10个整数中最大值max和最小值min。
int f(int a[10], int n, int &max, int &min) {  
	int j;  
	max = a[0];  
	min = a[0];  
	for (j = 0; j < n; j++)  {    
		if(a[j] > max)  max = a[j];  
	}   
	for(j = 0; j < n; j++)  {    
		if(a[j] < min)  min = a[j];  
	}
}
计科1801~5班第3次课前练习题
给定以下类声明，哪个成员函数可能改变成员变量data?     D
class A {
public:
 void f1 (int d);
 void f2 (const int &d);
 void f3 (int d) const;
private:
   int data;
};
A.f1
B.f2
C.f3
D.f1和f2
在下列关键字中,用以说明类中公有成员的是（ ）。      A
A.public
B.private
C.protected
D.friend
有关类和对象的说法下列不正确的有（ ）。       C
A.对象是类的一个实例
B.任何一个对象只能属于一个具体的类
C.一个类只能有一个对象
D.类与对象和关系与数据类型和变量的关系相似
类成员的默认访问属性是：        A
A.private
B.protected
C.public
D.以上答案都不对
在面向对象的软件系统中，不同类对象之间的通信的一种构造称为_。       D
A.属性
B.封装
C.类
D.消息
设计一个名为Rectangle的矩形类（C++ set函数）
设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，它们分别表示矩形的宽和高。一个为width和height设置初值的函数set( )；一个名为getArea( )的函数返回矩形的面积；一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。
class Rectangle {
private:
    double width;
    double height;
public:
    int set(double m, double n)
    {
        width = m;
        height = n;
        return 0;
    }
    double getArea()
    {
        return width * height;
    }
    double getPerimeter()
    {
        return 2 * (width + height);
    }
};
Point类的声明和实现
定义一个Point类，代表平面上的一个点，其横坐标和纵坐标分别用x和y表示，设计Point类的成员函数，实现并测试这个类。 主函数中输入两个点的坐标，计算并输出了两点间的距离。请根据主函数实现Point类。
class Point {
private:
    double x;
    double y;
public:
    int setX(double X)
    {
        x = X;
        return 0;
    }
    int setY(double Y)
    {
        y = Y;
        return 0;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};
计科1801-3班第3次课堂练习
有关类和对象的说法下列不正确的有（ ）。     C
A.对象是类的一个实例
B.任何一个对象只能属于一个具体的类
C.一个类只能有一个对象
D.类与对象和关系与数据类型和变量的关系相似
类的实例化是指（ ）。      B
A.定义类
B.定义对象
C.调用类的成员函数
D.访问对象的数据成员
关于成员函数特征的描述中，（ ）是错误的。      B
A.成员函数可以重载
B.成员函数一定是内联函数
C.一个类可以没有成员函数
D.成员函数可以设置参数的默认值
如果类定义中没有使用 private、protected、或public 关键字，则所有成员（ ）      C
A.都是 public 成员
B.都是 proctected 成员
C.都是 private 成员
D.不一定
在面向对象系统中，对象是基本的运行时实体，它 _ 。      C
A.只能包括数据(属性)
B.只能包括操作(行为)
C.把属性和行为封装为一个整体
D.必须具有显式定义的对象名
在面向对象系统中，对象的属性是__。      C
A.对象的行为特性
B.和其他对象相关联的方式
C.和其他对象相互区分的特性
D.与其他对象交互的方式
The public members provide the class’s  and the private members provide implementation details. Members are accessed using . (dot) for  and −> (arrow) for pointers.
A struct is a class where members are by default 
类的声明和成员函数的实现
声明了一个Dog类，包含了age，weight等属性，以及对这些属性进行操作的方法。请实现该类的成员函数。
void Dog::setAge(int a)
{
age=a;
}
int Dog::getAge()
{
return age;
}
void Dog::setWeight(int w)
{
weight=w;
}
int Dog::getWeight()
{
return weight;
}
使用类计算矩形的面积
定义并实现一个矩形类，有长和宽两个属性，由成员函数计算矩形的面积。
void Rectangle::setLength(int l){length=l;}
void Rectangle::setWidth(int w){width=w;}
int Rectangle::getArea()
{
return length*width;
}
定义一个名为Stock的股票类
定义一个名为Stock的股票类，这个类包括：一个名为symbol的字符串表示股票代码。一个名为name的字符串数据成员表示股票名称。一个名为previousClosingPrice的double数据成员，它存储前一日的股票收盘价。一个名为currentPrice数据成员，它存储当前的股票成交价格。创建一个设置股票代码和股票名称的set( )函数。一个名为changePercent()函数返回股价涨跌幅度。（即从previousClosingPrice变化到currentPrice的百分比。）
class Stock
{
public:
    char symbol[10], name[20];
    double previousClosingPrice, currentPrice;
    void set(char* s1, char* n1) {
        int i = 0;
        for (i = 0; i < 10; i++) {
            symbol[i] = s1[i];
        }
        for (i = 0; i < 20; i++) {
            name[i] = n1[i];
        }
        
    }
    double changePercent() {
        return (currentPrice-previousClosingPrice)/ previousClosingPrice;
    }
};
计科1801~5班第4次课前练习题（构造函数与析构函数）
C++程序中，类的构造函数名与类名相同。      T
在C++语言中引入内联函数（inline function）的主要目的是降低空间复杂度，即缩短目标代码长度。     F
对于有返回值的return语句,用它可以返回一个表达式的值,从而实现函数之间的信息传递，分值为5分。     T
'形参 int fun(int a=1,int b,int c=2)是否合法?    F
下列函数中，（ ）不能重载。     C
A.成员函数
B.非成员函数
C.析构函数
D.构造函数
下列对重载函数的描述中，（ ）是错误的。     A
A.重载函数中不允许使用默认参数
B.重载函数中编译根据参数表进行选择
C.不要使用重载函数来描述毫无相干的函数
D.构造函数重载将会给初始化带来多种方式
在下面类声明中，关于生成对象不正确的是（ ）。     C
class point
{ public:
int x;
int y;
point(int a,int b) {x=a;y=b;}
}; (2分)
A.point p(10,2);
B.point *p=new point(1,2);
C.point *p=new point[2];
D.point *p[2]={new point(1,2), new point(3,4)};
设A为自定义类，现有普通函数int fun(A& x)。则在该函数被调用]时：      C
A.将执行复制构造函数来初始化形参x
B.仅在实参为常量时，才会执行复制构造函数以初始化形参x
C.无需初始化形参x
D.仅在该函数为A类的友元函数时，无需初始化形参x
析构函数可以返回：      D
A.指向某个类的指针
B.某个类的对象
C.状态信息表明对象是否被正确地析构
D.不可返回任何值
建立一个类对象时，系统自动调用       A
A.构造函数
B.析构函数
C.友元函数
D.成员函数
在下列关键字中,用以说明类中公有成员的是（ ）。      A
A.public
B.private
C.protected
D.friend
有关类和对象的说法下列不正确的有（ ）。     C
A.对象是类的一个实例
B.任何一个对象只能属于一个具体的类
C.一个类只能有一个对象
D.类与对象和关系与数据类型和变量的关系相似
下列属于类的析构函数特征的是      A
A.一个类中只能定义一个析构函数
B.析构函数名与类名不同
C.析构函数的定义只能在类体内
D.析构函数可以有一个或多个参数
下列各类函数中，不是类的成员函数的是      C
A.构造函数
B.析构函数
C.友元函数
D.拷贝构造函数
类是对象的抽象，而一个对象则是其对应的一个 (1分)
在面向对象程序设计方法中，对象是系统中用来描述客观事物的一个实体，它由一组表示其静态特征的属性和可执行的一组操作共同组成
定义一个矩形类（C++构造函数）
设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，它们分别表示矩形的宽和高。width和height的默认值都为1.该类包括矩形类的无参构造函数（默认构造函数）；一个width和height为指定值的矩形构造函数；一个名为getArea( )的函数返回矩形的面积；一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。
class Rectangle
{
private:
    double width = 0;
    double height = 0;

public:
    Rectangle(double k, double g);
    double getArea();
    double getPerimeter();
};

double Rectangle::getArea()
{
    double a;
    a = width * height;
    return a;
}

double Rectangle::getPerimeter()
{
    double b;
    b = 2 * (width + height);
    return b;
}
设计一个三角形Triangle类（C++构造函数）
设计一个三角形Triangle类。这个类包括： 两个名为width和height的double型数据域，它们分别表示三角形的底宽和高。一个为width和height指定初值的构造函数。 一个名为getArea()的方法返回这个三角形的面积。
class Triangle
{
private:
    double width = 0;
    double height = 0;

public:
    Triangle(double k, double g);
    double getArea();
};

Triangle::Triangle(double k, double g)
{
    width = k;
    height = g;
}

double Triangle::getArea()
{
    double t;
    t = (width * height) / 2;
    return t;
}
计科1801~3班第4次课堂练习题（构造函数与析构函数）
C++程序中，类的构造函数名与类名相同。     T
在下面类声明中，关于生成对象不正确的是（ ）。     C
class point
{ public:
int x;
int y;
point(int a,int b) {x=a;y=b;}
}; (2分)
A.point p(10,2);
B.point *p=new point(1,2);
C.point *p=new point[2];
D.point *p[2]={new point(1,2), new point(3,4)};
所有类都应该有：       C
A.构造函数
B.析构函数
C.构造函数和析构函数
D.以上答案都不对
析构函数可以返回：      D
A.指向某个类的指针
B.某个类的对象
C.状态信息表明对象是否被正确地析构
D.不可返回任何值
析构函数可以返回：     A
A.指向某个类的指针
B.某个类的对象
C.状态信息表明对象是否被正确地析构
D.不可返回任何值
建立一个类对象时，系统自动调用       A
A.构造函数
B.析构函数
C.友元函数
D.成员函数
以下说法中正确的是      C
A.一个类一定会有无参构造函数
B.构造函数的返回值类型是void
C.一个类只能定义一个析构函数，但可以定义多个构造函数
D.一个类只能定义一个构造函数，但可以定义多个析构函数
下列函数中，（ ）不能重载。      C
A.成员函数
B.非成员函数
C.析构函数
D.构造函数
下列对重载函数的描述中，（ ）是错误的。     A
A.重载函数中不允许使用默认参数
B.重载函数中编译根据参数表进行选择
C.不要使用重载函数来描述毫无相干的函数
D.构造函数重载将会给初始化带来多种方式
下列关于构造函数的描述中，错误的是（）      B
A.构造函数名与类名相同
B.构造函数可以有返回值
C.构造函数可以重载
D.每个类都有构造函数
定义一个矩形类（C++构造函数）
设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，它们分别表示矩形的宽和高。width和height的默认值都为1.该类包括矩形类的无参构造函数（默认构造函数）；一个width和height为指定值的矩形构造函数；一个名为getArea( )的函数返回矩形的面积；一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。
class Rectangle
{
private:
    double width = 1;
    double height = 1;

public:
    Rectangle(double k, double g);
    double getArea();
    double getPerimeter();
};

double Rectangle::getArea()
{
    double a;
    a = width * height;
    return a;
}

double Rectangle::getPerimeter()
{
    double b;
    b = 2 * (width + height);
    return b;
}
Point类的声明和实现
定义一个Point类，代表平面上的一个点，其横坐标和纵坐标分别用x和y表示，设计Point类的成员函数，实现并测试这个类。 主函数中输入两个点的坐标，计算并输出了两点间的距离。请根据主函数实现Point类。
class Point {
    double x;
    double y;
public:
    void setX(double a)
    {
        x = a;
    }
    void setY(double b)
    {
        y = b;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
};
学生排名表（析构函数）
现在输入一批学生（人数大于0且不超过100）的名次和他们的姓名。要求按名次输出每个人的排名。
输入格式：每行为一个学生的信息，共两项，第一项为排名（为正整数，且任意两名学生的排名均不同），第二项为学生姓名。当输入－1时，表示输入结束。
输出格式：按名次输出学生姓名，每行一个。
int i = 0, j = 0, k;
for ( i = 0; i < count - 1; i++)
{
    k = i;
    for ( j = i + 1; j < count; j++)
        if (pS[j] -> getRank() > pS[k] -> getRank())
            k = j;
    if (k != i) {
        Student *temp;
        temp = pS[i];
        pS[i] = pS[k];
        pS[k] = temp;
    }
}
for (i = count - 1; i >= 0; i--) {
    pS[i] -> ~Student();
}
体育俱乐部I（构造函数）
一个俱乐部需要保存它的简要信息，包括四项：名称（字符串），成立年份（整数），教练姓名（字符串）和教练胜率（0－100之间的整数）。用键盘输入这些信息后，把它们分两行输出：第一行输出名称和成立年份，第二行输出教练姓名和胜率。
void Coach :: show() {
    cout << name << " " << winRate << "%" << endl;
}
Club :: Club(string n1, int y, string n2, int wr) : c(n2, wr) {
    name = n1;
    year = y;
}
void Club :: show()
{
    cout << name << " " << year << endl;
    c.show();
}
计科1801~5班第5次课前练习题（对象数组和对象指针）
静态成员的特点是不管这个类创建了多少个对象,其静态成员在内存中只保留一份副本,这个副本为该类的所有对象共享,或者说静态成员为类所有。     T
静态数据成员不能在类中初始化，使用时需要在类体外声明。      F
Given the declaration Circle x[10], which of the following statements is Wrong?       A
A.x contains an array of ten int values.
B.x contains an array of ten objects of the Circle type.
C.Each element in the array is a Circle object.
D.You can change the contents in each object element.
下列关于this指针的叙述中，正确的是      D
A.任何与类相关的函数都有this指针
B.类的成员函数都有this指针
C.类的友元函数都有this指针
D.类的非静态成员函数才有this指针
以下说法正确的是（）。       C
A.在静态成员函数中可以调用同类的其他任何成员函数
B.const成员函数不能作用于非const对象
C.在静态成员函数中不能使用this指针
D.静态成员变量每个对象有各自的一份
下面程序的运行结果。
#include <iostream>
using namespace std;
class B
{
	public:
		B(){cout<<++b<<endl;}
		~B(){cout<<--b<<endl;}
		static int Getb(){return b;}
	private:
		static int b;
};
int B::b=10;
int main()
{
	B b1,b2,b3;
	cout<<B::Getb()<<endl;
	return 0;
}
程序结果为：
(1分)
(1分)
(1分)
(1分)
(1分)
(1分)
(1分)
对象指针与对象数组（拉丁舞）
对象指针与对象数组（拉丁舞）
怡山小学毕业文艺晚会上，拉丁舞是最受欢迎的节目。不过，每年为了排练这个节目，舞蹈组都会出现一些纠纷。有些同学特别受欢迎，有些却少人问津，因此安排舞伴成为舞蹈组陈老师最头疼的问题。
为了解决这一问题，今年陈老师决定让按先男生后女生，先低号后高号的顺序，每个人先报上自己期待的舞伴，每人报两位，先报最期待的舞伴。接下来按先男生后女生，先低号后高号的顺序，依次按以下规则匹配舞伴：
（１）每个人均按志愿顺序从前到后确定舞伴。如果第一志愿匹配不成功，则考虑第二志愿。
（２）如果Ａ的当前志愿为Ｂ，则如果Ｂ未匹配舞伴，且有以下情形之一者，Ａ和Ｂ匹配成功：
2a) B的期待名单中Ａ。
2b) Ｂ的期待名单中没有Ａ，但Ｂ期待的两位舞伴均已匹配成功，所以Ｂ只能与Ａ凑合。
输入时先输入男生数m, 接下来m行，第一项为学生的姓名，后两项为期待舞伴的编号，编号从０开始，最大为女生数减１。接下来输入女生数f，接下来f行，第一项为学生的姓名，后两项为期待舞伴的编号，编号从0开始，最大为男生数减１。
输出时按男生的编号顺序输出　　姓名:舞伴姓名
注意两个姓名间有冒号隔开
void Student::addPair()
{ 
  if(this->pair!=NULL)return;  
  
  for(int i=0;i<2;i++)
  {
  
   if(this->welcome[i]->pair!=NULL)continue;
  
   for(int j=0;j<2;j++)
   {
     if(this->welcome[i]->welcome[j]==this) 
    {
     this->pair=this->welcome[i];
     this->welcome[i]->pair=this;
     return;
    } 
    
   }  
   for(int j=0;j<2;j++)
   {
       if(this->welcome[j]->welcome[0]->pair!=NULL && this->welcome[j]->welcome[1]->pair!=NULL && this->welcome[j]->pair==NULL)
       {
         this->pair=this->welcome[j];
         this->welcome[j]->pair=this;
          return;
       }
   } 
  }
 
}
void Student::printPair()
{
    if(this->pair)
  cout<<this->name<<":"<<this->pair->name<<endl;
}
类的声明和成员函数的实现--this指针
本题要求声明和实现一个Car类，包括实现其成员函数。
class Car{
	   int m_nWheels;
	public:
		void disp_welcomemsg()
		{
			cout<<"Welcome to the car world!"<<endl;	
		}
		int get_wheels()
		{
			return m_nWheels;
		}
		void set_wheels(int n)
		{
			m_nWheels=n;
		}
};
计科1801~3班第5次课堂练习题（静态成员、友元）
Variables that are shared by every instances of a class are __.     D
A.public variables
B.private variables
C.instance variables
D.static variables
A function that is associated with an individual object is called __.     C
A.a static function
B.a class function
C.an instance function
D.an object function
静态成员函数没有：     B
A.返回值
B.this指针
C.指针参数
D.返回类型
下面对静态数据成员的描述中，正确的是     A
A.静态数据成员是类的所有对象共享的数据
B.类的每个对象都有自己的静态数据成员
C.类的不同对象有不同的静态数据成员
D.静态数据成员不能通过类的对象调用，只能通过“类名::标识符”调用
对于以下关于友元的说法     D
A.如果函数fun被声明为类A的友元函数，则该函数成为A的成员函数
B.如果函数fun被声明为类A的友元函数，则该函数能访问A的保护成员，但不能访问私有成员
C.如果函数fun被声明为类A的友元函数，则fun的形参类型不能是A。
D.以上答案都不对
友元的作用是     A
A.提高程序的运用效率
B.加强类的封装性
C.实现数据的隐藏性
D.增加成员函数的种类
下面关于友元的描述中，错误的是：     D
A.友元函数可以访问该类的私有数据成员
B.一个类的友元类中的成员函数都是这个类的友元函数
C.友元可以提高程序的运行效率
D.类与类之间的友元关系可以继承
A variable that is part of a class, yet is not part of an object of that class, is called a (2分) member. There is exactly (2分) copy of a static member instead of one copy per object, as for ordinary non-static members.
定义有静态成员的C++学生类Student
本程序中学生Student类中有学号 number，姓名 name，成绩 score 等数据成员，另外有静态变量：学生对象个数 count 和总分sum。静态成员函数average( )用来计算学生的平均分。
#include <iostream>
#include <cstring>
using namespace std;
class Student {
private:
    int number;
    char *name;
    float score;
    static int count;
    static float sum;
public:
    Student(int n, char *na, float s);
    ~Student();
    static void init() {
        Student :: count = 0;
        Student :: sum = 0;
    }
    void print();
    static float average();
};
int Student :: count;
float Student :: sum;
Student :: Student(int n, char *na, float s) {
    number = n;
    name = new char[strlen(na) + 1];
    strcpy(name, na);
    score = s;
    count++;
    sum = sum + score;
}
Student :: ~Student() {
    delete [] name;
    count--;
}
void Student :: print() {
    cout <<  "number: " << number << " name: " <<
    name << " score: " << score << " count: " << count
    << endl;
}
float Student :: average() {
    cout << "sum is " << sum << endl;
    cout << "count is " << count << endl;
    cout << "average is " << sum / count << endl;
    return sum / count;
}
2017final友元函数之全班同学的平均绩点
一个学生类，有三个私有成员：名字name、课程学分指针score、课程成绩指针grade。定义一个友元函数，求全班同学的平均绩点。单门课程的学分绩点=学分*绩点=学分*(成绩/10-5) ; 全班同学的平均绩点是 所有同学的全部课程的学分绩点之和/所有同学学分数之和。单个同学的课程数不超过100门。全班同学人数不超过100名。
double averagegrade(student *stu, int count) {
    int i, j;
    double sum1 = 0, sum2 = 0;
    for (i = 0; i < count; i++) {
        for (j = 0; stu[i].score[j] != -1; j++) {
            sum1 += stu[i].score[j] * (stu[i].grade[j] / 10 - 5);
            sum2 += stu[i].score[j];
        }
    }
    if (sum2 == 0 || sum1 == 0)
        return 0;
    return sum1 / sum2;
}
求两点之间距离 
定义一个Point类，有两个数据成员：x和y, 分别代表x坐标和y坐标，并有若干成员函数。 定义一个函数Distance(), 用于求两点之间的距离。
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
class Point
{
 	double x,y;
public: 
  	Point(double x,double y){
	  	this->x=x;
		this->y=y;
	}
  	friend double Distance(Point &a,Point &b);
};
double Distance(Point &a,Point &b)
{ 
	double dx=a.x-b.x;
    double dy=a.y-b.y;
    return sqrt(dx*dx+dy*dy);
}
int main()
{ 
	double m,n,p,q;
  	cin>>m>>n;
  	cin>>p>>q;
  	Point a(m,n),b(p,q);
  	double d=Distance(a,b);
   	cout <<fixed<< setprecision(2) << d <<endl;
  	return 0;
}
计科1801~5班第6次课前练习题（字符串类string）
对静态数据成员初始化可以在类内进行。    F
静态数据成员不属于某个对象，在给对象分配存储空间时，不包括静态数据成员所占的空间。    T
静态成员函数属于类而不是类的对象，没有this指针，静态成员函数中不能使用thiss指针。     T
静态成员函数的实现必须在类体外实现，不能在类体内实现。      F
由于静态成员函数不属于某个特定的对象，因此。不能像一般的成员函数那样随意的访问对象中的非静态数据成员。只能引用类中声明的静态数据成员。如果要引用非静态数据成员，可通过对象引用。    T
常数据成员的值必须初始化，且不能改变。      T
常成员函数既可以被常对象调用，也可以被非常对象调用。    T
关于用string定义字符串，下列选项中错误的是____。     D
A.string s; s = "hello C++";
B.string s = "hello C++";
C.string s("hello C++");
D.string s["hello C++"];
使用C++标准string类定义一个字符串，需要包含的头文件____。     B
A.string.h
B.string
C.cstring
D.stdlib.h
Variables that are shared by every instances of a class are __.     D
A.public variables
B.private variables
C.instance variables
D.static variables
若有下面的语句：      B
string s="Hello";
s.append("123");
cout << s.at(5) << endl;
则执行后程序的输出结果是
A.o
B.1
C.2
D.3
字符串替换
将文本文件中指定的字符串替换成新字符串。 由于目前的OJ系统暂时不能支持用户读入文件，我们编写程序从键盘输入文件中的内容，当输入的一行为end时，表示结束。end后面有两个字符串，要求用第二个字符串替换文本中所有的第一个字符串。
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,m,b,c;
    int found,i;
    getline(cin,a);
    while(1)
    {getline(cin,m);
    i=m.compare("end");
    if(i==0)
    {
        break;
    } 
    a+='\n';
    a+=m; 
    }
    a+='\n';
    cin>>b;
    cin>>c;

    found=a.find(b);
    while(found !=-1)
    {
        a.replace(found,b.length(),c);
        found=a.find(b,found+1);
    }
    cout<<a;
    return 0;
}
求解给定字符串的前缀
求解给定字符串的前缀。
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[20];
    char b[20];
    int n;
    while(cin>>a)
    {
    cin>>b;
    n=(strlen(a)>strlen(b))?strlen(a):strlen(b);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            a[i]='\0';
        }
    }
        if(a[0]=='\0')
        cout<<"No common prefix"<<endl;
        else
        cout<<"The common prefix is "<<a<<endl;
	}
    return 0;
}
学号解析
川师的学号的某些位有特殊的含义，如从2016110101中可以看出该学生为2016级，就读于11系，班级为1班。根据输入的学号，利用程序进行解析，输出对应的信息。
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char a[100];
    cin>>a;
    cout<<"year:";
    for(int i=0;i<4;i++){
        cout<<a[i];
    }
    cout<<endl;
    cout<<"department:";
    for(int i=4;i<6;i++){
        cout<<a[i];
    }
    cout<<endl;
    cout<<"class:";
    for(int i=6;i<8;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
计科1801-3班第6次课堂练习题
Which of the following statements are true?       不选C
A.A constant member function cannot change the data fields in the object.
B.A constant memebr function may be an intance or a static function.
C.A constant function may be defined for any functions not just instance member functions.
D.A constructor can be defined as a constant member funciton.
C＋＋函数的声明和定义可以分开。函数声明不需要( )。     D
A.返回类型
B.函数名
C.参数表
D.函数体
离目录路径和文件名
输入文件目录路径和文件名，要求分离成目录路径和文件名分别输出
#include <iostream>
#include<string>
using namespace std;

void filename(const string & str)
{
    size_t found=str.find_last_of("/\\");//Point
    cout<<str.substr(0,found)<<endl;
    cout<<str.substr(found+1)<<endl;
}
int main()
{
    string str1;
    getline(cin,str1);
    filename(str1);
    return 0;
}
 验证手机号码（C++ Java）
某系统在新用户注册时必须输入手机号，为了提高系统效率，防止输错手机号，需要对手机号进行验证。 验证规则为： （1）长度为11位 （2）由数字0~9组成 （3）必须是1开头 以上3个条件同时满足，则验证通过，否则为不通过。
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main(){
    int i,tag=0,m;
    char a[50];
    cin>>a>>a+5;
    m=strlen(a);
    for(i=0;i<m;i++){
        if(!(a[i]>='0' && a[i]<='9')){
            tag=1;
            break;
        }
    }
    if(m==11 && a[0]=='1' && tag==0){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
对字符串进行排序输出 
给定一个字符串，对该字符串进行排序，请输出排好序的字符串。要求能够连续输入输出的字符串。
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
计科1801~5班第7次课前练习题（继承性：类的派生）
在protected保护继承中，对于垂直访问等同于公有继承，对于水平访问等同于私有继承。      T
A has-a relationship is implemented via inheritance.          F
类的组合关系可以用“Has-A”描述；类间的继承与派生关系可以用“Is-A”描述。      T
下列程序的执行结果为     C
#include <iostream>
using namespace std;

class A {
public:
    A() {     cout << "1";    }
    ~A() {    cout << "2";    }
};
class B: public A {
public:
    B() {    cout << "3";    }
    ~B() {    cout << "4";    }
};
int main() {
    B b;
    return 0;
}
A.1234
B.1324
C.1342
D.3142
下列关于派生类构造函数和析构函数的说法中，错误的是     D
A.派生类的构造函数会隐含调用基类的构造函数
B.如果基类声明了带有形参表的构造函数，则派生类就应当声明构造函数
C.在建立派生类对象时，先调用基类的构造函数，再调用派生类的构造函数
D.在销毁派生类对象时，先调用基类的析构函数，再调用派生类的析构函数
建立派生类对象时, 3种构造函数分别是a(基类的构造函数)、b(成员对象的构造函数)、c(派生类的构造函数)，这3种构造函数的调用顺序为      A
A.abc
B.acb
C.cab
D.cba
从shape类派生出一个直角三角形类RTriangle
从shape类派生出一个直角三角形类RTriangle类（regular triangle）。两条直角边长作为RTriangle类的私有成员，类中包含参数为直角边的构造方法。
class RTriangle:public shape {
 private:
  double height;
  double width;
 public:
  RTriangle(double a, double b){
   height = a;
   width = b;
  }
  ~RTriangle(){}
  double getArea(){
   return 0.5 * height * width;
  }
  double getPerimeter(){
   return height + width + sqrt(height * height + width * width);
  }
}; 
从shape类派生出一个圆形类Circle
请从下列shape类派生出一个圆形类Circle,这个类圆形的半径radius作为私有成员，类中应包含初始化半径的构造函数。圆周率PI取3.1415926。
const double PI = 3.1415926;
class Circle:public shape {
 private:
  double r;
 public:
  Circle(double radius) {
   r = radius;
  }
  double getArea() {
    return PI * r * r;
   }
  double getPerimeter()
   {
    return 2 * PI * r;
   }
};
计算圆柱体的表面积（函数名隐藏）
Cylinder类是Circle类的派生类，在下面的程序中计算并输出了圆柱体的表面积。请阅读理解下面的程序。将下面的Cylinder类补充完整后提交。
class Cylinder:public Circle{
  double height;  
  public:
   Cylinder(double radius,double h):Circle(radius) {
     height = h;
    }
  ~Cylinder(){}
  double getArea(){
   return PI * radius * radius * 2 + height * PI * radius * 2;
  }
};
狗的继承
完成两个类，一个类Animal，表示动物类，有一个成员表示年龄。一个类Dog，继承自Animal，有一个新的数据成员表示颜色，合理设计这两个类，使得测试程序可以运行并得到正确的结果。
#include<iostream>
#include<cstring>
using namespace std;
class Animal
{
 protected:
  int age;
 public:
  Animal(int age1) {
   age = age1;
  }
  ~Animal(){}
  int getAge() {
   return age;
  }
};
class Dog:public Animal{
 private:
  char color[10];
  int age1;
 public:
  Dog(int age1, char color1[]):Animal(age1)
  {
   age = age1;
   strcpy(color, color1);
  }
  ~Dog(){};
  void showInfor()
  {
   cout << "age:" << getAge() << endl;
   cout << "color:" << color << endl;
  }
};
计科1801-3班第7次课堂练习题（类的继承）
面向对象程序设计的继承性鼓励程序员重用被实践验证的高质量软件。     T
在protected保护继承中，对于垂直访问等同于公有继承，对于水平访问等同于私有继承。      T
一个类的私有成员     B
A.只能被该类的成员函数访问
B.只能被该类的成员函数和友元函数访问
C.只能被该类的成员函数、友元函数和派生类访问
D.以上答案都不对
下列程序的执行结果为     C
#include <iostream>
using namespace std;

class A {
public:
    A() {     cout << "1";    }
    ~A() {    cout << "2";    }
};
class B: public A {
public:
    B() {    cout << "3";    }
    ~B() {    cout << "4";    }
};
int main() {
    B b;
    return 0;
}
A.1234
B.1324
C.1342
D.3142
在公有继承的情况下，在派生类中能够访问的基类成员包括     D
A.公有成员
B.保护成员
C.公有成员、保护成员和私有成员
D.公有成员和保护成员
下列关于派生类构造函数和析构函数的说法中，错误的是     D
A.派生类的构造函数会隐含调用基类的构造函数
B.如果基类声明了带有形参表的构造函数，则派生类就应当声明构造函数
C.在建立派生类对象时，先调用基类的构造函数，再调用派生类的构造函数
D.在销毁派生类对象时，先调用基类的析构函数，再调用派生类的析构函数
派生类继承基类的方式有     D
A.public
B.private
C.protected
D.以上都对
假设在公有派生情况下，以下说法不正确的是     A
A.可以将基类对象复制给派生类对象
B.可以将派生类对象的地址复制给基类指针
C.可以将派生类对象赋值给基类的引用
D.可以将派生类对象赋值给基类对象
求平面几何形状的面积（圆形和矩形）C++
下列shape类是一个表示形状的基类，该类有一个计算形状面积的方法area( )。请以形状类"Shape"为基类派生出圆形类"Circle"和矩形类"Rectangle"，要求保持求面积的接口不变。从键盘输入圆形的半径和矩形的长和宽，在主函数中创建一个圆形类"Circle"的对象和一个矩形类"Rectangle"的对象，计算并输出这个圆形和矩形的面积。圆周率PI=3.14
class Circle:public Shape {
 private:
  double radius;
 public:
  Circle(double r):radius(r) {
  }
  double area(){
   return 3.14 * radius * radius;
    }
}; 
class Rectangle:public Shape {
 private:
  double width;
  double length;
 public:
  Rectangle(double w, double l):width(w), length(l) {
  }
  double area(){
   return width * length;
  }
}; 
写出派生类构造方法（C++）
裁判测试程序样例中展示的是一段定义基类People、派生类Student以及测试两个类的相关C++代码，其中缺失了部分代码，请补充完整，以保证测试程序正常运行。
:People(id,name),sid(sid),score(score){
计算圆柱体的表面积（函数名隐藏）
Cylinder类是Circle类的派生类，在下面的程序中计算并输出了圆柱体的表面积。请阅读理解下面的程序。将下面的Cylinder类补充完整后提交。
class Cylinder:public Circle{
  double height;  
  public:
   Cylinder(double radius,double h):Circle(radius) {
     height = h;
    }
  ~Cylinder(){}
  double getArea(){
   return PI * radius * radius * 2 + height * PI * radius * 2;
  }
};
学生CPP成绩计算 
给出下面的人员基类框架：
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(){}      
    Person (string p_name, int p_age) {
        name = p_name; 
        age = p_age;
    }
    ~Person(){ }
    void display () {
        cout << name << ":" << age << endl;
    }
};class student:public Person{
private:
    int ID;    //学号
    float cpp_score;  
    float cpp_count; 
    float cpp_grade; 
public: //总评成绩计算规则：cpp_grade = cpp_score * 0.9 + cpp_count * 2;
    student(){}
    student(string n,int i,int a,float p,float q):Person(n,a) {
        name = n;
        ID = i;
        age = a;
        cpp_score = p;
        cpp_count = q;
        cpp_grade = p * 0.9 + q * 2;
    }
    ~student(){}
    void print(){
       cout << ID << " " << name << " " << setiosflags(ios::fixed) << 
            setprecision(1) << cpp_grade << endl;
    }
};
int main()
{  
    int a, i;
    string n;
    float p, q;
    while(1) {   
        cin>>n;
        if(n == "0") return 0;
        else {
            cin >> i;
            cin >> a;
            cin >> p;
            cin >> q;
            student s(n, i, a, p, q); 
            s.print();
        }
    }
    return 0;  
}
计科1801-3班第8次课堂练习题（多继承）
面向对象程序设计的继承性鼓励程序员重用被实践验证的高质量软件。     T
在C++语言中设置虚基类的目的是（ ）      C
A.简化程序代码
B.提高程序的运行效率
C.解决多继承造成的二义性问题
D.缩短程序的目标代码
下列关于继承的描述中，错误的是( )。     D
A.析构函数不能被继承
B.派生类是基类的组合
C.派生类的成员除了它自己的成员外，还包含了它的基类的成员
D.派生类中继承的基类成员的访问权限到派生类保持不变
以下关于C++语言中继承的叙述中，错误的是（ ）     D
A.继承是父类和子类之间共享数据和方法的机制
B.继承定义了一种类与类之间的关系
C.继承关系中的子类将拥有父类的全部属性和方法
D.继承仅仅允许单继承，即不允许一个子类有多个父类
下列关于类的继承描述中，( )是正确的。     D
A.派生类公有继承基类时，可以访问基类的所有数据成员，调用所有成员函数。
B.派生类也是基类，所以它们是等价的。
C.派生类对象不会建立基类的私有数据成员，所以不能访问基类的私有数据成员。
D.一个基类可以有多个派生类，一个派生类可以有多个基类。
In a(n) __ relationship, an object of a derived class also can be treated as an object of its base class. 
A base class's __ members can be accessed only in the base-class definition or in derived-class definitions.
写出派生类构造方法（C++）
裁判测试程序样例中展示的是一段定义基类People、派生类Student以及测试两个类的相关C++代码，其中缺失了部分代码，请补充完整，以保证测试程序正常运行。
:People(id,name),sid(sid),score(score){
日程安排（多重继承+重载）
已有一个日期类Date，包括三个protected成员数据
int year;
int month;
int day;
另有一个时间类Time，包括三个protected成员数据
int hour;
int minute;
int second;
现需根据输入的日程的日期时间，安排前后顺序，为此以Date类和Time类为基类，建立一个日程类Schedule，包括以下新增成员
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
class Date {
 protected:
     int year;
     int month;
     int day;
 public:
     Date(int _y, int _m, int _d):year(_y), month(_m), day(_d){}
};
class Time {
 protected:
     int hour;
     int minute;
     int second;
 public:
     Time(int _h, int _m, int _s):hour(_h), minute(_m), second(_s){}
};
class Schedule:public Date, public Time {
 private:
     int ID;
 public:
     Schedule():Date(0,0,0), Time(0,0,0), ID(0){}
     Schedule(int _id, int _year, int _month, int _day, int _hour, int _minute, int _second):Date(_year, _month, _day), Time(_hour, _minute, _second), ID(_id){}
     bool operator < (const Schedule &s) {
         char timeArr1[15], timeArr2[15];
         sprintf(timeArr1, "%04d%02d%02d%02d%02d%02d", year, month, day, hour, minute, second);
         sprintf(timeArr2, "%04d%02d%02d%02d%02d%02d", s.year, s.month, s.day, s.hour, s.minute, s.second);
         return atof(timeArr1) < atof(timeArr2);
    }
    void show() {
        cout << "The urgent schedule is No."<<ID<<": "<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main() {
    int id, rows = 0;
    int y, m, d, h, i, s;
    Schedule min;
    while (cin >> id) {
        if(id == 0) break;
        scanf("%d/%d/%d %d:%d:%d", &y, &m, &d, &h, &i, &s);
        Schedule cur(id, y, m, d, h, i, s);
        if(rows++ == 0) min = cur;
        if(cur < min) min = cur;
    }
    if(rows != 0) min.show();
    return 0;
}
计科1801-5班第9次课前练习题（模板）
pair类模板的作用是将两个数据组成一个数据，用来表示一个二元组或一个元素对，两个数据可以是同一个类型也可以是不同的类型。      T
关于函数模板，描述错误的是。     A
A.函数模板必须由程序员实例化为可执行的函数模板
B.函数模板的实例化由编译器实现
C.一个类定义中，只要有一个函数模板，则这个类是类模板
D.类模板的成员函数都是函数模板，类模板实例化后，成员函数也随之实例化
下列的模板说明中，正确的是。     D
A.template < typename T1, T2 >
B.template < class T1, T2 >
C.template < typename T1, typename T2 >
D.template ( typedef T1, typedef T2 )
假设有函数模板定义如下： 　template 　Max( T a, T b ,T &c) { c　= a + b ; } 下列选项正确的是( )。     C
A.int x, y; char z ;Max( x, y, z ) ;
B.double x, y, z ;Max( x, y, z ) ;
C.int x, y; float z ;Max( x, y, z );
D.float x; double y, z;Max( x, y, z ) ;
建立类模板对象的实例化过程为。     C
A.基类-派生类
B.构造函数-对象
C.模板类-对象
D.模板类-模板函数
模板函数的真正代码是在哪个时期产生的____。     C
A.源程序中声明函数时
B.源程序中定义函数时
C.源程序中调用函数时
D.运行执行函数时
类模板的模板参数____。     D
A.只可作为数据成员的类型
B.可作为成员函数的返回类型
C.可作为成员函数的参数类型
D.以上三者皆可
下列关于pair<>类模板的描述中，错误的是。     C
A.pair<>类模板定义头文件utility中
B.pair<>类模板作用是将两个数据组成一个数据，两个数据可以是同一个类型也可以是不同的类型
C.创建pair<>对象只能调用其构造函数
D.pair<>类模拟提供了两个成员函数first与second来访问这的两个数据
一个简单的队列类模板 
请按照下列简单的整数队列类创建一个简单的队列类模板。
const int SIZE = 100;
template<typename Type>
class Queue {
	Type q[SIZE];
	int front;
	int rear;
public:
	Queue()
	{
		front = rear = 0;
	}
	void put(Type i); 
	Type get(void); 
};
template<typename Type>
void Queue<Type>::put(Type i)
{
	q[rear++] = i;
	return;
}
template<typename Type>
Type Queue<Type>::get(void)
{
	return q[front++];
}
Max函数模板 
创建一个函数模板Max( ),该模板返回两个参数中的最大值
template<typename Type>
Type Max(Type a, Type b)
{
	return a > b ? a : b;
}
创建函数模板实现求数组中的最小元素
创建一个函数模板实现求数组中的最小元素，在主函数将分别使用该模板求整形数组和double型数组中的最小元素并输出。
template<typename Type>
Type Min(Type* p, int n)
{
	Type x = p[0];
	for (int i = 0; i < n; i++)
		x = x < p[i] ? x : p[i];
	return x;
}
计科1801-3班第9次课堂练习题（模板）
在C++语言中设置虚基类的目的是（ ） 。     C
A.简化程序代码
B.提高程序的运行效率
C.解决多继承造成的二义性问题
D.缩短程序的目标代码
一个类的私有成员     B
A.只能被该类的成员函数访问
B.只能被该类的成员函数和友元函数访问
C.只能被该类的成员函数、友元函数和派生类访问
D.以上答案都不对
以下关于C++语言中继承的叙述中，错误的是（ ）。     D
A.继承是父类和子类之间共享数据和方法的机制
B.继承定义了一种类与类之间的关系
C.继承关系中的子类将拥有父类的全部属性和方法
D.继承仅仅允许单继承，即不允许一个子类有多个父类
下列关于类的继承描述中，( )是正确的。     D
A.派生类公有继承基类时，可以访问基类的所有数据成员，调用所有成员函数。
B.派生类也是基类，所以它们是等价的。
C.派生类对象不会建立基类的私有数据成员，所以不能访问基类的私有数据成员。
D.一个基类可以有多个派生类，一个派生类可以有多个基类。
关于类模板，描述错误的是。     A
A.一个普通基类不能派生类模板
B.类模板可以从普通类派生，也可以从类模板派生
C.根据建立对象时的实际数据类型，编译器把类模板实例化为模板类
D.函数的类模板参数需生成模板类并通过构造函数实例化
建立类模板对象的实例化过程为。     C
A.基类-派生类
B.构造函数-对象
C.模板类-对象
D.模板类-模板函数
下列有关模板的描述，错误的是____。     D
A.模板把数据类型作为一个设计参数，称为参数化程序设计
B.使用时，模板参数与函数参数相同，是按位置而不是名称对应的
C.模板参数表中可以有类型参数和非类型参数
D.类模板与模板类是同一个概念
编写一个函数模板Swap,实现两个变量交换。
编写一个函数模板Swap,实现两个变量交换。
template<typename Type>
void Swap(Type& a, Type& b)
{
	Type t = a;
	a = b;
	b = t;
	return;
}
编写一个函数模板 sort 实现选择法排序的功能
编写一个函数模板 sort 实现选择法排序的功能。
template<typename Type>
void Mysort(Type* a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[k])
				k = j;
		if (i != k)
		{
			a[i] = a[i] + a[k];
			a[k] = a[i] - a[k];
			a[i] = a[i] - a[k];
		}
	}
}
一个简单的队列类模板
请按照下列简单的整数队列类创建一个简单的队列类模板。
const int SIZE=100;
template <typename T>
class Queue {
    T q[SIZE];
    int front;
    int rear;
public:
    Queue() {
        front = rear = 0;
    };
    void put(T i) {
        q[rear++] = i;
    };
    T get(){
       return q[front++];
    }
};
计科1801-5班第10次课前练习题（标准模板库STL）
可以通过下标随机访问向量vector中的元素。       T
当向量对象的内存用完之后，就会产生越界错误。         F
若有下面的语句：     D
vector<int> v;
for (int i = 0; i < 4; i++)
    v.push_back(i + 1);
cout << v.size() << endl;
则执行后程序的输出结果是
A.1
B.2
C.3
D.4
设有定义 vector<string> v(10); 执行下列哪条语句时会调用构造函数?     C
A.v[0] += "abc";
B.v[0] = "2018";
C.v.push_back("ZUCC");
D.cout << (v[1] == "def");
设有如下代码段:     B
std::map<char *, int> m;
const int MAX_SIZE = 100;
int main() {
    char str[MAX_SIZE];
    for (int i = 0; i < 10; i++) {
        std::cin >> str;
        m[str] = i;
    }
    std::cout << m.size() << std::endl;
}

读入10个字符串，则输出的 m.size() 为
A.0
B.1
C.10
查找电话号码
文件phonebook1.txt中有若干联系人的姓名和电话号码。
#include <iostream>
#include <map>

int main()
{
	using namespace std;

	map<string, long long> m;
	string str;
	long long n{ 0 };

	cin >> str >> n;
	while (true)
	{
		cin >> str;
		if (str == "noname")
			break;
		cin >> n;
		m.insert(pair<string, long long>(str, n));
	}
	cin >> str;
	map<string,long long>::iterator iter;
	iter = m.find(str);
	if (iter != m.end())
		cout << iter->second << endl;
	else
		cout << "Not found." << endl;

	return 0;
}
姓名排序
从指定文本文件中读入若干学生姓名并按照拼音顺序排序后输出。 由于目前的OJ系统暂时不能支持用户读入文件和写文件，我们编写程序从键盘输入文件中的姓名，当输入的单词为end时，表示文件结束。将按照姓名拼音顺序排序后输出。
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void sort_string(string* in_array, int n, string* out_array)
{
	vector<string> strArray;
	int j = 0;
	for (int i = 0; i < n; i++)
		strArray.push_back(in_array[i]);
	sort(strArray.begin(), strArray.end());
	vector<string>::iterator st;
	for (st = strArray.begin(); st != strArray.end(); st++)
		out_array[j++] = *st;
	return;
}

int main()
{
	string str[10];
	string str_out[10];
	int n = 0;

	while (true)
	{
		cin >> str[n];
		if (str[n] == "end")
			break;
		n++;
	}
	sort_string(str, n, str_out);
	for (int j = 0; j < n; j++)
		cout << str_out[j] << ' ';

	return 0;
}
计科1801-3班第10次课堂练习题
查找成绩并折算后输出
文件：期中考试成绩.txt中有若干学生的姓名和数学期中考试成绩。 Smith 67 Anderson 75 Lewis 83 Cook 58 David 96 请你编写一个简单的查询成绩程序，当从键盘输入一个姓名时查找到他的数学期中考试分数并按照21%折算后输出。如果没找到则显示Not found. 由于目前的OJ系统暂时不能支持用户读入文件，我们编写程序从键盘输入文件中的姓名和成绩，当输入的名字为noname时，表示结束。noname后面有一个名字，需要查找其成绩。
#include <iostream>
#include <map>

int main()
{
	using namespace std;

	map<string, long long> m;
	string str;
	long long n{ 0 };

	cin >> str >> n;
	while (true)
	{
		cin >> str;
		if (str == "noname")
			break;
		cin >> n;
		m.insert(pair<string, long long>(str, n));
	}
	cin >> str;
	map<string, long long>::iterator iter;
	iter = m.find(str);
	if (iter != m.end())
	{
		double t = iter->second * 0.21;
		cout << t << endl;
	}
	else
		cout << "Not found." << endl;

	return 0;
}
电话号码同步 
文件phonebook1.txt和phonebook2.txt中有若干联系人的姓名和电话号码。请你设计一个程序，将这两个文件中的电话号码同步。（所谓同步，就是将两个文件中的电话号码合并后剔除相同的人名和电话号码。请将同步后的电话号码按照姓名拼音顺序排序后保存到文件phonebook3.txt中。）
由于目前的OJ系统暂时不能支持用户读入文件和写文件，我们编写程序从键盘输入文件中的姓名和电话号码，当输入的单词为end时，表示文件结束。将同步后的电话号码按照姓名拼音顺序排序后输出。
#include<iostream>
#include<set>
#include<string>
#include<vector>

int main()
{
	using namespace std;

	set <string> A;
	string a;

	for (int i = 0; i < 2; i++)
	{
		getline(cin, a);
		while (a != "end")
		{
			A.insert(a);
			getline(cin, a);
		}
	}
	set <string>::iterator p = A.begin();
	while (p != A.end())
		cout << *p++ << endl;
	return 0;
}
计科1801~5班第11次课前练习题（运算符重载）
对每个可重载的运算符来讲，它既可以重载为友元函数，又可以重载为成员函数，还可以重载为非成员函数。     F
对单目运算符重载为友元函数时，可以说明一个形参。而重载为成员函数时，不能显式说明形参。    T
重载operator+时，返回值的类型应当与形参类型一致。 比如以下程序中，operator+的返回值类型有错：
class A {
int x;
public:
 A(int t=0):x(t){     }

    int operator+(const A& a1){ return x+a1.x;  }
};
     F
C++, only existing operators can be overloaded.     T
下列运算符中，（ ）运算符不能重载。     C
A.＆＆
B.[ ]
C.::
D.<<
下列关于运算符重载的描述中，（ ）是正确的。     D
A.运算符重载可以改变操作数的个数
B.运算符重载可以改变优先级
C.运算符重载可以改变结合性
D.运算符重载不可以改变语法结构
A unary operator, whether prefix or postfix, can be defined by either a non-static member function taking (2分) arguments or a nonmember function taking (2分) argument.
使用成员函数重载复数类的运算符+
类Complex声明了一个复数类，有两个数据成员realPart（代表复数的实部）和imgPart（代表复数的虚部），并定义了成员函数实现了重载运算符“+”以实现两个复数对象的相加操作。成员函数Show用来输出复数的实部和虚部。请完成对运算符“+”的重载操作。
Complex  &Complex :: operator+(Complex& com) {
    realPart += com.realPart;
    imgPart += com.imgPart;
    return *this;
}
单目运算符重载（时钟类）
本题已给出时钟类及其成员函数实现，要求补充完整运算符++重载函数（前置和后置），使之能够实现时钟对象自增1秒。
Clock operator ++(Clock &op) {
    op.Second++;
    if (op.Second >= 60) {
        op.Second = op.Second - 60;
        op.Minute++;
        if (op.Minute >= 60) {
            op.Minute = op.Minute - 60;
            op.Hour++;
            op.Hour = op.Hour % 24;
        }
    }
    return op;
}
Clock operator ++(Clock &op, int) {
    Clock OP = op;
    op.Second++;
    if (op.Second >= 60) {
        op.Second = op.Second - 60;
        op.Minute++;
        if (op.Minute >= 60) {
            op.Minute = op.Minute - 60;
            op.Hour++;
            op.Hour = op.Hour % 24;
        }
    }
    return OP;
}
计科1801~3班第11次课堂练习题（运算符重载）
多数运算符可以重载，个别运算符不能重载，运算符重载是通过函数定义实现的。      T
对单目运算符重载为友元函数时，可以说明一个形参。而重载为成员函数时，不能显式说明形参。     T
In C++, only existing operators can be overloaded.     T
为了能出现在赋值表达式的左右两边，重载的"[]"运算符应定义为：     B
A.A operator [ ] (int);
B.A& operator [ ] (int);
C.const A operator [ ] (int);
D.以上答案都不对
在C++中不能重载的运算符是     A
A.?:
B.+
C.-
D.<=
对学生对象按照成绩升序排序
下面这段代码要实现对学生对象按照成绩升序排序。 仔细阅读代码，要求实现编程实现输出运算符“<<”和小于“<”运算符，使本程序能完成预定的排序功能。
ostream& operator<<(ostream& os, Student st)
{
	os << st.name << ' ' << st.sex << ' ' << st.score << ' ' << st.grade << endl;
	return os;
}

bool operator<(Student& st1, Student& st2)
{
	return st1.score < st2.score ? true : false;
}
重载下标运算符[ ]
这段程序实现了安全数组。 请认真阅读程序并补全程序使之能正确执行。
int& atype::operator[](int i)
{
	if (i<0 || i>SIZE - 1)
	{
		cout << "\nIndex value of " << i << " is out-of-bounds.";
		exit(0);
	}
	else
		return a[i];
}
复数类重载加法、减法和乘法运算符
以下定义了一个复数类及其部分实现，现要求将类的构造函数以及运算符+、- 和 * 函数重载补充完整。
complex :: complex(float r, float i) {
    real = r;
    imag = i;
}
complex  complex :: operator+(const complex &op2) const {
    complex Complex;
    Complex.real = op2.real + real;
    Complex.imag = op2.imag + imag;
    return Complex;
}
complex  complex :: operator-(const complex &op2) const {
    complex Complex;
    Complex.real = real - op2.real ;
    Complex.imag =  imag - op2.imag;
    return Complex;
}
complex  complex :: operator*(const complex &op2) const {
    complex Complex;
    Complex.real = real * op2.real - imag * op2.imag;
    Complex.imag =  imag * op2.real + real * op2.imag;
    return Complex;
}
计科1801-3班面向对象与C++程序设计期中考试
同一个形式参数名只能用于一个模板函数     F
C++程序中，类的构造函数名与类名相同。      T
使用提取符(<<)可以输出各种基本数据类型的变量的值，也可以输出指针值。     T
在protected保护继承中，对于垂直访问等同于公有继承，对于水平访问等同于私有继承。     T
在C++语言中引入内联函数（inline function）的主要目的是降低空间复杂度，即缩短目标代码长度。     F
函数模板的友元函数必须是模板函数。     F
域作用符“::”用于:     D
A.限定在类外定义的成员函数
B.访问定义于某个命名空间的对象
C.访问类的静态成员
D.以上答案都正确
一个函数功能不太复杂，但要求被频繁调用，选用（ ）。     A
A.内联函数
B.重载函数
C.递归函数
D.嵌套函数
对定义重载函数的下列要求中，（ ）是错误的。     C
A.要求参数的个数不同
B.要求参数中至少有一个类型不同
C.要求函数的返回值不同
D.要求参数个数相同时，参数类型不同
下列函数中，（ ）不能重载。     C
A.成员函数
B.非成员函数
C.析构函数
D.构造函数
在派生类对基类继承的传递性中，__是错误的。     C
A.在公有继承方式下，直接派生类对象可以直接调用基类中的公有成员函数，去访问基类的私有数据成员
B.在公有继承方式下，间接派生类对象可以直接调用基类中的公有成员函数，去访问基类的私有数据成员
C.在私有继承方式下，间接派生类对象可以直接调用基类中的公有成员函数，去访问基类的私有数据成员
D.不管是私有继承还是公有继承，基类中的私有成员在派生类的作用域内都是不可能见的。
对于类之间的友元关系：     D
A.如果类A是类B的友元，则B的成员函数可以访问A的私有成员
B.如果类A是类B的友元，则B也是A的友元。
C.如果类A是类B的友元，并且类B是类C的友元，则类A也是类C的友元。
D.以上答案都不对。
以下关于C++语言中继承的叙述中，错误的是（ ）。     D
A.继承是父类和子类之间共享数据和方法的机制
B.继承定义了一种类与类之间的关系
C.继承关系中的子类将拥有父类的全部属性和方法
D.继承仅仅允许单继承，即不允许一个子类有多个父类
在C++中，关于下列设置缺省参数值的描述中，（）是正确的。     B
A.不允许设置缺省参数值；
B.在指定了缺省值的参数右边，不能出现没有指定缺省值的参数；
C.只能在函数的定义性声明中指定参数的缺省值；
D.设置缺省参数值时，必须全部都设置；
const int *p说明不能修改（）。     A
A.p指针；
B.p指针指向的变量；
C.p指针指向的数据类型；
D.上述A、B、C三者；
关于delete运算符的下列描述中，（）是错误的。     C
A.它必须用于new返回的指针；
B.使用它删除对象时要调用析构函数；
C.对一个指针可以使用多次该运算符；
D.指针名前只有一对方括号符号，不管所删除数组的维数。
若有下面的语句：     D
vector<int> v;
for (int i = 0; i < 4; i++)
    v.push_back(i + 1);
cout << v.size() << endl;
则执行后程序的输出结果是
A.1
B.2
C.3
D.4
在面向对象系统中，对象是基本的运行时实体，它 _ 。     C
A.只能包括数据(属性)
B.只能包括操作(行为)
C.把属性和行为封装为一个整体
D.必须具有显式定义的对象名
所谓数据封装就是将一组数据和与这组数据有关操作组装在一起，形成一个（）     B
A.对象
B.类
C.函数体
D.程序块
派生类的定义和使用
按要求完成下面的程序：
1、定义一个Animal类，包含一个void类型的无参的speak方法，输出“animal language!”。
2、定义一个Cat类，公有继承自Animal类，其成员包括：
（1）私有string类型的成员m_strName;
（2）带参数的构造函数，用指定形参对私有数据成员进行初始化；
（3）公有的成员函数print_name，无形参，void类型，功能是输出成员m_strName的值，具体输出格式参见main函数和样例输出。
class Animal {
public:
    void speak(){
    cout<<"animal language!"<<endl;
    }

};
class Cat: public Animal{
private :
    string m_strName;
public:
    Cat(string m_strName){this->m_strName=m_strName;};
    void  print_name(){
cout<<"cat name: "<<m_strName<<endl;
};

};
计算圆柱体的表面积（函数名隐藏）
Cylinder类是Circle类的派生类，在下面的程序中计算并输出了圆柱体的表面积。请阅读理解下面的程序。将下面的Cylinder类补充完整后提交。
class Cylinder :public Circle {
    double height;
public:
    Cylinder(double radius, double h) :Circle(radius) {
        height = h;
    }
    ~Cylinder(){}
    double getArea() {
        return ((2 * PI * radius * radius) + (2 * PI * radius * height));
    }
};
分离目录路径和文件名
输入文件目录路径和文件名，要求分离成目录路径和文件名分别输出
#include <iostream>
#include<string>
using namespace std;
void filename(const string & str)
{
    size_t found=str.find_last_of("/\\");//Point
    cout<<str.substr(0,found)<<endl;
    cout<<str.substr(found+1)<<endl;
}
int main()
{
    string str1;
    getline(cin,str1);
    filename(str1);
    return 0;
}
部分排序
对于一组数据，我们可以只对原先处在中间位置的那些元素进行排序。
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	vector<int>num(a);
	for(int i=0;i<a;i++)cin>>num[i];
	int flag=0;
	if(b*2<a)sort(num.begin()+b,num.end()-b);	
	for(int i=0;i<a;i++){
		if(flag){cout<<" ";
		}flag=1;
		cout<<num[i];
	}
	return 0;
}
计科1801~5班第13次课前练习题（虚函数）
虚函数是用virtual 关键字说明的成员函数。     T
动态绑定是在运行时选定调用的成员函数的。     T
构造函数可以声明为虚函数。     F
构造函数可以声明为纯虚函数。     F
虚函数不能是类的静态成员。     T
重定义虚函数的派生类必须是公有继承的。     T
作为虚函数隐含参数的this指针，决定了虚函数调用时执行的代码。    T
关于纯虚函数和抽象类的描述中，（ ）是错误的。     C
A.纯虚函数是一种特殊的虚函数，它没有具体的实现
B.抽象类是指具有纯虚函数的类
C.一个基类中说明有纯虚函数，该基类的派生类一定不再是抽象类
D.抽象类只能作为基类来使用，其纯虚函数的实现由派生类给出
虚析构函数的作用是。     C
A.虚基类必须定义虚析构函数
B.类对象作用域结束时释放资源
C.delete动态对象时释放资源
D.无意义
在派生类中，重载一个虚函数时，要求函数名、参数的个数、参数的类型、参数的顺序和函数的返回值。     A
A.相同
B.不同
C.相容
D.部分相同
若一个类中含有纯虚函数，则该类称为。     C
A.基类
B.纯基类
C.抽象类
D.派生类
假设 Aclass为抽象类，下列正确的说明语句是。     B
A.Aclass fun( int ) ;
B.Aclass * p ;
C.int fun( Aclass ) ;
D.Aclass Obj ;
关于动态绑定的下列描述中，（ ）是错误的。     D
A.动态绑定是以虚函数为基础的
B.动态绑定在运行时确定所调用的函数代码
C.动态绑定调用函数操作是通过指向对象的指针或对象引用来实现的
D.动态绑定是在编译时确定操作函数的
汽车收费
现在要开发一个系统，管理对多种汽车的收费工作。
class Car :public Vehicle {
private:
	int weight;
	int guest;
public:
	Car(const string& s, int g, int w)
		:Vehicle(s), weight(w), guest(g) {}
	virtual int fee() { return guest * 8 + weight * 2; }
};
class Bus :public Vehicle {
private:
	int guest;
public:
	Bus(const string& s, int g)
		:Vehicle(s), guest(g) {}
	virtual int fee() { return guest * 3; }
};
class Truck :public Vehicle {
private:
	int weight;
public:
	Truck(const string& s, int w)
		:Vehicle(s), weight(w) {}
	virtual int fee() { return weight * 5; }
};
抽象类Shape
请编写一个抽象类Shape，包括两个纯虚函数，分别为计算面积getArea()和计算周长getPerim()。通过Shape类派生出矩形类Rectangle和圆类Circle，并计算各自的面积和周长。
class Rectangle :public Shape {
private:
	double width;
	double height;
public:
	Rectangle(double w, double h)
		:width(w), height(h) {}
	virtual double getArea() { return height * width; }
	virtual double getPerim() { return 2 * (height + width); }
};
class Circle :public Shape {
private:
	double rear;
public:
	Circle(double r)
		:rear(r) {}
	virtual double getArea() { return PI * rear * rear; }
	virtual double getPerim() { return 2 * PI * rear; }
};
虚函数的应用 
补充下列代码，使得程序的输出为：
A:3
A:15
B:5
3
15
5
class CMyClassB :public CMyClassA {
private:
	int b;
public:
	CMyClassB(int bb)
		:b(bb), CMyClassA(15)
	{
		printf("B:%d\n", b);
	}
	virtual void print()
	{
		printf("%d\n", b);
	}
};
计科1801~3班第13次课堂练习题（虚函数）
关于虚函数的描述中，（ ）是正确的。     C
A.虚函数是一个static 类型的成员函数
B.虚函数是一个非成员函数
C.基类中说明了虚函数后，派生类中与其对应的函数可不必说明为虚函数
D.派生类的虚函数与基类的虚函数具有不同的参数个数和类型
在C++语言中设置虚基类的目的是（ ） 。     C
A.简化程序代码
B.提高程序的运行效率
C.解决多继承造成的二义性问题
D.缩短程序的目标代码
阅读下列说明和C++代码，将应填入 （n） 处的字句写在答题纸的对应栏内。
【说明】现欲构造一文件/目录树，采用组合（Composite）设计模式来设计，得到的类图如下所示

【C++代码】
#include <list>
#include <iostream>
#include <string>
using namespace std; 

class AbstractFile {
protected :	
   string name;  // 文件或目录名称
public:
   void printName(){cout << name;}  // 打印文件或目录名称
   virtual void addChild(AbstractFile  *file)=0;   // 给一个目录增加子目录或文件
   virtual void removeChild(AbstractFile *file)=0;// 删除一个目录的子目录或文件
   virtual list<AbstractFile*> *getChildren()=0;// 获得一个目录的子目录或文件
};
class File : public AbstractFile {
public :
   File(string name) { (2分) = name; }
   void addChild(AbstractFile  *file) { return ; }
   void removeChild(AbstractFile *file) { return ; }
   (2分) getChildren() { return  (2分); }
};
class Folder :public AbstractFile {
private :
   list <AbstractFile*> childList;  // 存储子目录或文件
public :
   Folder(string name) { (2分)= name; }
   void addChild(AbstractFile *file) { childList.push_back(file); }
   void removeChild(AbstractFile *file) { childList.remove(file);}
   list<AbstractFile*> *getChildren() { return  (2分) ; }
};

int main( ) {
   // 构造一个树形的文件/目录结构
   AbstractFile *rootFolder = new Folder("c:\\");
   AbstractFile *compositeFolder = new Folder("composite");
   AbstractFile *windowsFolder = new Folder("windows");
   AbstractFile *file = new File("TestComposite.java");
   rootFolder->addChild(compositeFolder);
   rootFolder->addChild(windowsFolder);
   compositeFolder->addChild(file);
   return 0；
}
从抽象类shape类派生出一个正五边形类（C++）
从下列的抽象类shape类派生出一个正五边形（regular pentagon）类RPentagon,这个类将正五边形的边长作为私有成员，类中包含初始化这个值的构造函数。
class RPentagon : public shape {
public:
    double a;
    RPentagon(double s){
        a = s;
    }
    double getArea() {
        return a * a * sqrt(25 + 10 * sqrt(5)) / 4.0;
    }
    double getPerimeter () {
        return a *5;
    }
};
从shape类派生出一个直角三角形类RTriangle
从shape类派生出一个直角三角形类RTriangle类（regular triangle）。两条直角边长作为RTriangle类的私有成员，类中包含参数为直角边的构造方法。
class shape {// 抽象类
class RTriangle:public shape{
private:
    double a;
    double b;
public:
    RTriangle(double a1,double b1) {
        a = a1;
        b = b1;
    }
    double getArea() {
        return 0.5 * a * b;
    }
    double getPerimeter() {
        return a + b + sqrt(a * a + b * b);
    }
};
计科1801~5班第14次课前练习题（IO流与文件操作）
使用提取符(<<)可以输出各种基本数据类型的变量的值，也可以输出指针值。     T
预定义的插入符从键盘上接收数据是不带缓冲区的。     F
The cin stream normally is connected to the display screen.     F
cout 是由I/O 流库预定义的（ ）。     B
A.类
B.对象
C.包含文件
D.常量
分析以下程序：程序的输出结果是     B
#include <iostream>
using namespace std;
void fun(int num)
{
    cout << num << endl;
}
void fun(char ch)
{
    cout << (ch + 1) << endl;
}
int main()
{
    fun('A');
    return 0;
}
A.65
B.66
C.A
D.B
下列关于cin和cout的说法中，错误的是____。     C
A.cin用于读入用户输入的数据
B.cout用于输出数据
C.cin比C语言中的scanf()函数更有优势，它可以读取空格
D.cout通常与<<运算符结合
学生成绩的输入和输出（运算符重载）
现在需要输入一组学生的姓名和成绩，然后输出这些学生的姓名和等级。
输入时，首先要输入学生数（正整数）N。接着输入N组学生成绩，每组成绩包括两项：第一项是学生姓名，第二项是学生的成绩（整数）。
输出时，依次输出各个学生的序号（从1开始顺序编号），学生姓名，成绩等级（不小于60为PASS，否则为FAIL）
class Student
{
public :
    Student ( string ,int);

    friend istream & operator >>(istream&,Student &);
    friend ostream & operator <<(ostream&,Student &);
private:
    string name;
    int score;
};

Student::Student( string name="def",int score=0){}

istream &operator >>(istream & is ,Student &s )
{
    is>> s.name>>s.score;
    return is;
}
ostream &operator <<(ostream & os ,Student &s)
{
    static int sum;sum=sum+1;
    os<<sum<<". "<<s.name<<" ";
    if(s.score>=60)
        os<<"PASS";
    else
        os<<"FAIL";
    return os;
}
计科1801~3班第14次课堂练习题（IO流与文件操作）
记录流的当前格式化状态标志字中的每一位用于记录一种格式，这种格式是不能被设置或清除的。     F
设置和清除格式标志字的成员函数需要通过对象来引用它们，输出显示格式的对象通常是cout。     T
操纵符本身是一个对象，它可以直接被提取符或插入符操作。     T
get()函数不能从流中提取终止字符，终止字符仍留在流中。getline()函数可以从流中提取终止字符，但终止字符被丢弃。     T
使用打开文件函数open()之前，需要定义一个流类对象，使用open()函数来操作该对象。     T
打开ASCⅡ码流文件和二进制流文件时，打开方式是相同的。     F
read()和write()函数可以读写文本文件，也可以读写二进制文件。     T
seekg()函数和seekp()函数分别用来定位读指针和写指针的。如果使用seek()函数可以同时定义读写指针。     F
预定义的插入符从键盘上接收数据是不带缓冲区的。     F
面是关于ios 类的叙述，正确的是（ ）。      A
A.它是istream 类和ostream 类的虚基类
B.它只是istream 类的虚基类
C.它只是ostream 类的虚基类
D.它是iostrearm 类的虚基类
关于read()函数的下列描述中，正确的是（ ）。     D
A.该函数只能用来从键盘输入中获取字符串
B.该函数所获取的字符多少是不受限制的
C.该函数只能用于文本文件的操作中
D.该函数只能按规定读取所指定的字符数
当使用ifstream 流类定义一个流对象并打开一个磁盘文件时，文件的隐含打开方式为（ ）。     A
A.ios::in
B.ios::out
C.ios::in|ios::out
D.ios::binary
下列函数中，（ ）是对文件进行写操作的。     D
A.get
B.read
C.seekg
D.put
在C++中，打开一个文件，就是将整个文件与一个（ ）建立关联，关闭一个文件，就是取消这种关联。     B
A.类
B.流
C.对象
D.结构
下列打开文件的表达式中，错误的是：     D
A.ofstream ofile; ofile.open(“C:\vc\abc.txt”,ios::binary);
B.fstream iofile;iofile.open(“abc.txt”,ios::ate);
C.ifstream ifile (“C:\vc\abc.txt”);
D.cout.open(“C:\vc\abc.txt”,ios::binary);
以下关于文件操作的叙述中，不正确的是：     B
A.打开文件的目的是使文件对象与磁盘文件建立联系
B.文件读写过程中，程序将直接与磁盘文件进行数据交换
C.关闭文件的目的之一是保证将输出的数据写入硬盘文件
D.关闭文件的目的之一是释放内存中的文件对象
使用操作符setw对数据进行格式输出时，需要包含（）文件。     C
A.iostream.h
B.fstream.h
C.iomanip.h
D.stdlib.h
计科1801~5班第15次课前练习题（异常处理）
If you are not interested in the contents of an exception object, the catch block parameter may be omitted.。     T
catch (type p) acts very much like a parameter in a function. Once the exception is caught, you can access the thrown value from this parameter in the body of a catch block.。     T
One of the major features in C++ is （ ） handling,which is a better way of handling errors.     D
A.data
B.pointer
C.test
D.exception
What is wrong in the following code?     C
  vector<int> v;
  v[0] = 2.5;   (2分)
A.The program has a compile error because there are no elements in the vector.
B.The program has a compile error because you cannot assign a double value to v[0].
C.The program has a runtime error because there are no elements in the vector.
D.The program has a runtime error because you cannot assign a double value to v[0].
If you enter 1 0, what is the output of the following code?     D
#include "iostream"
using namespace std;

int main()

{
  // Read two integers
	

	cout << "Enter two integers: ";
	
  int number1, number2;
	
  cin >> number1 >> number2;

  try
  {
    if (number2 == 0)
      throw number1;

    cout << number1 << " / " << number2 << " is "
      << (number1 / number2) << endl;

    cout << "C" << endl;
  }
  catch (int e)
  {
    cout << "A" ;
  }

  cout << "B" << endl;

  return 0;
}
A.A
B.B
C.C
D.AB
The function what() is defined in __.     A
A.exception
B.runtime_error
C.overflow_error
D.bad_exception
下列关于异常的描述中，错误的是（）。     A
A.编译错属于异常，可以抛出
B.运行错属于异常
C.硬件故障也可当异常抛出
D.只要是编程者认为是异常的都可当异常抛出
下列关于异常类的说法中，错误的是。     A
A.异常类由标准库提供，不可以自定义
B.C++的异常处理机制具有为抛出异常前构造的所有局部对象自动调用析构函数的能力
C.若catch块采用异常类对象接收异常信息，则在抛出异常时将通过拷贝构造函数进行对象复制，异常处理完后才将两个异常对象进行析构，释放资源
D.异常类对象抛出后，catch块会用类对象引用接收它以便执行相应的处理动作
求平方根函数mySqrt的异常处理
改造下面的求平方根函数mySqrt，当x小于0时，输出错误信息："Error: Can not take sqrt of negative number"；当x不小于0时，输出x的平方根。要求在main函数中采用C++的异常处理方法。
#include <iostream>
#include <cmath>

double my_sqrt(double);

int main()
{
	using namespace std;

	double a, b;
	cin >> a;
	try {
		b = my_sqrt(a);
		cout << "The sqrt of " << a << " is " << b << endl;
	}
	catch (const char* s)
	{
		cout << s << endl;
	}
	return 0;
}

double my_sqrt(double a)
{
	if (a < 0)
		throw "Error: Can not take sqrt of negative number";
	else
		return sqrt(a);
}
计科1801~3班第15次课堂练习题（异常处理）
Suppose Exception2 is derived from Exception1. Analyze the following code.     不选C
try {
statement1;
statement2;
statement3; }
catch (Exception1 ex1) { }
catch (Exception2 ex2) { }
A.If an exception of the Exeception2 type occurs, this exception is caught by the first catch block.
B.If an exception of the Exeception2 type occurs, this exception is caught by the second catch block.
C.The program has a compile error because these two catch blocks are in wrong order.
D.The program has a runtime error because these two catch blocks are in wrong order.
Suppose that statement2 throws an exception of type Exception2 in the following statement:     D
try {
statement1; statement2; statement3; }
catch (Exception1 ex1) { }
catch (Exception2 ex2) { }
catch (Exception3 ex3) { statement4; throw; }
statement5;
A.statement2
B.statement3
C.statement4
D.statement5
Suppose that statement3 throws an exception of type Exception3 in the following statement:     C
try {
statement1; statement2; statement3; }
catch (Exception1 ex1) { }
catch (Exception2 ex2) { }
catch (Exception3 ex3) { statement4; throw; }
statement5;
Which statements are executed after statement3 is executed?
A.statement2
B.statement3
C.statement4
D.statement5
下列关于异常的描述中，错误的是（）。     A
A.编译错属于异常，可以抛出
B.运行错属于异常
C.硬件故障也可当异常抛出
D.只要是编程者认为是异常的都可当异常抛出
下列关于异常类的说法中，错误的是。      A
A.异常类由标准库提供，不可以自定义
B.C++的异常处理机制具有为抛出异常前构造的所有局部对象自动调用析构函数的能力
C.若catch块采用异常类对象接收异常信息，则在抛出异常时将通过拷贝构造函数进行对象复制，异常处理完后才将两个异常对象进行析构，释放资源
D.异常类对象抛出后，catch块会用类对象引用接收它以便执行相应的处理动作
C++处理异常的机制是由（）3部分组成。     B
A.编辑、编译和运行
B.检查、抛出和捕获
C.编辑、编译和捕获
D.检查、抛出和运行
求两个数的调和平均数（异常处理）
两个数a和b的调和平均数的计算公式为：2×a×b/(a+b),下列函数hmean计算a和b的调和平均数并进行异常处理。请完成该函数并提交。
double hmean(double a, double b){
    if (a == -b)
        throw "bad hmean() arguments: a = -b not allowed";
    return 2.0 *a * b / (a + b);
}
数字格式异常
(NumberFormatException数字格式异常)编写一个程序，提示用户读取两个整数，然后显示他们的和。程序应该在输入不正确时提示用户再次输入数字。
#include <iostream>
#include<string.h>
using namespace std;
int f;
int toNumb(char co[])
{
    int len=strlen(co);
    int i;
    int sum=0;
    int w=1;
    for(i=len-1;i>=0;i--)
    {
        if(!(co[i]<='9' && co[i]>='0'))
        {
            f=1;
            return 0;
        }
        sum+=w*(co[i]-'0');
        w*=10;
    }
    return sum;
}
int main ()
{
    string a,b;
    while(1)
    {
        cin>>a>>b;
        f=0;
        int m=toNumb(&a[0]);
        int n=toNumb(&b[0]);
        if(f)
        {
            cout<<"Incorrect input and re-enter two integers:"<<endl;
            continue;
        }
        else
        {
            cout<<"Sum is "<<m+n<<endl;
            break;
        }
    }

}
计科1801~5班第16次课前练习题
在类的定义中，用于为对象分配内存空间，对类的数据成员进行初始化并执行其他内部管理操作的函数是     C
A.友元函数
B.虚函数
C.构造函数
D.析构函数
类的析构函数的作用是     D
A.一般成员函数的初始化
B.类的初始化
C.对象的初始化
D.删除类创建的对象
类的析构函数的作用是     C
A.一般成员函数的初始化
B.类的初始化
C.对象的初始化
D.删除类创建的对象
下列关于类和对象的叙述中，错误的是     A
A.一个类只能有一个对象
B.对象是类的具体实例
C.类是对某一类对象的抽象
D.类和对象的关系是一种数据类型与变量的关系
下列属于类的析构函数特征的是     A
A.一个类中只能定义一个析构函数
B.析构函数名与类名不同
C.析构函数的定义只能在类体内
D.析构函数可以有一个或多个参数
下列关于类定义的说法中，正确的是     A
A.类定义中包括数据成员和函数成员的声明
B.类成员的缺省访问权限是保护的
C.数据成员必须被声明为私有的
D.成员函数只能在类体外进行定义
假设MyClass是一个类，则该类的拷贝初始化构造函数的声明语句为（ ）     C
A.MyClass&(MyClass x);
B.MyClass(MyClass x);
C.MyClass(MyClass &x);
D.MyClass(MyClass *x);
下列关于类的构造函数的描述中，错误的是     B
A.类的构造函数可以重载
B.类可以没有构造函数
C.类的构造函数可以缺省
D.类的构造函数可以作为其它类型向本类类型进行转换的函数
下列对重载函数的描述中，（ ）是错误的。     A
A.重载函数中不允许使用默认参数
B.重载函数中编译根据参数表进行选择
C.不要使用重载函数来描述毫无相干的函数
D.构造函数重载将会给初始化带来多种方式
建立一个类对象时，系统自动调用     A
A.构造函数
B.析构函数
C.友元函数
D.成员函数
下面程序的运行结果为     C
#include<iostream.h>
class A
{
public:    
   A（）{cout<<"1";}
   ~A（）{cout<<"2";}
};
class B:public A
{
public:
     B（）{cout<<"3";}
     ~B（）{cout<<"4";}
};
void main（）
{  B b; }
A.1234
B.1324
C.1342
D.3142
类的析构函数是在什么时候调用的？     C
A.类创建时
B.创建对象时
C.删除对象时
D.不自动调用
C++提供的可有效分配对象空间的运算符是（ ）     B
A.delete
B.new
C.pos
D.auto
对于任意一个类，析构函数的个数最多为（ ）     B
A.0
B.1
C.2
D.3
实现数组类（C++ 拷贝构造函数、拷贝函数）
裁判测试程序样例中展示的是一段实现“数组类”的代码，其中缺失了部分代码，请补充完整，以保证测试程序正常运行。
Array(int n)
		:size(n)
	{
		data = new int[size] {0};
	}
	~Array()
	{
		delete[]data;
	}
	Array(const Array& a)
	{
		if (a.getsize() > 0)
		{
			size = a.getsize();
			data = new int[size];
			for (int i = 0; i < size; i++)
				data[i] = a[i];
		}
	}
	Array& operator=(const Array& a)
	{
		if (this == &a)
			return *this;
		size = a.getsize();
		delete[]data;
		data = new int[size];
		for (int i = 0; i < size; i++)
			data[i] = a[i];
		return *this;
	}

	int getsize(void)const { return size; }

	int operator[](int k)const
	{
		if (k < 0 || k >= size)
			throw ArrayIndexOutOfBoundsException(k);
		return this->data[k];
	}
计科1801~3班第16次课堂练习题
将构造函数说明为纯虚函数是没有意义的。     T
对象间赋值将调用拷贝构造函数。     F
设A为自定义类，现有普通函数int fun(A& x)。则在该函数被调用]时：     C
A.将执行复制构造函数来初始化形参x
B.仅在实参为常量时，才会执行复制构造函数以初始化形参x
C.无需初始化形参x
D.仅在该函数为A类的友元函数时，无需初始化形参x
在以下哪种情形，复制构造函数会被调用。     B
A.当一个对象采用引用方式，作为参数传递给一个函数
B.当一个函数采用值方式，返回一个对象
C.当一个对象赋值给另一个对象
D.以上答案都不对
假设A是一个类的名字,下面哪段程序不会用到A的拷贝构造函数？     A
A.A a1,a2; a1=a2;
B.void func( A a) { cout<<"good"<< endl; }
C.A func() { A tmp; return tmp;}
D.A a1; A a2(a1);
学生成绩的快速录入（构造函数）
现在需要录入一批学生的成绩（学号，成绩）。其中学号是正整数，并且录入时，后录入学生的学号会比前面的学号大；成绩分两等，通过(Pass,录入时用1代表),不通过(Fail,录入时用0代表）。
由于很多学号都是相邻的，并且学号相邻的学生成绩常常相同。所以在录入时，适当地加了速。如果当前学生的学号比前面的学号大1，且成绩与前面的成绩相同，则只输入0即可。
class Student{
  int no;
  int score;
public:
  static int count; 
  Student(int n,int s)
  {
    no=n;
    score=s;
    count++;
  }
  Student(Student &p)
  {
    no=p.no+1;
    score=p.score;
    count++;
  }
  void display()
  {
    cout<<no<<" ";
    if(score)
     cout<<"Pass"<<endl;
    else
     cout<<"Fail"<<endl;
  }
};
int Student::count=0;
解决内存泄漏问题
编译、运行下列程序后。从输出结果发现没有调用 class Y 的析构函数，出现了内存泄漏。请尝试修改class X类的定义解决这个内存泄露问题。并提交定义class X类的代码。
class X{
public:
    X() { p = new int[2]; cout << "X().    "; }
  virtual ~X() { delete [] p; cout << "~X().\n"; }
private:
    int* p;
};
为my_string类创建复制构造函数copy constructor 
为下面的my_string类创建一个复制构造函数，并将定义该类的代码提交。
class my_string {
private:
    char *s;
public:
    my_string(char *str) {
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }
    my_string(const my_string &obj) {
        s = new char[strlen(obj.s) + 1];
        strcpy(s, obj.s);
    }
    ~my_string() {
        delete [] s;
        cout << "Freeing s\n";
    }
    void show() {
        cout << s << "\n";
    }
};
计科18010203班第17次课堂练习题
通过命名空间可以区分具有相同名字的函数     T
编译预处理指令，是C++语言中不可或缺的重要部分。     F
using namespace std; 这条语句的作用是将命名空间std内的所有标识符暴露在当前作用域内。     T
程序的编译是以文件为单位的，因此将程序分到多个文件中可以减少每次对程序修改所带来的编译工作量。     T
在面向对象系统中，对象是基本的运行时实体，它 _ 。     C
A.只能包括数据(属性)
B.只能包括操作(行为)
C.把属性和行为封装为一个整体
D.必须具有显式定义的对象名
在面向对象系统中，对象的属性是__。     C
A.对象的行为特性
B.和其他对象相关联的方式
C.和其他对象相互区分的特性
D.与其他对象交互的方式
阅读程序并填空。
#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
using namespace std;

class employee{
public:  
   employee(string name,string phoneNumber,string address){
      this->name=name;
      this->phoneNumber=phoneNumber;
      this->address=address;
   }
   string name;
   string phoneNumber;
   string address;
};
int main()
{
   map<int,employee*> employeeMap;
   typedef pair<int,employee*>employeePair;
   for(int employIndex=1001;employIndex<=1003;employIndex++){
      char temp[10];    //临时存储单元
      sprintf(temp,"%d",employIndex);//将转化为字符串存储在temp中
      string tmp(  temp );     // 通过temp构造string对象
      employee* p=(2分)("employee-"+tmp,"85523927-"+tmp, "address-"+tmp);
      employeeMap.(2分)(employeePair(employIndex,p));//将员工编号和员工信息插入到employeeMap对象中
}
   int employeeNo=0;
   cout<<"请输入员工编号：";
   cin>>employeeNo;   // 从标准输入获得员工号
  (2分) ::iterator it;
   it=employeeMap.find(employeeNo);   // 根据员工编号查找员工信息
   if(it==(2分)){
      cout<<"该员工编号不存在！"<<endl;
      return -1;
   }
   cout<<"你所查询的员工编号为："<<it->first<<endl;
   cout<<"该员工姓名："<<it->second->name<<endl;
   cout<<"该员工电话："<<(2分)<<endl;
   cout<<"该员工地址："<<it->second->address<<endl;
   return 0;
}
计科18010203班第18次课堂练习题
C++对C最大的改进是 
A.引入了函数重载
B.面向对象
C.引入了引用
D.引入了new和delete
继承机制的作用是     C
A.信息隐藏
B.数据封装
C.定义新类
D.数据抽象
引入友元的主要目的是为了     C
A.增强数据安全性
B.提高程序的可靠性
C.提高程序的效率和灵活性
D.保证类的封装性
下列描述中，（ ）是抽象类的特性.     D
A.可以说明虚函数
B.可以进行构造函数重载
C.可以定义友元函数
D.不能定义该类对象
