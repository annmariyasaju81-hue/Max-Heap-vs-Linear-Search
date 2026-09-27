# Max Heap vs Linear Search

## Problem
Find the highest student score from:

`78, 92, 65, 88, 95, 72, 84, 90`

## Methods
1. Max Heap
2. Linear Search

## Result
Highest score = **95**

## Max Heap
The scores are inserted into a Max Heap. After all insertions, the heap is:

`95 92 84 90 88 65 72 78`

The maximum element is always at the root, so finding the maximum takes **O(1)** time after the heap is constructed.

## Linear Search
Each score is compared with the current maximum. For 8 scores, this requires:

`8 - 1 = 7 comparisons`

## Complexity
- Max Heap insertion: O(log n)
- Max Heap find maximum: O(1)
- Linear Search find maximum: O(n)
- Max Heap space: O(n)
- Linear Search extra space: O(1)

## Conclusion
For a single maximum search on a small unsorted list, Linear Search is simple.
For continuously maintaining student scores and repeatedly retrieving the highest
score, Max Heap is suitable because insertion takes O(log n) and maximum retrieval
takes O(1).

## Files
- `max_heap.c` - C source code
- `input.txt` - input data
- `output.txt` - execution output
- `complexity_analysis.txt` - complexity analysis
- `comparison_table.txt` - performance comparison
- `README.md` - project description
