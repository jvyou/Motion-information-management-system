#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include "list.h"
#include "save.h"
using namespace std;
#define OK 1
#define ERROR 0
status Readtxtlist(SqList &L)
{
	int m=0;
	int n;
	fstream f;
	f.open("user.txt",ios::in);
	while(f>>L.elem[m].id>>L.elem[m].name>>L.elem[m].sex>>L.elem[m].age)
	{
		n=0;
		while(f>>L.elem[m].step[n])
		{
			n++;
			if(n==7)
			break;
		}
		f>>L.elem[m].avgst;
		f>>L.elem[m].day;
		m++;
	}
	L.length=m;
	f.close();
	for(int i=0;i<L.length;i++)
	{
		cout<<left<<setw(16)<<L.elem[i].id;
		cout<<left<<setw(8)<<L.elem[i].name;
		cout<<left<<setw(8)<<L.elem[i].sex;
		cout<<left<<setw(8)<<L.elem[i].age;
		for(int j=0;j<7;j++)
		{
			cout<<left<<setw(8)<<L.elem[i].step[j];
		}
		cout<<left<<setw(16)<<L.elem[i].avgst;
		cout<<left<<setw(8)<<L.elem[i].day;
		cout<<endl;
	}
	return OK;
}
status Readtxtgraph(AMGraph &G)
{
	int i=0,j,k;
	double w;
	int s;
	char s1[50],s2[50];
	fstream f;
	f.open("place.txt",ios::in);
	while(f>>s>>G.vexs[i])
	{
		i++;
	}
	f.close();
	G.vexnum=i;
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			G.arcs[i][j]=Maxint;//边的权值均设置为无穷大 
		}
	}
	i=0;
	f.open("distance.txt",ios::in);
	while(f>>s1>>s2>>w)
	{
		k=LocateVex(G,s1);
		j=LocateVex(G,s2);//确定v1,v2在G中的位置 
		G.arcs[k][j]=w;
		G.arcs[j][k]=w;
		i++;
	}
	f.close();
	G.arcnum=i;
	cout<<"运动地点名称："<<endl;
	for(i=0;i<G.vexnum;i++)
	{
		cout<<G.vexs[i];
		cout<<endl;
	}
	cout<<"各运动地点间距离得出的邻接矩阵："<<endl;
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			if(G.arcs[i][j]==32767) 
			cout<<left<<setw(4)<<"∞";
			else
			cout<<left<<setw(4)<<G.arcs[i][j];
		}
	}
	return OK;
}
status LocateVex(AMGraph G,char *u)
{
	int o;
	for(o=0;o<G.vexnum;o++)
	{
		if(strcmp(G.vexs[o],u)==0)
		return o;
	}
	return -1;
}
status Writetxt(SqList &L)
{
	int i;
	fstream f;
	f.open("user.txt",ios::out);
	for(int i=0;i<L.length;i++)
	{
		f<<left<<setw(16)<<L.elem[i].id;
		f<<left<<setw(8)<<L.elem[i].name;
		f<<left<<setw(8)<<L.elem[i].sex;
		f<<left<<setw(8)<<L.elem[i].age;
		for(int j=0;j<7;j++)
		{
			f<<left<<setw(8)<<L.elem[i].step[j];
		}
		f<<left<<setw(16)<<L.elem[i].avgst;
		f<<left<<setw(8)<<L.elem[i].day;
		f<<endl;
	}
	f.close();
	return OK;
}
