#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void SelectionSort(int *A,int n){
    int indexOfMin,temp;
    printf("Running Sellection Sort... \n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j]<A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] =temp;
    }   
} 

int main(int argc, char const *argv[])
{
    int A[] = {4,45,10,12,17,2};
    int n=6;
    printArray(A,n);
    SelectionSort(A,n);
    printArray(A,n);
    return 0;
}
