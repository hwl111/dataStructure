#include"../SeqList.h"
//ɾ������Ԫ��
bool ListDelete(SqList*& L, int i, ElemType& e)
{
	int j;
	if (i<1 || i>L->Length)
		return false;
	i--;
	e = L->data[i];
	for (j = i; j < L->Length - 1; j++)
		L->data[j] = L->data[j + 1];
	L->Length--;
	return true;
}