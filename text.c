#include"SeqList.h"
    SL s;
void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPushBack(&s, 7);
	SLPushBack(&s, 8);
	SLPushBack(&s, 9);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	SLPopBack(&s);
	//SLPopBack(&s);
	SLPrint(&s);

	SLPushBack(&s, 10);
	SLPushBack(&s, 20);
	SLPrint(&s);

	SLDestroy(&s);
}
int main()
{
	TestSeqList1();
	return 0;
}