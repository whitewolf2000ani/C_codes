#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void merge(int *arr, int lo, int mid, int hi){
    int i, j, k;
    int size1 = (mid - lo + 1);
    int size2 = (hi - mid);
    int *mArr1 = (int *)malloc(size1 * sizeof(int));
    int *mArr2 = (int *)malloc((size2) * sizeof(int));
    for(i = 0; i < size1; i++){
        mArr1[i] = arr[lo+i];
    }
    for(i = 0; i < size2; i++){
        mArr2[i] = arr[mid + 1 + i];
    }
    i = 0, j = 0, k = lo;
    while(i < size1 && j < size2){
        if(mArr1[i] <= mArr2[j]){
            arr[k] = mArr1[i];
            i++;
        }
        else{
            arr[k] = mArr2[j];
            j++;
        }
        k++;
    }
    while(i < size1){
        arr[k] = mArr1[i];
        k++;
        i++;
    }
    while(j < size2){
        arr[k] = mArr2[j];
        k++;
        j++;
    }
    free(mArr1);
    free(mArr2);
}

void mergeSort(int *arr, int start, int end){
    if(end > start){
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int *arr, n, i;
    printf("Enter size of array:");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter items of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n-1);
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
