#pragma once
#include "seqlist.h"
#include <stdlib.h>
#define MaxWeight 10000

typedef struct
{
	SeqList vertices;  //��Ŷ����˳���
	int edge[MaxSize][MaxSize];//��űߵ��ڽӾ���
	int numOfEdges;  //�ߵ���Ŀ
}AdjMGraph;//ͼ�Ľṹ�嶨��

typedef struct
{
	int row;  //���±�
	int col;  //���±� 
	int weight;  //Ȩֵ
}RowColWeight;//����Ϣ�ṹ�嶨��

void GraphInitiate(AdjMGraph *G);
void InsertVertex(AdjMGraph *G, DataType vertex);
void InsertEdge(AdjMGraph *G, int v1, int v2, int weight);
void DeleteEdge(AdjMGraph *G, int v1, int v2);
void DeleteVertex(AdjMGraph *G, int v);
int GetFirstVex(AdjMGraph G, int v);
int GetNextVex(AdjMGraph G, int v1, int v2);
void CreatGraph(AdjMGraph *G, DataType v[], int n, RowColWeight W[], int e);
void Dijkstra(AdjMGraph *G, int v0, int distance[], int path[]);
