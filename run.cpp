#include <iostream>
#include <cstdio>
#include <string.h>
#include "list.h"
#include "run.h"
using namespace std;
#define OK 1
#define ERROR 0
status Addlistrun(SqList &L)
{
	int i,j,k,o;
	int max;
	double sum;
	for(k=0;k<L.length;k++)
	{
		max=0;
		sum=0;
		j=0;
		cout<<"请输入为用户名为："<<L.elem[k].id;
		cout<<"  昵称为："<<L.elem[k].name<<"  所添加的第7天的步数：";
		cin>>o; 
		for(i=0;i<6;i++)
		{
			L.elem[k].step[i]=L.elem[k].step[i+1];
		}
		L.elem[k].step[i]=o;
		for(i=0;i<7;i++)
		{
			sum+=L.elem[k].step[i];
			if(L.elem[k].step[i]!=0)
			{
				j++;
			}
			else
			{
				if(j>=max)
				max=j;
				j=0; 
			}
		}
		if(j>=max)
		max=j;
		cout<<"经计算该用户七天的平均步数为：";
		printf("%.2lf",sum/7);
		cout<<"经计算该用户的连续运动天数为："<<max<<endl;
		L.elem[k].avgst=sum/7;
		L.elem[k].day=max;
	}
	return OK;
}
status Modifylistrun(SqList &L,char *s,int d)
{
	int k,j=0,i;
	int max=0;
	double sum=0;
	for(k=0;k<L.length;k++)
	{
		if(strcmp(L.elem[k].id,s)==0)
		{
			L.elem[k].step[6]=d;
			for(i=0;i<7;i++)
			{
				sum+=L.elem[k].step[i];
				if(L.elem[k].step[i]!=0)
				{
					j++;
				}
				else
				{
					if(j>=max)
					max=j;
					j=0; 
				}
			}
			if(j>=max)
			max=j;
			cout<<"经计算您七天的平均步数为：";
			printf("%.2lf",sum/7);
			cout<<"经计算您的连续运动天数为："<<max<<endl;
			L.elem[k].avgst=sum/7;
			L.elem[k].day=max;
			break;
		}
	}
	if(k==L.length)
	return ERROR;
	else
	return OK;
}
