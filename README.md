/*
===================================================================
  Searching Algorithms
===================================================================

---------------------------
          AIM
---------------------------
To study, understand, and implement various searching algorithms in C++,
analyze their working principles, compare their efficiency, and 
conclude the best suitable algorithm under different scenarios.

---------------------------
     SOFTWARE USED
---------------------------
1.VS code

---------------------------
       OBJECTIVES
---------------------------
1. To implement searching algorithms in C++.
2. To understand linear and binary searching techniques.
3. To analyze time complexity and space complexity.
4. To compare efficiency of searching algorithms.
5. To conclude which algorithm works best under given conditions.

---------------------------
         THEORY
---------------------------
Searching algorithms are fundamental techniques used to locate a 
specific element within a collection of data such as arrays, 
linked lists, or databases. 

There are two broad categories of searching algorithms:

1. **Linear Search (Sequential Search):**
   - Scans each element of the list sequentially.
   - Simple but inefficient for large datasets.
   - Time Complexity: O(n)
   - Space Complexity: O(1)

2. **Binary Search:**
   - Works only on sorted arrays.
   - Repeatedly divides the search interval in half.
   - Efficient compared to Linear Search.
   - Time Complexity: O(log n)
   - Space Complexity: O(1) (iterative), O(log n) (recursive)

3. **Interpolation Search:**
   - Improves Binary Search by predicting the position using 
     the formula based on the key.
   - Works well for uniformly distributed data.
   - Time Complexity: O(log log n) (best), O(n) (worst).
   - Space Complexity: O(1).

4. **Exponential Search:**
   - Useful for unbounded or infinite lists.
   - Involves two steps:
        (a) Find range by repeated doubling.
        (b) Apply Binary Search within the found range.
   - Time Complexity: O(log n)
   - Space Complexity: O(1).

5. **Jump Search:**
   - Searches elements by jumping ahead fixed steps.
   - Then performs linear search in identified block.
   - Best step size = √n.
   - Time Complexity: O(√n)
   - Space Complexity: O(1).

---------------------------
         TABLES
---------------------------

| Algorithm           | Best Case | Worst Case | Space Complexity | Data Requirement |
|---------------------|-----------|------------|------------------|------------------|
| Linear Search       | O(1)      | O(n)       | O(1)             | Unsorted/Sorted  |
| Binary Search       | O(1)      | O(log n)   | O(1)             | Sorted           |
| Interpolation Search| O(1)      | O(n)       | O(1)             | Sorted, Uniform  |
| Jump Search         | O(√n)     | O(√n)      | O(1)             | Sorted           |
| Exponential Search  | O(log n)  | O(log n)   | O(1)             | Sorted           |

---------------------------
        FLOWCHART
---------------------------

Searching Algorithm (General)

        +------------------+
|  Start Program   |
+------------------+
         |
         v
+------------------+
|   Input Array    |
+------------------+
         |
         v
+------------------+
| Enter Key Value  |
+------------------+
         |
         v
+-----------------------------+
| Choose Searching Method     |
| [1] Linear  [2] Binary      |
+-----------------------------+
         |
   +-----+------+
   |            |
   v            v
Linear Search   Binary Search
   |               |
   v               v
+------------------+     +------------------+
| Compare Values   |     | Divide Array     |
| Sequentially     |     | Find Mid Value   |
+------------------+     +------------------+
         |                      |
         v                      v
+------------------+     +------------------+
| Found / Not ?    |     | Found / Not ?    |
+------------------+     +------------------+
         |                      |
         v                      v
+------------------+     +------------------+
| Display Result   |     | Display Result   |
+------------------+     +------------------+
         |                      |
         +----------+-----------+
                    |
                    v
           +------------------+
           |      End         |
           +------------------+
---------------------------
       ALGORITHM
---------------------------

Example: Binary Search Algorithm

Step 1: Start  
Step 2: Input array (sorted) and the key element.  
Step 3: Initialize `low = 0`, `high = n-1`.  
Step 4: Repeat until `low <= high`:  
        a. Find mid = (low + high)/2  
        b. If arr[mid] == key → return position.  
        c. If arr[mid] > key → high = mid - 1.  
        d. Else → low = mid + 1.  
Step 5: If not found, return "Element not found".  
Step 6: Stop.  

---------------------------
       CONCLUSION
---------------------------
1. Linear Search is simple but inefficient for large data.  
2. Binary Search is efficient and widely used on sorted data.  
3. Jump, Interpolation, and Exponential Searches improve efficiency 
   in specific cases.  
4. Overall, **Binary Search** remains the most reliable and 
   commonly used searching algorithm due to its logarithmic complexity.  

===================================================================
*/
