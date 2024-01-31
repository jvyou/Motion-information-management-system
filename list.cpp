#include <iostream>
#include <string>
#include "list.h"
using namespace std;
#define MAX 100
#define OK 1
#define ERROR 0
status InitList(SqList &L)
{
	L.elem=new User[MAX];
	if(L.elem==NULL)
	return ERROR;
	L.length=0;
	return OK;
}
