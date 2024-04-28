#include"SeqList.h"

void del_node(SqList*& L, ElemType x, ElemType y)
{
	int k = 0;
	for (int i = 0; i < L->Length; i++)
	{
		if (L->data[i] != x && L->data[i] != y)
		{
			L->data[k] = L->data[i];
			k++;
		}
	}
	L->Length = k;
}