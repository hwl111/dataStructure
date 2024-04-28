#include"../SeqList.h"
//初始化线性表
void InitList(SqList*& L)
{
	L = new SqList;
	L->Length = 0;
}