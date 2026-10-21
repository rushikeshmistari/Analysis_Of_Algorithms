#include <stdio.h>
#define INF 999
int main(){
    int n, graph[10][10];
    int selected[10] = {0};
    int i, j, edges = 0, total = 0;
    int min, x, y;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
// Initialize graph
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            graph[i][j] = 0;
        }
    }
    printf("Enter cost between each pair of vertices:\n");
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            printf("Cost of edge %d-%d: ", i + 1, j + 1);
            scanf("%d", &graph[i][j]);
            graph[j][i] = graph[i][j];
        }
    }
    selected[0] = 1;
    printf("\nEdges in Minimum Spanning Tree:\n");
    while (edges < n - 1){
        min = INF;
        for (i = 0; i < n; i++){
            if (selected[i]){
                for (j = 0; j < n; j++){
                    if (!selected[j] && graph[i][j] != 0 && graph[i][j] < min){
                        min = graph[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }
        printf("%d - %d = %d\n", x + 1, y + 1, min);
        total += min;
        selected[y] = 1;
        edges++;
    }
    printf("Minimum Cost = %d\n", total);
    return 0;
}