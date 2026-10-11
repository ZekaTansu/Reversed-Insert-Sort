# Reversed Insert Sort

An experimental left-to-right insertion sort variant implemented in C.

## 1. Introduction

Reversed Insert Sort is my implementation of an insertion-sort variation that processes previously sorted elements from left to right, rather than scanning backward as in traditional insertion sort.

The goal of this project is to explore a different approach to insertion sorting and analyze its correctness, performance, and computational complexity.

This implementation sorts integers in ascending order.

## 2. How It Works

The algorithm works as follows:

1. Start with the second element of the array.
2. Store the current element in a variable called `key`.
3. Compare the key with previously processed elements, starting from the beginning of the array.
4. If the key is smaller than the compared element, exchange their values.
5. Update the key to reflect the value now held at the current index.
6. Repeat until all preceding elements have been examined.
7. Continue with the next array element until the entire array is sorted.

### Example

**Input:** [5, 2, 4, 1]

**Pass 1:** [2, 5, 4, 1]

**Pass 2:** [2, 4, 5, 1]

**Pass 3:** [1, 2, 4, 5]

**Output:** [1, 2, 4, 5]

## 3. Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best | O(n²) |
| Average | O(n²) |
| Worst | O(n²) |

**Auxiliary Space Complexity:** O(1)

The algorithm performs n(n−1)/2 element comparisons regardless of the initial array order.

Unlike traditional insertion sort, this implementation does not achieve linear time on an already sorted array.

The algorithm operates in place but is not stable: equal-valued elements may change their original relative order.

## 4. Compilation and Execution

**Requirements:**
- A C compiler such as GCC
- A Linux, Windows, or macOS environment

Compile the source code:

`gcc -std=c11 -Wall -Wextra reversed_insert_sort.c -o reversed_insert_sort`

Run on Linux or macOS:

`./reversed_insert_sort`

The program generates an array of random integers, displays the original array, sorts it, and displays the sorted result.

The default array size is controlled by the constant `N`.

## 5. Comparison with Traditional Insertion Sort

Traditional insertion sort typically shifts larger elements toward the right while searching backward for the correct insertion position.

This implementation instead traverses the sorted prefix from left to right, placing smaller values earlier and carrying displaced values forward.

Both algorithms have quadratic worst-case time complexity, but their operation counts and best-case behavior differ.

## 6. Project Status

Initial implementation available. Testing and performance benchmarking are planned.

This project is an educational exploration of an insertion-sort variant. No claim of algorithmic novelty is made.

## 7. License

This project is licensed under the MIT License. See the LICENSE file for details.
