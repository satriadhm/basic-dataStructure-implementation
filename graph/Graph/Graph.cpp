#include "graph.h"

adrNode newNode(char x)
{
    adrNode node;
    node->infoNode = x;
    node->childNode = NULL;
    node->nextNode = NULL;
    return node;
};

void addNode (adrNode &G, adrNode p)
{
    if (G == NULL)
    {
        G = p;
    }else
    {
        adrNode curr = g;
        while (curr->nextNode == NULL)
        {
            curr = curr ->nextNode
        }
        curr -> nextNode = p;
    };
};

adrNode findNode (adrNode G, char x)
{
    adr Search;
    while (G != NULL)
    {
        if (G->infoNode == x)
        {
            Search = G;
            return Search;
        }
        G = G->nextNode;
    }
    Search = G;
    return NULL;
};

void addEdge(adrNode &G, char x, char y)
{
    adrNode q = findNode(G,x);
    if(q->childNode == NULL)
    {
        adrEdge newChild = new ElmEdge;
        newChild->node->infoNode = y;
        q->childNode = newChild;
        newChild->node->childNode = newChild;
    }else if (q->childNode != NULL)
    {
        adrEdge cekC = q;
        while(cekC->node->childNode != NULL)
        {
            cekC = cekC->node->childNode;
        }
        adrNode newChild = new ElmNode;
        newChild->infoNode = y;
        cekC->node->childNode = newChild;
        newChild->childNode = NULL;
    }else
    {
        cout << "parent tidak ditemukan" << endl;
    }
};

bool isConnected(adrNode G, char x, char y)
{
    adrEdge cekP;
    while (G->infoNode != x)
    {
        G = G->nextNode;
    }
    cekP = G ->childNode;
    if (cekP != NULL)
    {
        while(cekP->node->infoNode != y)
        {
            cekP = cekP->node->childNode;
        }
        cout << "true" << endl;
        return true;
    }else
    {
        cout << "false" << endl;
        return false;
    }
};

void printGraph(adrNode G)
{

};
