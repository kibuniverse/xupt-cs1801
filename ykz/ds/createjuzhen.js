const scanf = require('scanf');


// 定义图的结构
function MyGraph() {
	this.vexs = [];
	this.arc = [];
	this.vexnum = null;
	this.arcnum = null;
}

// 构造一个图的对象
var G = new MyGraph();

function createMyGraph() {
	console.log('请输入顶点个数');
	//输入顶点的个数
	G.vexnum = scanf('%d');
	console.log('请输入边的个数');
	G.arcnum = scanf('%d');
	console.log('请依次输入各个顶点的名称');
	for(let i = 0; i < G.vexnum; i ++) {
		G.vexs[i] = scanf('%s');
	}


	// 初始化邻接矩阵
	for(let i = 0; i < G.vexnum; i++) {
		G.arc[i] = [];
		for(let j = 0; j < G.vexnum; j++) {
			G.arc[i][j] = 0;
		}
	}


	for(let k = 0; k < G.arcnum; k ++) {
		console.log('请输入要添加的边 x -> x');
		let temp = scanf('%c->%c');

		// 寻找在数组中的位置
		let i = G.vexs.indexOf(temp[0]),
			j = G.vexs.indexOf(temp[1]);
		G.arc[i][j] = 1;
		//假设该图为临界矩阵
		G.arc[j][i] = 1;
	}
	console.log(G.arc);
}

createMyGraph();

// 图的深度优先遍历
// 递归

var visit = [];
function DFSTraverse(i) {
	visit[i] = true;
	console.log('顶点:', G.vexs[i]);
	for(let j = 0; j < G.vexnum; j ++) {
		if(G.arc[i][j] == 1 && !visit[j]) {
			console.log(G.vexs[i], '->', G.vexs[j])
			DFSTraverse(j);
		}
	}
}

// 图的广度优先遍历
function BFSTraverse(i) {
	visit[i] = true;
	console.log('顶点:', G.vexs[i]);
	for(let j = 0; j < G.vexnum; j ++) {
		if(G.arc[i][j] == 1 && !visit[j]) {
			console.log(G.vexs[i], '->', G.vexs[j])
		}
	}
	for(let j = 0; j < G.vexnum; j ++) {
		if(G.arc[i][j] == 1 && !visit[j]) {
			BFSTraverse(j);
		}
	}
}

BFSTraverse(0);


// 两种非递归方式
// 

function DFSTraverse() {
	//栈
	var stack = new Array();

	stack.push(0);
	while(stack.length != 0) {
		v = stack.pop();
		if(!visit[v]) {
			console.log(G.vexs[v]);
			visit[v] = true;
		}
		w = G.arc[v].indexOf(1);
		while(w != -1) {
			if(!visit[w]) {
				stack.push(w);
			}
			w = G.arc[v].indexOf(1, w + 1);
		}
	}
}



function BFSTraverse() {
	//队列
	var queue = new Array();

	queue.push(0);
	while(queue.length != 0) {
		v = queue.shift();
		if(!visit[v]) {
			console.log(G.vexs[v]);
			visit[v] = true;
		}
		w = G.arc[v].indexOf(1);
		while(w != -1) {
			if(!visit[w]) {
				queue.push(w);
			}
			w = G.arc[v].indexOf(1, w + 1);
		}
	}
}

