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
		cout<<"�������û�����";
		cin>>L.elem[L.length].id;
		for(i=0;i<L.length;i++)
		{
			if(strcmp(L.elem[i].id,L.elem[L.length].id)==0)
			{
				cout<<"��������û����Ѵ��ڣ����������룡";
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
			cout<<"��������û������Ϸ���������11λ�����ҵ�һλ����Ϊ1"<<endl;
			cout<<"���������룡"<<endl;
		}
	}
	cout<<"�������ǳƣ�";
	cin>>L.elem[L.length].name;
	while(1)
	{
		j=0;
		cout<<"�������Ա�(��orŮ)";
		cin>>L.elem[L.length].sex;
		while(L.elem[L.length].sex[j]!='\0')
		{
			j++;
		}
		if((strcmp(L.elem[L.length].sex,"��")==0 || strcmp(L.elem[L.length].sex,"Ů")==0 )&&j==2)
		break;
		else
		cout<<"��������Ա𲻺Ϸ������������룡";
	}
	cout<<"���������䣺";
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
			cout<<"���ΰ��ǳ�ɾ������ɾ��������Ϊ��"<<sum<<endl; 
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
	cout<<left<<setw(16)<<"�û���";
	cout<<left<<setw(8)<<"�ǳ�";
	cout<<left<<setw(8)<<"�Ա�";
	cout<<left<<setw(8)<<"����";
	for(int j=0;j<7;j++)
	{
		printf("��%d��   ",j+1); 
	}
	cout<<left<<setw(10)<<"ƽ������";
	cout<<left<<setw(8)<<"�����˶�����";
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
				cout<<"�������޸ĺ���û�����";
				cin>>q;
				for(k=0;k<L.length;k++)
				{
					if(strcmp(L.elem[k].id,q)==0&&k!=i)
					{
						cout<<"��������û����Ѵ��ڣ����������룡";
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
					cout<<"��������û������Ϸ���������11λ�����ҵ�һλ����Ϊ1"<<endl;
					cout<<"���������룡"<<endl;
				}
			}
			strcpy(L.elem[i].id,q);
			cout<<"�������޸ĺ���ǳƣ�";
			cin>>L.elem[i].name;
			while(1)
			{
				j=0;
				cout<<"�������޸ĺ���Ա�(��orŮ)";
				cin>>L.elem[i].sex;
				while(L.elem[i].sex[j]!='\0')
				{
					j++;
				}
				if((strcmp(L.elem[i].sex,"��")==0 || strcmp(L.elem[i].sex,"Ů")==0 )&&j==2)
				break;
				else
				cout<<"��������Ա𲻺Ϸ������������룡(��orŮ)";
			}
			cout<<"�������޸ĺ�����䣺";
			cin>>L.elem[i].age;
			break;
		}
	}
	if(i==L.length)
	return ERROR;
	else
	return OK;
}
