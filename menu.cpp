#include <iostream>
#include "menu.h"
using namespace std;
void menu1()
{
	cout<<"************手机运动信息管理系统************"<<endl;
	cout<<endl;
	cout<<"  1,用户信息管理        2,运动信息管理      "<<endl;
	cout<<"  3,运动排行榜          4,定制运动路线      "<<endl;
	cout<<"  5,读取数据文件        0,退出              "<<endl;
	cout<<endl;
	cout<<"********************************************"<<endl;
}
void menu2()
{
	cout<<"**************用户信息管理**************"<<endl;
	cout<<endl;
	cout<<"  1,添加用户         2,删除用户         "<<endl;
	cout<<"  3,查询用户         4,修改用户         "<<endl;
	cout<<"  0,返回上一级                          "<<endl;
	cout<<endl;
	cout<<"****************************************"<<endl;
}
void menu3()
{
	cout<<"**************运动信息管理**************"<<endl;
	cout<<endl;
	cout<<"  1,添加用户运动信息                    "<<endl;
	cout<<"  2,修改用户运动信息                    "<<endl;
	cout<<"  3,显示所有用户运动信息                "<<endl;
	cout<<"  0,返回上一级                          "<<endl;
	cout<<endl;
	cout<<"****************************************"<<endl;
}
void menu4()
{
	cout<<"**************运动排行榜*************"<<endl;
	cout<<endl;
	cout<<"  1,当天排行榜                       "<<endl;
	cout<<"  2,连续运动排行榜                   "<<endl;
	cout<<"  3,指定用户的一周排行榜             "<<endl;
	cout<<"  0,返回上一级                       "<<endl;
	cout<<endl;
	cout<<"*************************************"<<endl;
}
void menu5()
{
	cout<<"**************定制运动路线**************"<<endl;
	cout<<endl;
	cout<<"  1,绘制运动路线                        "<<endl;
	cout<<"  2,选择运动路线                        "<<endl;
	cout<<"  0,返回上一级                          "<<endl;
	cout<<endl;
	cout<<"****************************************"<<endl;
}
void menu6()
{
	int n;
	cout<<"**************读取数据文件**************"<<endl;
	cout<<endl;
	cout<<"  1,数据加载                            "<<endl;
	cout<<"  2,数据保存                            "<<endl;
	cout<<"  0,返回上一级                          "<<endl;
	cout<<endl;
	cout<<"****************************************"<<endl;
}
