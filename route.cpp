#include <iostream>
#include <cstdio>
#include <string.h>
#include <iomanip>
#include <graphics.h> 
#include <conio.h>
#include "list.h"
#include "route.h"
using namespace std;
#define OK 1
#define ERROR 0
status Protractgraph(AMGraph G)
{
	char s[5];
	int i,j=5;
	initgraph(1200,600);
	circle(100,100,20);
	sprintf(s,"%d",12);
	outtextxy(90,90,s);
	circle(100,175,20);
	sprintf(s,"%d",13);
	outtextxy(90,165,s);
	circle(100,250,20);
	sprintf(s,"%d",16);
	outtextxy(90,240,s);
	circle(240,175,20);
	sprintf(s,"%d",17);
	outtextxy(230,165,s);
	circle(240,250,20);
	sprintf(s,"%d",19);
	outtextxy(230,240,s);
	circle(380,250,20);
	sprintf(s,"%d",15);
	outtextxy(370,240,s);
	circle(520,175,20);
	sprintf(s,"%d",18);
	outtextxy(510,165,s);
	circle(520,250,20);
	sprintf(s,"%d",3);
	outtextxy(510,240,s);
	circle(380,325,20);
	sprintf(s,"%d",2);
	outtextxy(370,315,s);
	circle(660,25,20);
	sprintf(s,"%d",14);
	outtextxy(650,15,s);
	circle(660,100,20);
	sprintf(s,"%d",11);
	outtextxy(650,90,s);
	circle(660,175,20);
	sprintf(s,"%d",10);
	outtextxy(650,165,s);
	circle(660,250,20);
	sprintf(s,"%d",0);
	outtextxy(650,240,s);
	circle(660,325,20);
	sprintf(s,"%d",1);
	outtextxy(650,315,s);
	circle(800,250,20);
	sprintf(s,"%d",4);
	outtextxy(790,240,s);
	circle(800,325,20);
	sprintf(s,"%d",5);
	outtextxy(790,315,s);
	circle(800,400,20);
	sprintf(s,"%d",7);
	outtextxy(790,390,s);
	circle(940,325,20);
	sprintf(s,"%d",6);
	outtextxy(930,315,s);
	circle(940,400,20);
	sprintf(s,"%d",8);
	outtextxy(930,390,s);
	circle(1080,325,20);
	sprintf(s,"%d",9);
	outtextxy(1070,315,s);
	line(120,100,640,25);
	sprintf(s,"%.1f",5.1);
	outtextxy(380,62.5,s);
	line(120,100,640,100);
	sprintf(s,"%.1f",1.4);
	outtextxy(380,100,s);
	line(120,100,640,175);
	sprintf(s,"%.1f",1.5);
	outtextxy(380,137.5,s);
	line(100,120,100,155);
	sprintf(s,"%.1f",1.7);
	outtextxy(100,137.5,s);
	line(100,195,100,230);
	sprintf(s,"%.1f",1.9);
	outtextxy(100,212.5,s);
	line(120,175,220,175);
	sprintf(s,"%.1f",3.1);
	outtextxy(170,175,s);
	line(115,190,225,235);
	sprintf(s,"%.2f",0.62);
	outtextxy(170,212.5,s);
	line(120,250,220,250);
	sprintf(s,"%.1f",2.3);
	outtextxy(170,250,s);
	line(240,195,240,230);
	sprintf(s,"%.1f",3.3);
	outtextxy(240,212.5,s);
	line(225,190,115,235);
	sprintf(s,"%.1f",1.8);
	outtextxy(190,192.5,s);
	line(260,175,500,175);
	sprintf(s,"%.1f",3.5);
	outtextxy(380,175,s);
	line(260,250,360,250);
	sprintf(s,"%.2f",0.67);
	outtextxy(310,250,s);
	line(380,230,500,175);
	sprintf(s,"%.1f",1.4);
	outtextxy(440,202.5,s);
	line(400,250,500,250);
	sprintf(s,"%.1f",1.8);
	outtextxy(450,250,s);
	line(520,195,520,230);
	sprintf(s,"%.1f",2.1);
	outtextxy(520,212.5,s);
	line(540,250,640,250);
	sprintf(s,"%.1f",1.4);
	outtextxy(590,250,s);
	line(660,195,660,230);
	sprintf(s,"%.1f",2.8);
	outtextxy(660,212.5,s);
	line(660,270,660,305);
	sprintf(s,"%.2f",0.91);
	outtextxy(660,287.5,s);
	line(660,45,660,80);
	sprintf(s,"%.1f",5.2);
	outtextxy(660,62.5,s);
	line(660,120,660,155);
	sprintf(s,"%.2f",0.43);
	outtextxy(660,137.5,s);
	line(680,250,780,250);
	sprintf(s,"%.1f",2.6);
	outtextxy(730,250,s);
	line(800,270,800,305);
	sprintf(s,"%.1f",3.0);
	outtextxy(800,287.5,s);
	line(800,345,800,380);
	sprintf(s,"%.1f",3.9);
	outtextxy(800,362.5,s);
	line(820,325,920,325);
	sprintf(s,"%.1f",2.4);
	outtextxy(870,325,s);
	line(820,400,920,400);
	sprintf(s,"%.1f",1.8);
	outtextxy(870,400,s);
	line(940,345,940,380);
	sprintf(s,"%.1f",2.7);
	outtextxy(940,362.5,s);
	line(960,325,1060,325);
	sprintf(s,"%.1f",3.8);
	outtextxy(1010,325,s);
	line(1080,345,960,400);
	sprintf(s,"%.1f",2.9);
	outtextxy(1020,372.5,s);
	line(380,305,240,270);
	sprintf(s,"%.1f",1.4);
	outtextxy(310,287.5,s);
	line(380,305,380,270);
	sprintf(s,"%.1f",1.8);
	outtextxy(380,287.5,s);
	line(380,305,520,270);
	sprintf(s,"%.1f",0.9);
	outtextxy(450,287.5,s);
	line(400,325,640,325);
	sprintf(s,"%.2f",0.44);
	outtextxy(520,325,s);
	line(50,100,100,100);
	line(50,100,50,325);
	sprintf(s,"%.1f",1.2);
	outtextxy(50,212.5,s);
	line(50,325,360,325);
	for(i=0;i<10;i++)
	{
		sprintf(s,"%d",i);
		outtextxy(10+j,500,s);
		outtextxy(25+j,500,G.vexs[i]);
		j+=120;
	}
	j=5;
	for(;i<G.vexnum;i++)
	{
		sprintf(s,"%d",i);
		outtextxy(10+j,525,s);
		outtextxy(25+j,525,G.vexs[i]);
		j+=120;
	}
	getch();
	closegraph();
	return OK;
}
status Selectgraph(AMGraph G,char *s)
{
	int n;
	for(n=0;n<G.vexnum;n++)
	{
		if(strcmp(G.vexs[n],s)==0)
		break;
	}
	if(n==G.vexnum)
	return ERROR;
	int p[G.vexnum][G.vexnum];
	int i,S[G.vexnum],j,k;
	int a[G.vexnum];
	int num=1,u;
	double dist[G.vexnum],wmin;
	for(i=0;i<G.vexnum;i++)
	{
		a[i]=-1;
	}
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			p[i][j]=-1;
		}
	}
	for(i=0;i<G.vexnum;i++)
	{
		dist[i]=G.arcs[n][i];
		S[i]=0;
	}
	S[n]=1;
	for(i=0;i<G.vexnum;i++)
	{
		p[i][0]=n;
	}
	do
	{
		wmin=Maxint;
		u=n;
		for(i=0;i<G.vexnum;i++)
		{
			if(S[i]==0)
			{
				if(dist[i]<wmin)
				{
					u=i;
					wmin=dist[i];
				}
			}
		}
		S[u]=1;
		for(i=0;i<G.vexnum;i++)
		{
			if(p[u][i]==-1)
			{
				p[u][i]=u;
				break;
			}
		}
		for(i=0;i<G.vexnum;i++)
		{
			if(S[i]==0)
			{
				if(dist[u]+G.arcs[u][i]<dist[i])
				{
					k=1;
					for(j=0;j<G.vexnum;j++)
					{
						if(p[i][j]==-1&&a[i]==-1)
						a[i]=j; 
						if(p[i][j]==-1)
						{
							break;
						}
					}
					j=a[i];
					while(p[u][k]!=-1)
					{
						p[i][j]=p[u][k];
						k++;
						j++;
					}
					dist[i]=dist[u]+G.arcs[u][i];
				}
				if(num==G.vexnum-2)
				p[i][j]=i;
			}
		}
		num++;
	}while(num!=G.vexnum-1);
	for(i=0;i<G.vexnum;i++)
	{
		j=0;
		if(i==n)
		continue;
		else
		{
			while(p[i][j]!=-1)
			{
				cout<<left<<setw(16)<<G.vexs[p[i][j]];
				j++;
			}
			cout<<dist[i]<<endl;
		}
	}
	return OK;
}
