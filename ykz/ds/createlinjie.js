

function ArcNode() {
    this.adjvex = null; //该弧所指向的顶点的位置
    this.nextarc = null; //指向下一条弧的指针	
}

function VNode() {
    this.data = null; //顶点信息
    this.firstarc = null; //指向第一条依附该点顶点的弧的指针
}

function ALGraph() {
    this.vertices = [];
    this.vexnum = 0;  // 顶点数
    this.arcnum = 0;  // 弧数
}

//定位函数
function locateVex(g, v1) {
    var i;
    for (i = 0; i < g.vexnum; i++) {
        if (g.vertices[i].data == v1) {
            return i;
        }
    }
    return -1;
};

//创建无向图
function createWX(g, arcArr) {
    var p1, p2;
    var i, j, k; 
    var v1, v2;
    for (i = 0; i < g.vexnum; i++) {
        // 生成一个新的结点对象
        var vnode = new VNode();
        vnode.data = i;
        vnode.firstarc = null;
        g.vertices[i] = vnode;
    }
    for (k = 0; k < g.arcnum; k++) {
        var arc = arcArr[k];
        v1 = arc.tail; //弧尾
        v2 = arc.head; //弧头
        i = locateVex(g, v1);
        j = locateVex(g, v2);
        //生成一个新表结点
        //
        //插入法
        p1 = new ArcNode();
        p1.adjvex = j;
        p1.nextarc = g.vertices[i].firstarc;
        g.vertices[i].firstarc = p1;
        p2 = new ArcNode();
        p2.adjvex = i;
        p2.nextarc = g.vertices[j].firstarc;
        g.vertices[j].firstarc = p2;
    }
}
// 非递归遍历
function traverse(g) {
    var i;
    for (i = 0; i < g.vexnum; i++) {
        var p = g.vertices[i].firstarc;
        var output = "";
        while (p != null) {
            output += "->" + p.adjvex;
            p = p.nextarc;
            
        }
        console.log(i + output);
    }
}



visit = []

function traverse2(g, i) {
    visit[i] = true;
    console.log(i);
    var p = g.vertices[i].firstarc;
    while(p) {
        // 如果该点没走过，则进入
        if(!visit[p.adjvex]) {
            traverse2(g, p.adjvex);
        }
        console.log(p.adjvex); // visit[p.adjvex]
        p = p.nextarc;
    }
}





//测试  立即执行函数
(function main() {
    var g = new ALGraph();
    g.vexnum = 5; //总顶点数
    g.arcnum = 6; //总弧数
    var arcArr = [{
        tail: 0,
        head: 1
    }, {
        tail: 0,
        head: 2
    }, {
        tail: 0,
        head: 4
    }, {
        tail: 1,
        head: 2
    }, {
        tail: 2,
        head: 3
    }, {
        tail: 3,
        head: 4
    }];
    createWX(g, arcArr);
    traverse(g);
    traverse2(g, 0);
})();