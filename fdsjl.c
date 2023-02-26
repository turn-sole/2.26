#include"SeqList.h"
void SLInit(SL s)
{
	s.a = (SLDataType*)malloc(sizeof(SLDataType) * INIT_CAPACITY);
	if (s.a == NULL)
	{
		perror("malloc fail");
		return;
	}
	s.size = 0;
	s.capacity = INIT_CAPACITY;
}
void SLDestroy(SL* ps)
{
	free(ps->a);
	ps->a == NULL;
	ps->capacity = ps->size = 0;
}
void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SLPushBack(SL* ps, SLDataType x)
{
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->capacity *= 2;
	}
	ps->a[ps->size++] = x;
}
void SLPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
void SLPushFront(SL* ps, SLDataType x)
{

}
void SLPopFront(SL* ps)
{

}