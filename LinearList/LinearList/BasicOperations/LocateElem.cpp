#include"../SeqList.h"
//按元素查找
int LocateElem(SqList* L, ElemType e)
{
	int i = 0;
	while (i < L->Length && L->data[i] != e)
		i++;									//查找元素e
	if (i >= L->Length)							
		return 0;
	else
		return i + 1;							//找到返回其逻辑序号
}