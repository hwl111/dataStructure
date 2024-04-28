#include"../SeqList.h"
//插入数据元素
bool ListInsert(SqList*& L, int i, ElemType e)
{
	int j;
	if (i<1 || i>L->Length || L->Length == MaxSize)
		return false;
	i--;
	for (j = L->Length; j > i; j--)
		L->data[j] = L->data[j - 1];
	L->data[i] = e;
	L->Length++;
	return true;
}