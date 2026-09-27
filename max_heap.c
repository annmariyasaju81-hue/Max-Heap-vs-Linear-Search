#include <stdio.h>

#define MAX 100

int heap[MAX];
int heapSize = 0;
int heapComparisons = 0;
int heapSwaps = 0;

void insertMaxHeap(int value)
{
    int i = heapSize++;
    heap[i] = value;

    while (i > 0)
    {
        int parent = (i - 1) / 2;
        heapComparisons++;

        if (heap[parent] >= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;

        heapSwaps++;
        i = parent;
    }
}

void displayHeap()
{
    for (int i = 0; i < heapSize; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int findMaxHeap()
{
    return heap[0];
}

int linearSearchMax(int a[], int n, int *comparisons)
{
    int max = a[0];
    *comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        (*comparisons)++;

        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = sizeof(scores) / sizeof(scores[0]);
    int linearComparisons;

    printf("Max Heap after each insertion:\n");

    for (int i = 0; i < n; i++)
    {
        insertMaxHeap(scores[i]);
        printf("After inserting %d: ", scores[i]);
        displayHeap();
    }

    printf("\nTotal Heap insertion comparisons: %d\n", heapComparisons);
    printf("Total Heap insertion swaps: %d\n", heapSwaps);

    printf("\nHighest score using Max Heap: %d\n", findMaxHeap());

    int max = linearSearchMax(scores, n, &linearComparisons);
    printf("Highest score using Linear Search: %d\n", max);
    printf("Linear Search comparisons: %d\n", linearComparisons);

    return 0;
}
