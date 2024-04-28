#pragma once
#define MaxSize 50

typedef int ElemType;

typedef struct SqList
{
	ElemType data[MaxSize];
	int Length;
};