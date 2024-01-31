#include <iostream>
#include <stdlib.h>
#include "menu.h"
#include "list.h"
#include "save.h"
#include "users.h"
#include "run.h"
#include "rankings.h"
#include "route.h"
using namespace std;
int main()
{
	int n,m,w,q,k,o,d;
	int flag=0,flag2=0;
	char s[20];
	SqList L;
	AMGraph G;
	InitList(L);
	while(1)
	{
		menu1();
		cout<<"请输入您想要执行的操作序号：";
		cin>>n;
		switch(n)
		{
			case 1:
			{
				if(flag==1)
				{
					flag2=0;
					system("cls");
					w=0;
					while(w==0)
					{
						menu2();
						cout<<"请输入您想要执行的操作序号：";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								Addlist(L);
								cout<<"添加成功！"<<endl;
								break;
							}
							case 2:
							{
								cout<<"1,按用户名删除  2,按昵称删除"<<endl;
								cout<<"请输入要删除的方式：";
								cin>>k;
								switch(k)
								{
									case 1:
									{
										cout<<"请输入要删除的用户名：";
										cin>>s;
										q=Deletelist(L,s);
										if(q==1)
										cout<<"删除成功！"<<endl;
										else
										cout<<"未找到此用户，删除失败！"<<endl;
										break;
									}
									case 2:
									{
										cout<<"请输入要删除的昵称：";
										cin>>s;
										q=Deletelist2(L,s);
										if(q==1)
										cout<<"删除成功！"<<endl;
										else
										cout<<"未找到此用户，删除失败！"<<endl;
										break;
									}
									default :
									{
										cout<<"请输入合理的操作序号！"<<endl;
										break;
									} 
								} 
								break;
							}
							case 3:
							{
								cout<<"1,按用户名查询          2,按性别查询"<<endl;
								cout<<"3,按连续运动天数查询    4,查询全部"<<endl; 
								cout<<"请输入要查询的方式：";
								cin>>k;
								switch(k)
								{
									case 1:
									{
										cout<<"请输入要查询的用户名：";
										cin>>s;
										q=Travellist(L,s);
										if(q==1)
										cout<<"查询成功！"<<endl;
										else
										cout<<"未找到此用户，查询失败！"<<endl;
										break;
									}
									case 2:
									{
										cout<<"请输入要查询的性别：";
										cin>>s;
										q=Travellist3(L,s);
										if(q==1)
										cout<<"查询成功！"<<endl;
										else
										cout<<"未找到此用户，查询失败！"<<endl;
										break;
									}
									case 3:
									{
										cout<<"请输入要查询的连续运动天数：";
										cin>>d;
										q=Travellist4(L,d);
										if(q==1)
										cout<<"查询成功！"<<endl;
										else
										cout<<"未找到此用户，查询失败！"<<endl;
										break;
									}
									case 4:
									{
										Travellist2(L); 
										cout<<"查询成功！"<<endl;
										break;
									}
									default :
									{
										cout<<"请输入合理的操作序号！"<<endl;
										break;
									}
								}
								break;
							}
							case 4:
							{
								cout<<"请输入要修改的用户名：";
								cin>>s;
								q=Modifylist(L,s);
								if(q==1)
								cout<<"修改成功！"<<endl;
								else
								cout<<"未找到此用户，修改失败！"<<endl;
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"请输入合理的操作序号！"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"请先加载数据再进行操作！"<<endl;
					system("pause");
					system("cls");
				}
				break;
			}
			case 2:
			{
				if(flag==1)
				{
					flag2=0;
					system("cls");
					w=0;
					while(w==0)
					{
						menu3();
						cout<<"请输入您想要执行的操作序号：";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								q=Addlistrun(L);
								cout<<"添加成功！"<<endl;
								break;
							}
							case 2:
							{
								cout<<"请输入想要修改运动信息的用户的用户名：";
								cin>>s;
								cout<<"请输入修改后的步数：";
								cin>>d;
								q=Modifylistrun(L,s,d);
								if(q==1)
								cout<<"修改成功！"<<endl;
								else
								cout<<"未找到此用户，修改失败！"<<endl;
								break;
							}
							case 3:
							{
								Travellist2(L); 
								cout<<"查询成功！"<<endl;
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"请输入合理的操作序号！"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"请先加载数据再进行操作！"<<endl;
					system("pause");
					system("cls");
				}
				break;
			}
			case 3:
			{
				if(flag==1)
				{
					flag2=0;
					system("cls");
					w=0;
					while(w==0)
					{
						menu4();
						cout<<"请输入您想要执行的操作序号：";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								Sortlist(L);
								Travellist2(L); 
								cout<<"排序成功！"<<endl;
								cout<<"排序的依据是：用户当天（第七天）的步数！"<<endl;
								break;
							}
							case 2:
							{
								Sortlist2(L);
								Travellist2(L); 
								cout<<"排序成功！"<<endl;
								cout<<"排序的依据是：用户的连续运动天数！"<<endl;
								break;
							}
							case 3:
							{
								cout<<"请输入想要排序运动信息的用户的用户名：";
								cin>>s;
								q=Sortlist3(L,s);
								if(q==1)
								{
									cout<<"排序成功！"<<endl;
									cout<<"排序的依据是：该用户七天的步数！"<<endl;
								}
								else
								{
									cout<<"未找到该用户，排序失败！"<<endl; 
								}
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"请输入合理的操作序号！"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"请先加载数据再进行操作！"<<endl;
					system("pause");
					system("cls");
				}
				break;
			}
			case 4:
			{
				if(flag==1)
				{
					flag2=0;
					system("cls");
					w=0;
					while(w==0)
					{
						menu5();
						cout<<"请输入您想要执行的操作序号：";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								q=Protractgraph(G);
								if(q==1)
								{
									cout<<"绘制成功！"<<endl; 
								}
								break;
							}
							case 2:
							{
								cout<<"请输入运动起点：";
								cin>>s;
								q=Selectgraph(G,s);
								if(q==1)
								{
									cout<<"绘制成功！"<<endl; 
								}
								else
								{
									cout<<"未找到该运动起点，绘制失败！"<<endl; 
								}
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"请输入合理的操作序号！"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"请先加载数据再进行操作！"<<endl;
					system("pause");
					system("cls");
				}
				break;
			}
			case 5:
			{
				system("cls");
				w=0;
				while(w==0)
				{
					menu6();
					cout<<"请输入您想要执行的操作序号：";
					cin>>m;
					switch(m)
					{
						case 1:
						{
							Travellist5();
							Readtxtlist(L);
							Readtxtgraph(G);
							cout<<"数据加载成功！"<<endl;
							flag=1;
							break;
						}
						case 2:
						{
							Writetxt(L);
							flag2=1;
							cout<<"数据保存成功！"<<endl;
							break;
						}
						case 0:
						{
							w=1;
							break;
						}
						default :
						{
							cout<<"请输入合理的操作序号！"<<endl;
							break;
						}
					}
					system("pause");
					system("cls");
				}
				break;	
			}
			case 0:
			{
				if(flag2==1)
				{
					exit(0);
				}
				else
				{
					cout<<"系统检测到您还有做的操作未保存，请先保存再退出！"<<endl;
					system("pause");
					system("cls");
				}
				break;	
			}
			default:
			{
				cout<<"请输入合理的操作序号！"<<endl;
				system("pause");
				system("cls");
				break; 
			}
		}
	}
}
