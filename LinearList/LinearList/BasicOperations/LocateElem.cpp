#include"../SeqList.h"
//��Ԫ�ز���
int LocateElem(SqList* L, ElemType e)
{
	int i = 0;
	while (i < L->Length && L->data[i] != e)
		i++;									//����Ԫ��e
	if (i >= L->Length)							
		return 0;
	else
		return i + 1;							//�ҵ��������߼����
}