#include<iostream>
#include"../SeqList.h"
//������Ա�
void Displist(SqList* L)
{
	for (int i = 0; i < L->Length; i++)
		std::cout << L->data[i] << " ";
	std::cout << std:: endl;;
}

void DisplistChar(SqList* L)
{
	for (int i = 0; i < L->Length; i++)
		std::cout << char(L->data[i]) << " ";
	std::cout << std::endl;;
}