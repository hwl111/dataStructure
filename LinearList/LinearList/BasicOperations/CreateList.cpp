#include"../SeqList.h"
//½¨Á¢Ë³Ðò±í
void CreateList(SqList*& L, ElemType a[], int n)
{
	int i = 0, k = 0;
	L = new  SqList;
	while (i < n)
	{
		L->data[k] = a[i];
		k++;
		i++;
	}
	L->Length = k;
}