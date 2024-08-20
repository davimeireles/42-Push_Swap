# Project: Push_Swap - Efficient Sorting Algorithm Implementation

## Project Overview

The primary objective of Push_Swap was to develop a program that calculates and displays the smallest set of instructions to sort a stack of integers. This project deepened my understanding of sorting algorithms, algorithm complexity, and data structure manipulation.

## Key Features

### Sorting Program (push_swap)

- Takes a list of integers as arguments
- Calculates the most efficient set of operations to sort the stack
- Outputs the list of operations to sort the stack

### Allowed Operations

- `sa` (swap a): Swap the first 2 elements at the top of stack a
- `sb` (swap b): Swap the first 2 elements at the top of stack b
- `ss` : `sa` and `sb` at the same time
- `pa` (push a): Take the first element at the top of b and put it at the top of a
- `pb` (push b): Take the first element at the top of a and put it at the top of b
- `ra` (rotate a): Shift up all elements of stack a by 1
- `rb` (rotate b): Shift up all elements of stack b by 1
- `rr` : `ra` and `rb` at the same time
- `rra` (reverse rotate a): Shift down all elements of stack a by 1
- `rrb` (reverse rotate b): Shift down all elements of stack b by 1
- `rrr` : `rra` and `rrb` at the same time

### Bonus: Checker Program

- Takes the stack as an argument
- Reads instructions on the standard input
- Executes the instructions on the stack
- Displays "OK" if the stack is sorted, "KO" otherwise

## Technical Implementation

### Algorithm Design

- Implemented a custom sorting algorithm optimized for the given operations
- Utilized various sorting techniques like divide-and-conquer, partitioning, etc.

### Data Structures

- Implemented stack data structure
- Optimized data manipulation for efficiency

## Technical Challenges

1. **Algorithm Efficiency:** Designing an algorithm that sorts with the minimum number of operations
2. **Large Dataset Handling:** Efficiently sorting large sets of numbers (100 to 500 integers)
3. **Operation Optimization:** Minimizing the number of operations for different stack sizes
4. **Edge Case Management:** Handling various edge cases and ensuring consistent behavior

## Implementation Approach

1. **Algorithm Analysis:** Researched and analyzed various sorting algorithms to adapt for this specific problem
2. **Modular Design:** Separated the project into distinct modules (parsing, sorting, operation execution)
3. **Optimization Techniques:** Implemented various optimization techniques to reduce the number of operations

## Testing and Validation

- Developed a comprehensive test suite covering various input sizes and patterns
- Compared the number of operations with defined benchmarks
- Tested edge cases and random large datasets
- Verified correct sorting and operation execution

## Key Learnings

- Advanced sorting algorithms and their implementations
- Algorithm complexity analysis and optimization
- Efficient data structure manipulation
- Problem-solving skills for constrained environments

## Performance Metrics

- For 3 numbers: sorted in ≤ 3 operations
- For 5 numbers: sorted in ≤ 12 operations
- For 100 numbers: sorted in ≤ 700 operations (5 points)
- For 500 numbers: sorted in ≤ 5500 operations (5 points)

## Future Applications

- Complex algorithm design and optimization
- Data structure manipulation in constrained environments
- Performance-critical software development
- Problem-solving in systems with limited operations
