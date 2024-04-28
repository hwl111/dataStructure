#pragma once
#define MaxSize 50

typedef int ElemTypeChar;

typedef struct SqListChar
{
	ElemTypeChar data[MaxSize];
	int Length;
};