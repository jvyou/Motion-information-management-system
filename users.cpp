#include <iostream>
#include <cstdio>
#include <string.h>
#include <iomanip>
#include "list.h"
#include "users.h"
using namespace std;
#define OK 1
#define ERROR 0
status Addlist(SqList &L)
{
	int i,j,m=0;
	while(m==0)
	{
		j=0;
		cout<<"请输入用户名：";
		cin>>L.elem[L.length].id;
		for(i=0;i<L.length;i++)
		{
			if(strcmp(L.elem[i].id,L.elem[L.length].id)==0)
			{
				cout<<"您输入的用户名已存在，请重新输入！";
				break;
			}
		}
		if(i!=L.length)
		continue;
		while(L.elem[L.length].id[j]!='\0')
		{
			if((L.elem[L.length].id[j]<'0' || L.elem[L.length].id[j]>'9')||L.elem[L.length].id[0]!='1')
			break;
			j++;
		}
		if(j==11)
		m=1;
		else
		{
			cout<<"您输入的用户名不合法，请输入11位数字且第一位数字为1"<<endl;
			cout<<"请重新输入！"<<endl;
		}
	}
	cout<<"请输入昵称：";
	cin>>L.elem[L.length].name;
	while(1)
	{
		j=0;
		cout<<"请输入性别：(男or女)";
		cin>>L.elem[L.length].sex;
		while(L.elem[L.length].sex[j]!='\0')
		{
			j++;
		}
		if((strcmp(L.elem[L.length].sex,"男")==0 || strcmp(L.elem[L.length].sex,"女")==0 )&&j==2)
		break;
		else
		cout<<"您输入的性别不合法，请重新输入！";
	}
	cout<<"请输入年龄：";
	cin>>L.elem[L.length].age;
	for(i=0;i<7;i++)
	{
		L.elem[L.length].step[i]=0;
	}
	L.elem[L.length].avgst=0;
	L.elem[L.length].day=0;
	L.length++;
	return OK;
}
status Deletelist(SqList &L,char *s)
{
	int w,j;
	for(w=0;w<L.length;w++)
	{
		if(strcmp(L.elem[w].id,s)==0)
		{
			break;
		}
	}
	if(w==L.length)
	return ERROR;
	for(j=w;j<L.length-1;j++)
	{
		L.elem[j]=L.elem[j+1];
	}
	L.length--;
	return OK;
}
status Deletelist2(SqList &L,char *s)
{
	int w,j,sum=0,flag=0;
	while(1)
	{
		for(w=0;w<L.length;w++)
		{
			if(strcmp(L.elem[w].name,s)==0)
			{
				flag=1;
				sum++;
				break;
			}
		}
		if(w==L.length&&flag==1)
		{
			cout<<"本次按昵称删除，共删除的人数为："<<sum<<endl; 
			return OK;
		}
		if(w==L.length)
		return ERROR;
		for(j=w;j<L.length-1;j++)
		{
			L.elem[j]=L.elem[j+1];
		}
		L.length--;
	}
	return OK;
}
status Travellist(SqList L,char *s)
{
	int i;
	for(i=0;i<L.length;i++)
	{
		if(strcmp(L.elem[i].id,s)==0)
		{
			Travellist5();
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
			break;
		}
	}
	if(i==L.length)
	return ERROR;
	else
	return OK;
}
status Travellist3(SqList L,char *s)
{
	int i,m=0,flag=1;
	for(i=0;i<L.length;i++)
	{
		if(strcmp(L.elem[i].sex,s)==0)
		{
			if(flag==1)
			{
				Travellist5();
				flag=0;
			}
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
			m=1;
		}
	}
	if(m==0)
	return ERROR;
	else
	return OK;
}
status Travellist4(SqList L,int d)
{
	int i,m=0,flag=1;
	for(i=0;i<L.length;i++)
	{
		if(L.elem[i].day==d)
		{
			if(flag==1)
			{
				Travellist5();
				flag=0;
			}
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
			m=1;
		}
	}
	if(m==0)
	return ERROR;
	else
	return OK;
}
status Travellist2(SqList L)
{
	Travellist5();
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
status Travellist5()
{
	cout<<left<<setw(16)<<"用户名";
	cout<<left<<setw(8)<<"昵称";
	cout<<left<<setw(8)<<"性别";
	cout<<left<<setw(8)<<"年龄";
	for(int j=0;j<7;j++)
	{
		printf("第%d天   ",j+1); 
	}
	cout<<left<<setw(10)<<"平均步数";
	cout<<left<<setw(8)<<"连续运动天数";
	cout<<endl;
}
status Modifylist(SqList &L,char *s)
{
	int i,j,k,m=0;
	char q[20];
	for(i=0;i<L.length;i++)
	{
		if(strcmp(L.elem[i].id,s)==0)
		{
			while(m==0)
			{
				j=0;
				cout<<"请输入修改后的用户名：";
				cin>>q;
				for(k=0;k<L.length;k++)
				{
					if(strcmp(L.elem[k].id,q)==0&&k!=i)
					{
						cout<<"您输入的用户名已存在，请重新输入！";
						break;
					}
				}
				if(k!=L.length)
				continue;
				while(q[j]!='\0')
				{
					if((q[j]<'0' || q[j]>'9')&&q[0]=='1')
					break;
					j++;
				}
				if(j==11)
				m=1;
				else
				{
					cout<<"您输入的用户名不合法，请输入11位数字且第一位数字为1"<<endl;
					cout<<"请重新输入！"<<endl;
				}
			}
			strcpy(L.elem[i].id,q);
			cout<<"请输入修改后的昵称：";
			cin>>L.elem[i].name;
			while(1)
			{
				j=0;
				cout<<"请输入修改后的性别：(男or女)";
				cin>>L.elem[i].sex;
				while(L.elem[i].sex[j]!='\0')
				{
					j++;
				}
				if((strcmp(L.elem[i].sex,"男")==0 || strcmp(L.elem[i].sex,"女")==0 )&&j==2)
				break;
				else
				cout<<"您输入的性别不合法，请重新输入！(男or女)";
			}
			cout<<"请输入修改后的年龄：";
			cin>>L.elem[i].age;
			break;
		}
	}
	if(i==L.length)
	return ERROR;
	else
	return OK;
}
