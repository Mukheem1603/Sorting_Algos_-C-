# Sorting Algorithms in C:
* Bubble sort
* Insertion sort
* Selection sort
* Quick sort
* Merge sort
* Heap sort

## Bubble Sort:
In `Bubble sort`, the adjacent elements of the list are compared and swapped accordingly.At the end of the first iteration, the max value in the list reaches either the last position or first position of the list depending upon the swapping of the elements.
#### Pseudocode:
``` 
     For I = 0 to N - 2
       For J = 0 to N - 2
         If (A(J) > A(J + 1)
           Temp = A(J)
           A(J) = A(J + 1)
           A(J + 1) = Temp
         End-If
       End-For
     End-For
```

## Insertion Sort:
`Insertion sort` is a sorting technique where the elements are sorted as and when, new elements are inserted into the list.A sorted list will be displayed at any phase.
#### Pseudocode:
```    
       for j = 2 to n
          key ← A [j]
          // Insert A[j] into the sorted sequence A[1..j-1]
          j ← i – 1
         while i > 0 and A[i] > key
                 A[i+1] ← A[i]
                 i ← i – 1
        A[j+1] ← key
```

## Selection Sort:
`Selection sort` is a sorting technique where one element in the list is selected and compared with all the other elements in the list and swapped accordingly.
#### Pseudocode:
````
    For I = 0 to N-1 do:
       Smallsub = I
       For J = I + 1 to N-1 do:
         If A(J) < A(Smallsub)
           Smallsub = J
         End-If
       End-For
       Temp = A(I)
       A(I) = A(Smallsub)
       A(Smallsub) = Temp
     End-For
````

## Quick Sort:
`Quick sort` is an efficient sorting algorithm, serving as a systematic method for placing the elements of a random access file or an array in an order.
#### Pseudocode:
```Quicksort(A,p,r) {
    if (p < r) {
       q <- Partition(A,p,r)
       Quicksort(A,p,q)
       Quicksort(A,q+1,r)
    }
}
Partition(A,p,r)
    x <- A[p]
    i <- p-1
    j <- r+1
    while (True) {
        repeat
            j <- j-1
        until (A[j] <= x)
        repeat
            i <- i+1
        until (A[i] >= x)
        if (i A[j]
        else 
            return(j)
    }
}
```

## Merge Sort:
`Merge sort` is an efficient,general purpose,comparison-based sorting algorithm.Most implementations produce a stable sort,which means that the order of equal elements is the same in both input and output.It is a 'Divide and conquer' algorithm.
#### Pseudocode:
```MERGE (A, p, q, r )

      n1 ← q − p + 1
      n2 ← r − q
      Create arrays L[1 . . n1 + 1] and R[1 . . n2 + 1]
      FOR i ← 1 TO n1
            DO L[i] ← A[p + i − 1]
      FOR j ← 1 TO n2
            DO R[j] ← A[q + j ]
      L[n1 + 1] ← ∞
      R[n2 + 1] ← ∞
    i ← 1
    j ← 1
    FOR k ← p TO r
         DO IF L[i ] ≤ R[ j]
                THEN A[k] ← L[i]
                        i ← i + 1
                ELSE A[k] ← R[j]
                        j ← j + 1
```

## Heap Sort:
`Heap Sort` is a comparison-based sorting algorithm. Heapsort can be thought of as an improved selection sort: like that algorithm, it divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element and moving that to the sorted region. The improvement consists of the use of a heap data structure rather than a linear-time search to find the maximum.
#### Pseudocode:
```
   procedure heapsort(a, count) is
    input: an unordered array a of length count
 
    (Build the heap in array a so that largest value is at the root)
    heapify(a, count)

    (The following loop maintains the invariants that a[0:end] is a heap and every element
     beyond end is greater than everything before it (so a[end:count] is in sorted order))
    end ← count - 1
    while end > 0 do
        (a[0] is the root and largest value. The swap moves it in front of the sorted elements.)
        swap(a[end], a[0])
        (the heap size is reduced by one)
        end ← end - 1
        (the swap ruined the heap property, so restore it)
        siftDown(a, 0, end)
```
