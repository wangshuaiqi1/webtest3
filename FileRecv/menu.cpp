#include "menu.h"

void menu()
{
	//gaidongyrr
	int p;
	void putList();
	void Deletevertex();
	void Deleteedge();
	void Insertedge();
	void Insertvertex();
	printf("					   ·�ɱ�����						  \n");
	printf("					  ��ѡ����Ӧʵ�ֹ���			   	  \n");
	printf("					  1.·�ɱ��������ӡ				  \n");
	printf("					  2.ɾ��·����						  \n");
	printf("					  3.ɾ����							  \n");
	printf("					  4.��ӱ�							  \n");
	printf("					  5.���·����						  \n");
	printf("					  6.�˳�ϵͳ						  \n");
	printf("					  ���������ѡ��1~6��                 \n");
	scanf("%d", &p);
	if (p < 1 || p>6)
	{
		printf("\n\n������Ų����ڲ˵�������������\n\n");
		p = 6;
	}
	switch (p)
	{
	case 1:putList(); break;      //·�ɱ��������ӡ
	case 2:Deletevertex(); break;   //ɾ���ڵ�
	case 3:Deleteedge(); break;   //ɾ����
	case 4:Insertedge(); break;   //��ӱ� 
	case 5:Insertvertex(); break;  //��ӵ� 
	case 6:exit(0); break;      //�˳�
	case 7:menu();
	}
}