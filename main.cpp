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
		cout<<"����������Ҫִ�еĲ�����ţ�";
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
						cout<<"����������Ҫִ�еĲ�����ţ�";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								Addlist(L);
								cout<<"��ӳɹ���"<<endl;
								break;
							}
							case 2:
							{
								cout<<"1,���û���ɾ��  2,���ǳ�ɾ��"<<endl;
								cout<<"������Ҫɾ���ķ�ʽ��";
								cin>>k;
								switch(k)
								{
									case 1:
									{
										cout<<"������Ҫɾ�����û�����";
										cin>>s;
										q=Deletelist(L,s);
										if(q==1)
										cout<<"ɾ���ɹ���"<<endl;
										else
										cout<<"δ�ҵ����û���ɾ��ʧ�ܣ�"<<endl;
										break;
									}
									case 2:
									{
										cout<<"������Ҫɾ�����ǳƣ�";
										cin>>s;
										q=Deletelist2(L,s);
										if(q==1)
										cout<<"ɾ���ɹ���"<<endl;
										else
										cout<<"δ�ҵ����û���ɾ��ʧ�ܣ�"<<endl;
										break;
									}
									default :
									{
										cout<<"���������Ĳ�����ţ�"<<endl;
										break;
									} 
								} 
								break;
							}
							case 3:
							{
								cout<<"1,���û�����ѯ          2,���Ա��ѯ"<<endl;
								cout<<"3,�������˶�������ѯ    4,��ѯȫ��"<<endl; 
								cout<<"������Ҫ��ѯ�ķ�ʽ��";
								cin>>k;
								switch(k)
								{
									case 1:
									{
										cout<<"������Ҫ��ѯ���û�����";
										cin>>s;
										q=Travellist(L,s);
										if(q==1)
										cout<<"��ѯ�ɹ���"<<endl;
										else
										cout<<"δ�ҵ����û�����ѯʧ�ܣ�"<<endl;
										break;
									}
									case 2:
									{
										cout<<"������Ҫ��ѯ���Ա�";
										cin>>s;
										q=Travellist3(L,s);
										if(q==1)
										cout<<"��ѯ�ɹ���"<<endl;
										else
										cout<<"δ�ҵ����û�����ѯʧ�ܣ�"<<endl;
										break;
									}
									case 3:
									{
										cout<<"������Ҫ��ѯ�������˶�������";
										cin>>d;
										q=Travellist4(L,d);
										if(q==1)
										cout<<"��ѯ�ɹ���"<<endl;
										else
										cout<<"δ�ҵ����û�����ѯʧ�ܣ�"<<endl;
										break;
									}
									case 4:
									{
										Travellist2(L); 
										cout<<"��ѯ�ɹ���"<<endl;
										break;
									}
									default :
									{
										cout<<"���������Ĳ�����ţ�"<<endl;
										break;
									}
								}
								break;
							}
							case 4:
							{
								cout<<"������Ҫ�޸ĵ��û�����";
								cin>>s;
								q=Modifylist(L,s);
								if(q==1)
								cout<<"�޸ĳɹ���"<<endl;
								else
								cout<<"δ�ҵ����û����޸�ʧ�ܣ�"<<endl;
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"���������Ĳ�����ţ�"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"���ȼ��������ٽ��в�����"<<endl;
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
						cout<<"����������Ҫִ�еĲ�����ţ�";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								q=Addlistrun(L);
								cout<<"��ӳɹ���"<<endl;
								break;
							}
							case 2:
							{
								cout<<"��������Ҫ�޸��˶���Ϣ���û����û�����";
								cin>>s;
								cout<<"�������޸ĺ�Ĳ�����";
								cin>>d;
								q=Modifylistrun(L,s,d);
								if(q==1)
								cout<<"�޸ĳɹ���"<<endl;
								else
								cout<<"δ�ҵ����û����޸�ʧ�ܣ�"<<endl;
								break;
							}
							case 3:
							{
								Travellist2(L); 
								cout<<"��ѯ�ɹ���"<<endl;
								break;
							}
							case 0:
							{
								w=1;
								break;
							}
							default :
							{
								cout<<"���������Ĳ�����ţ�"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"���ȼ��������ٽ��в�����"<<endl;
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
						cout<<"����������Ҫִ�еĲ�����ţ�";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								Sortlist(L);
								Travellist2(L); 
								cout<<"����ɹ���"<<endl;
								cout<<"����������ǣ��û����죨�����죩�Ĳ�����"<<endl;
								break;
							}
							case 2:
							{
								Sortlist2(L);
								Travellist2(L); 
								cout<<"����ɹ���"<<endl;
								cout<<"����������ǣ��û��������˶�������"<<endl;
								break;
							}
							case 3:
							{
								cout<<"��������Ҫ�����˶���Ϣ���û����û�����";
								cin>>s;
								q=Sortlist3(L,s);
								if(q==1)
								{
									cout<<"����ɹ���"<<endl;
									cout<<"����������ǣ����û�����Ĳ�����"<<endl;
								}
								else
								{
									cout<<"δ�ҵ����û�������ʧ�ܣ�"<<endl; 
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
								cout<<"���������Ĳ�����ţ�"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"���ȼ��������ٽ��в�����"<<endl;
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
						cout<<"����������Ҫִ�еĲ�����ţ�";
						cin>>m;
						switch(m)
						{
							case 1:
							{
								q=Protractgraph(G);
								if(q==1)
								{
									cout<<"���Ƴɹ���"<<endl; 
								}
								break;
							}
							case 2:
							{
								cout<<"�������˶���㣺";
								cin>>s;
								q=Selectgraph(G,s);
								if(q==1)
								{
									cout<<"���Ƴɹ���"<<endl; 
								}
								else
								{
									cout<<"δ�ҵ����˶���㣬����ʧ�ܣ�"<<endl; 
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
								cout<<"���������Ĳ�����ţ�"<<endl;
								break;
							}
						}
						system("pause");
						system("cls");
					}
				}
				else
				{
					cout<<"���ȼ��������ٽ��в�����"<<endl;
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
					cout<<"����������Ҫִ�еĲ�����ţ�";
					cin>>m;
					switch(m)
					{
						case 1:
						{
							Travellist5();
							Readtxtlist(L);
							Readtxtgraph(G);
							cout<<"���ݼ��سɹ���"<<endl;
							flag=1;
							break;
						}
						case 2:
						{
							Writetxt(L);
							flag2=1;
							cout<<"���ݱ���ɹ���"<<endl;
							break;
						}
						case 0:
						{
							w=1;
							break;
						}
						default :
						{
							cout<<"���������Ĳ�����ţ�"<<endl;
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
					cout<<"ϵͳ��⵽���������Ĳ���δ���棬���ȱ������˳���"<<endl;
					system("pause");
					system("cls");
				}
				break;	
			}
			default:
			{
				cout<<"���������Ĳ�����ţ�"<<endl;
				system("pause");
				system("cls");
				break; 
			}
		}
	}
}
