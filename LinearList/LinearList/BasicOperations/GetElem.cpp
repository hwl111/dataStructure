#include"../SeqList.h"
//����������Ա��е�Ԫ��
bool GetElem(SqList* L, int i, ElemType& e)
{
	if (i<1 || i>L->Length)
		return false;
	e = L->data[i - 1];
	return true;
}