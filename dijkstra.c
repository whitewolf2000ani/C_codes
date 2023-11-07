#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
  
void dijstra(int n, int v, int **cost, int *dist) 
{
    int i, u, count, w, *flag, min;
     
    flag = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        flag[i] = 0, dist[i] = cost[v][i];
     
    count = 1;
    while (count < n) {
        min = 999;
        for (w = 0; w < n; w++)
            if (dist[w] < min && !flag[w])
                min = dist[w], u = w;
        flag[u] = 1;
        count++;
        for (w = 0; w < n; w++)
            if ((dist[u] + cost[u][w] < dist[w]) && !flag[w])
                dist[w] = dist[u] + cost[u][w];
    }
}
  
int main() {
    int n, v, i, j, **cost, *dist;
     
    printf("\n Enter the number of nodes:");
    scanf("%d", &n);
    cost = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++)
        cost[i] = (int *)malloc(n * sizeof(int));
         
    dist = (int *)malloc(n * sizeof(int));
     
    printf("\n Enter the cost matrix:\n");
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INT_MAX;
        }
    }
     
    printf("\n Enter the source node:");
    scanf("%d", &v);
  
    dijstra(n, v, cost, dist);
 
    printf("\n Shortest path:\n");
    for (i = 0; i < n; i++)
        if (i != v)
            printf("%d->%d,cost=%d\n", v, i, dist[i]);
     
    return 0;
}
