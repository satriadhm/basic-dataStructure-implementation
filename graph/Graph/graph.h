#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

typedef char infoGraph;
typedef struct ElmNode *adrNode;
typedef struct ElmEdge *adrEdge;

struct ElmNode
{
    infoGraph infoNode;
    adrEdge childNode;
    adrNode nextNode;

};

struct ElmEdge
{
    adrNode node;
    adrEdge nextEdge;
};

struct Graph
{
    adrNode First;
};

adrNode newNode(char x);

void addNode (adrNode &G, adrNode p);

adrNode findNode (adrNode G, char x);

void addEdge(adrNode &G, char x, char y);

bool isConnected(adrNode G, char x, char y);

void printGraph(adrNode G);

#endif // GRAPH_H_INCLUDED
