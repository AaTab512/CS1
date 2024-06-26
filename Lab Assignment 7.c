#include <stdio.h>

void bubbleSort(int arr[], int n)
{
   int i, j, temp, swaps[n];
   for (i = 0; i < n; i++)
      swaps[i] = 0;
   for (i = 0; i < n-1; i++)
   {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swaps[j]++;
           }
       }
   }
   for (i = 0; i < n; i++)
      printf("Number of swaps needed for %d: %d\n", arr[i], swaps[i]);
}


int main()
{
   int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
   int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   int m = sizeof(arr2)/sizeof(arr2[0]);
   printf("Bubble Sort:\n");
   printf("Array 1: \n");
   bubbleSort(arr, n);
   printf("Array 2: \n");
   bubbleSort (arr2, m);
   return 0;
}
