#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
typedef struct heap_node{
    int vertex;
    int weight;
}heap_node;
 
typedef struct heap{
    heap_node **heap;
    int *heapPos;
    int size;
    int maxSize;
}heap;
 
heap_node *create_min_heap_node(int w, int v){
    heap_node *node=(heap_node*)malloc(sizeof(heap_node));
    node->vertex = v;
    node->weight = w;
    return node;
};
 
heap *create_min_heap(int maxSize){
    heap *heapNode = (heap *)malloc(sizeof(heap));
    heapNode->heap = (heap_node**)malloc(maxSize * sizeof(heap_node*));
    heapNode->heapPos = (int *)malloc(maxSize * sizeof(int));
    heapNode->maxSize = maxSize;
    heapNode->size = 0;
    return heapNode;
}
void swap(heap_node **a, heap_node **b){
    heap_node* temp = *a;
    *a = *b;
    *b = temp;
}
 
int right_child(int i){
    return (2 * i) + 1;
}
 
int left_child(int i){
    return (2 * i);
}
 
void heapify(heap *min_heap,int position){
    int minIndex = position;
    int left = left_child(position);
    int right = right_child(position);
 
    if(left<min_heap->size && min_heap->heap[minIndex]->weight > min_heap->heap[left]->weight)
        minIndex = left;
     
    if(right<min_heap->size && min_heap->heap[minIndex]->weight > min_heap->heap[right]->weight)
        minIndex = right;
     
    if(minIndex != position){
        heap_node* minNode = min_heap->heap[minIndex];
        heap_node* node = min_heap->heap[position];
        min_heap->heapPos[minNode->vertex] = position;
        min_heap->heapPos[node->vertex] = minIndex;
        swap(&min_heap->heap[minIndex], &min_heap->heap[position]);
        heapify(min_heap, minIndex);
    }
}
 
heap_node *extract_min_heap(heap *min_heap){
    if(min_heap->size<0){
        return NULL;
    }
    heap_node *extractNode = min_heap->heap[0];
    heap_node *last = min_heap->heap[min_heap->size-1];
    min_heap->heapPos[extractNode->vertex] = min_heap->size-1;
    min_heap->heapPos[last->vertex] = 0;
    min_heap->heap[0] = last;
    min_heap->size--;
 
    heapify(min_heap, 0);
     
    return extractNode;
}
 
void decreaseKey(heap *min_heap, int ver, int wei){
    int index = min_heap->heapPos[ver];
    min_heap->heap[index]->weight = wei;
    while(index && min_heap->heap[index]->weight < min_heap->heap[(index-1)/2]->weight){
        min_heap->heapPos[min_heap->heap[index]->vertex] = (index - 1) / 2;
        min_heap->heapPos[min_heap->heap[(index-1)/2]->vertex] = index;
        swap(&min_heap->heap[index], &min_heap->heap[(index - 1) / 2]);
        index=(index - 1) / 2;
    }
}
 
int belongsTo(heap *min_heap, int vertex){
    if(min_heap->heapPos[vertex] < min_heap->size){
        return 1;
    }
    return 0;
}
 
int prims(heap *min_heap, int **cost_matrix, int *weights, int no_of_vertex){
    int weight = 0, startingVertex = 0, i = 0;
 
    weights[0] = 0;
    min_heap->heapPos[0] = 0;
    min_heap->heap[0] = create_min_heap_node(0, 0);
    while(min_heap->size >0){
        heap_node *temp = extract_min_heap(min_heap);
        startingVertex = temp->vertex;
        for(i = 0; i < no_of_vertex; i++){
            if(cost_matrix[startingVertex][i] != 0 && belongsTo(min_heap, i) && cost_matrix[startingVertex][i] < weights[i]){
                weights[i] = cost_matrix[startingVertex][i];
                decreaseKey(min_heap, i, weights[i]);
            }
        }
    }
    for(i=1;i<no_of_vertex;i++){
        weight+=weights[i];
    }
    return weight;
}
 
int main(){
    int no_of_vertex = 0, **cost_matrix, *weights, i = 0, j = 0;
    printf("enter the number of vertex/n");
    scanf("%d", &no_of_vertex);
     
    heap *min_heap = create_min_heap(no_of_vertex);
    weights = (int *)malloc(no_of_vertex * sizeof(int));
    for(i = 0; i < no_of_vertex; i++)
        weights[i] = INT_MAX;
     
    for(i=1;i<no_of_vertex;i++){
        min_heap->heap[i] = create_min_heap_node(INT_MAX, i);
        min_heap->heapPos[i] = i;
    }
    min_heap->size = no_of_vertex;
    cost_matrix = (int **)malloc(no_of_vertex * sizeof(int *));
    for(i = 0; i < no_of_vertex; i++)
        cost_matrix[i] = (int *)malloc(no_of_vertex * sizeof(int));
     
    for(i=0;i<no_of_vertex;i++){
        for(j=0;j<no_of_vertex;j++){
            printf("enter the weights");
            scanf("%d", &cost_matrix[i][j]);
        }
    }    
     
    printf("%d ", prims(min_heap, cost_matrix, weights, no_of_vertex));
    return 0;
}
