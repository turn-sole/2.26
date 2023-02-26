#pragma one
#define N 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;
#define INIT_CAPACITY 4
//struct SeqList
//{
//	int a[N];
//	int size;
//};
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;
void SLInit(SL* s);
void SLDestroy(SL* s);
void SLPrint(SL* ps);
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);