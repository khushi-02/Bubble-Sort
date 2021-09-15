#include<stdio.h>
void PrintArray(int *A, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\n %d", A[i]);
    }
}

void BubbleSort(int *A, int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]>A[j])
            {
              temp = A[i];
              A[i] = A[j];
              A[j] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {12, 5, 67, 87, 32, 9, 90, 45, 34, 47};
    int n = 10;
    printf("The array before sorting is");
    PrintArray(A, n);
    BubbleSort(A, n);
    printf("The array after sorting is");
     PrintArray(A, n);
    return 0;
}

