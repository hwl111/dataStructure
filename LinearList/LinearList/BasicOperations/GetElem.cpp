#include"../SeqList.h"
//按序号求线性表中的元素
bool GetElem(SqList* L, int i, ElemType& e)
{
	if (i<1 || i>L->Length)
		return false;
	e = L->data[i - 1];
	return true;
}