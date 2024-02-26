# Tutorial_5

# 2Sum Problem Variant 2

This C++ program finds two indices of the elements in a given array that sum up to a specific target. This is a variant of the 2Sum problem.

## How to Use

1. Clone the repository or download the `main.cpp` file.
2. Compile the code using a C++ compiler.
3. Run the executable file.
4. The program will output the indices of the elements that sum up to the target.

## Example

Given the input array `{2, 6, 5, 8, 11}` and the target `14`, the program will output `[1, 3]` because `arr[1] + arr[3] = 6 + 8 = 14`.

## Algorithm

The program uses an unordered map to store the indices of the elements. It iterates through the array and for each element, it checks if the difference between the target and the current element exists in the map. If it does, it returns the indices of the current element and the element that completes the target sum. If no such pair is found, it returns `[-1, -1]`.
