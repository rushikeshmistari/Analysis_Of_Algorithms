#include<stdio.h>
int main(){
    int n,key,i,j;
    printf("Enter size of Array :-");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter Element of Arrray :-\n");
    for(i=0; i<n; i++){
        scanf("%d",&Arr[i]);
    }

    printf("Your Unsorted Array is :-\n");
    for(i=0; i<n; i++){
        printf("%d\t",Arr[i]);
    }

    for(j=1; j<n; j++){
        key = Arr[j];
        i=j-1;
        while(i>=0 && Arr[i]>key){
            Arr[i+1]=Arr[i];
            i=i-1;
        }
        Arr[i+1]=key;
    }

    printf("\nYour Sorted Array is :-\n");
    for(i=0; i<n; i++){
        printf("%d\t",Arr[i]);
    }
    return 0;
}