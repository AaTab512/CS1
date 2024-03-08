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

void SelectionSort(int arr[], int n) 
{ 
    int i, j, min, swaps[n], temp; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min= i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min= j; 
  
        // Swap the found minimum element with the first element 
           if(min != i) 
            {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              swaps[j]++;
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
   SelectionSort(arr, n);
   return 0;
}