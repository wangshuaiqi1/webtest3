#include "Insertedge.h"

void Insertedge()
{
	int i, j, w;
	printf("��������Ҫ��ӵıߵ������������Ȩֱv1,v2,w\n");
	scanf("%d%d%d", &i, &j, &w);
	InsertEdge(&g1, i - 1, j - 1, w);
	menu();
}