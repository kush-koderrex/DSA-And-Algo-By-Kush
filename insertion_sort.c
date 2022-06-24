#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void insertionSort(int *A,int n){
    int key,j;
    for (int i = 1; i <=n-1; i++)
    {
        /* code */
        key = A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;

    }
    
     
}

int main(int argc, char const *argv[])
{
    int A[] = {4,45,10,12,17,2};
    int n=6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}
