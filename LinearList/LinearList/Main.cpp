#include<iostream>

#include"SeqList.h"

void CreateList(SqList* &L, ElemType a[], int n);    //建立顺序表
void InitList(SqList* &L);							 //初始化线性表
void DestroyList(SqList*& L);						 //销毁线性表	
bool ListEmpty(SqList* L);							 //判断线性表是否为空
int ListLength(SqList* L);							 //求线性表长度
void Displist(SqList* L);							 //输出线性表
void DisplistChar(SqList* L);						 //输出字符型线性表
bool GetElem(SqList* L, int i, ElemType& e);		 //按序号求线性表中的元素
int LocateElem(SqList* L, ElemType e);				 //按元素值查找
bool ListInsert(SqList*& L, int i, ElemType e);		 //插入数据元素
bool ListDelete(SqList*& L, int i, ElemType& e);	 //销毁第i个数据元素
     
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