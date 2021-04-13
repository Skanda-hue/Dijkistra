// Adjascency List representation in C
#include <header.h>
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct node *createNode(int v);

// Create a node
struct Graph *createAGraph(int vertices);

// Create a node
void addEdge(struct Graph *graph, int s, int d);

// Print the graph
void printGraph(struct Graph *graph);

int main()
{
    struct Graph *graph = createAGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);

    printGraph(graph);

    return 0;
}
Previous Tutorial: