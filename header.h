
struct node
{
    int vertex;
    struct node *next;
};
struct node *createNode(int);

struct Graph
{
    int numVertices;
    struct node **adjLists;
};

// Create a node
struct node *createNode(int v);

// Create a node
struct Graph *createAGraph(int vertices);

// Create a node
void addEdge(struct Graph *graph, int s, int d);

// Print the graph
void printGraph(struct Graph *graph);