#include<stdio.h>
int main(){
    int W,weight,n;
    printf("Enter your weight W :-");
    scanf("%d",&W);
    printf("Enter your number of items n :-");
    scanf("%d",&n);
    int w[n];
    printf("Enter your weight of items :-\n");
    for(int i=0; i<n; i++){
        scanf("%d",&w[i]);
    }
    float x[n];
    printf("Enter value of items :-\n");
    for(int i = 0; i<n; i++){
        scanf("%f",&x[i]);
    }
    for(int i=0; i<n; i++){
        x[i]=0;
    }
    weight = 0;
    for(int i=0; i<n; i++){
        if (weight + w[i] <= W){
            x[i]=1;
            weight = weight + w[i];
        }
        else {
            x[i] = (float)(W - weight)/w[i];
            weight = W;
            break;
        }
    }
    for (int i=0; i<n; i++){
        printf("%.2f\t",x[i]);
    }
    return 0;
}