#include <iostream>
#include <cstdio>
#include <string.h>
#include "list.h"
#include "rankings.h"
using namespace std;
#define OK 1
#define ERROR 0
status Sortlist(SqList &L)
{
	int i,j;
	User k;
	for(i=0;i<L.length;i++)
	{
		for(j=0;j<L.length-1-i;j++)
		{
			if(L.elem[j].step[6]<L.elem[j+1].step[6])
			{
				k=L.elem[j];
				L.elem[j]=L.elem[j+1];
				L.elem[j+1]=k;
			}
		}
	}
	return OK;
}
status Sortlist2(SqList &L)
{
	int i,j;
	User k;
	for(i=0;i<L.length;i++)
	{
		for(j=0;j<L.length-1-i;j++)
		{
			if(L.elem[j].day<L.elem[j+1].day)
			{
				k=L.elem[j];
				L.elem[j]=L.elem[j+1];
				L.elem[j+1]=k;
			}
		}
	}
	return OK;
}
status Sortlist3(SqList L,char *s)
{
	int i,j,t;
	int a[2][7];
	for(i=0;i<L.length;i++)
	{
		if(strcmp(L.elem[i].id,s)==0)
		{
			break;
		}
	}
	if(i==L.length)
	return ERROR;
	cout<<"此用户用户名为："<<L.elem[i].id<<endl;
	cout<<"此用户昵称为："<<L.elem[i].name<<endl;
	for(j=0;j<7;j++)
	{
		a[0][j]=L.elem[i].step[j];
		a[1][j]=j;
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<7-1-i;j++)
		{
			if(a[0][j]<a[0][j+1])
			{
				t=a[0][j];
				a[0][j]=a[0][j+1];
				a[0][j+1]=t;
				t=a[1][j];
				a[1][j]=a[1][j+1];
				a[1][j+1]=t;
			}
		}
	}
	printf("七天的排行如下：\n"); 
	for(i=0;i<7;i++)
	{
		printf("第%d天：    ",a[1][i]+1);
		printf("%d",a[0][i]);
		printf("\n");
	}
	return OK;
}
