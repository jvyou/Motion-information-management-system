#ifndef _LIST_H
#define _LIST_H
typedef int status;
typedef struct {
	char id[20];
	char name[20];
	char sex[10];
	int age;
	int step[7];
	double avgst;
	int day;
}User;
typedef struct {
	User *elem;
	int length;
}SqList;
status InitList(SqList &L);
#define Maxint 32767//表示无穷大 
#define MVNum 20//最大顶点数 
typedef char VerTexType;//设顶点的数据类型为字符型
typedef double ArcType;//假设边的权值类型为浮点型 
typedef struct{
	VerTexType vexs[MVNum][50];//顶点表
	ArcType arcs[MVNum][MVNum];//邻接矩阵
	int vexnum,arcnum;//图的当前点数和边数 
}AMGraph;
#endif
