#include "Deletevertex.h"

void Deletevertex()
{
	int i;
	printf("��������Ҫɾ�����ǵڼ�������v\n");
	scanf("%d", &i);
	DeleteVertex(&g1, i);
	menu();
}