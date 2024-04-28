#include<iostream>

#include"SeqList.h"

void CreateList(SqList* &L, ElemType a[], int n);    //����˳���
void InitList(SqList* &L);							 //��ʼ�����Ա�
void DestroyList(SqList*& L);						 //�������Ա�	
bool ListEmpty(SqList* L);							 //�ж����Ա��Ƿ�Ϊ��
int ListLength(SqList* L);							 //�����Ա���
void Displist(SqList* L);							 //������Ա�
void DisplistChar(SqList* L);						 //����ַ������Ա�
bool GetElem(SqList* L, int i, ElemType& e);		 //����������Ա��е�Ԫ��
int LocateElem(SqList* L, ElemType e);				 //��Ԫ��ֵ����
bool ListInsert(SqList*& L, int i, ElemType e);		 //��������Ԫ��
bool ListDelete(SqList*& L, int i, ElemType& e);	 //���ٵ�i������Ԫ��
     
void del_node(SqList*& L, ElemType x, ElemType y);

int main()
{
	SqList* List;
	ElemType a[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);

	InitList(List);
	CreateList(List, a, n);
	Displist(List);

	int num = LocateElem(List, 2);
	std::cout << num << std::endl;

	ElemType e;
	ListDelete(List, 3, e);
	Displist(List);

	ListInsert(List, 3, e);
	Displist(List);
	std::cout << "-----------------\n";
	SqList* L;
	ElemType a1[] = { '1','2','3','1','1','0','4','2','2','3','1','0','4','2'};
	ElemType x = '2', y = '3';
	int n1 = sizeof(a1) / sizeof(a1[0]);
	InitList(L);
	CreateList(L, a1, n1);
	DisplistChar(L);
	del_node(L, x, y);
	DisplistChar(L);

	DestroyList(L);
	DestroyList(List);
	std::cin.get();
}