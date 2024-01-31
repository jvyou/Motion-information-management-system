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
#define Maxint 32767//��ʾ����� 
#define MVNum 20//��󶥵��� 
typedef char VerTexType;//�趥�����������Ϊ�ַ���
typedef double ArcType;//����ߵ�Ȩֵ����Ϊ������ 
typedef struct{
	VerTexType vexs[MVNum][50];//�����
	ArcType arcs[MVNum][MVNum];//�ڽӾ���
	int vexnum,arcnum;//ͼ�ĵ�ǰ�����ͱ��� 
}AMGraph;
#endif
