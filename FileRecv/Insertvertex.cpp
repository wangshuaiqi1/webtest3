#include "Insertvertex.h"

void Insertvertex() {
	DataType c;
	printf("��������Ҫ��ӵĶ���\n");
	scanf("%d", &c);
	InsertVertex(&g1, c);
	int index = g1.vertices.size;
	a[index - 1] = index;
	DataType b;
	int value;
	printf("��������Ҫ�����õ������ıߺ�Ȩ��,��0��������\n");
	while (1) {
		scanf("%d", &b);
		if (b == 0)   break;
		scanf("%d", &value);
		InsertEdge(&g1, c - 1, b - 1, value);
	}
	menu();
}