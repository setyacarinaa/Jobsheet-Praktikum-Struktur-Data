//Setya Carina Rianti 23343054

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Struktur untuk representasi graf
struct Graph {
    int numVertices;
    int adjMatrix[MAX][MAX];
};

// Struktur untuk antrian
struct Queue {
    int items[MAX];
    int front;
    int rear;
};

// Fungsi untuk membuat graf
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }

    return graph;
}

// Fungsi untuk menambahkan edge pada graf
void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1;
    graph->adjMatrix[dest][src] = 1;
}

// Fungsi untuk membuat antrian
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Fungsi untuk mengecek apakah antrian kosong
int isEmpty(struct Queue* queue) {
    return queue->rear == -1;
}

// Fungsi untuk menambahkan elemen ke dalam antrian
void enqueue(struct Queue* queue, int value) {
    if (queue->rear == MAX - 1) {
        printf("\nAntrian penuh\n");
    } else {
        if (queue->front == -1)
            queue->front = 0;
        queue->rear++;
        queue->items[queue->rear] = value;
    }
}

// Fungsi untuk menghapus elemen dari antrian
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Antrian kosong\n");
        item = -1;
    } else {
        item = queue->items[queue->front];
        queue->front++;
        if (queue->front > queue->rear) {
            queue->front = queue->rear = -1;
        }
    }
    return item;
}

// Fungsi BFS
void bfs(struct Graph* graph, int startVertex) {
    struct Queue* queue = createQueue();
    int visited[MAX] = {0};

    visited[startVertex] = 1;
    enqueue(queue, startVertex);

    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
        printf("Dikunjungi %d\n", currentVertex);

        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->adjMatrix[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
}

// Fungsi utama
int main() {
    struct Graph* graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    bfs(graph, 0);

    return 0;
}