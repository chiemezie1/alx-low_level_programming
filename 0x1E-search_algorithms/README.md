## Search Algorithms

Search algorithms are fundamental techniques used to retrieve information stored within some data structure. Choosing the appropriate search algorithm is crucial for optimizing the performance and efficiency of your application.

Search algorithms can be classified into different types based on their approach and the data structure they operate on. Here, we cover two of the most common search algorithms: Linear Search and Binary Search.

### Linear Search

Linear Search is a simple search algorithm that checks every element in a list until the desired element is found or the list ends. It is also known as a sequential search.

- **Algorithm**:
    1. Start from the first element of the list.
    2. Compare the current element with the target element.
    3. If the current element is the target, return its position.
    4. If not, move to the next element and repeat the process.
    5. If the end of the list is reached without finding the target, return -1.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

### Binary Search

Binary Search is an efficient algorithm for finding an element in a sorted list by repeatedly dividing the search interval in half.

- **Algorithm**:
    1. Initialize `low` to the first index and `high` to the last index of the list.
    2. Find the middle index, `mid`.
    3. If the target element is equal to the element at `mid`, return `mid`.
    4. If the target element is less than the element at `mid`, repeat the search in the lower half of the list.
    5. If the target element is greater, repeat the search in the upper half.
    6. If `low` exceeds `high`, the target is not in the list, return -1.
- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)

### Best Search Algorithm to Use

The best search algorithm depends on your specific needs and the properties of your data:

- **Linear Search**:
    - Best for unsorted or small lists.
    - Simple to implement and does not require preprocessing the list.
- **Binary Search**:
    - Best for large, sorted lists.
    - Requires the list to be sorted but is much faster for larger datasets.

### Space Complexity

Space Complexity refers to the total amount of memory used by an algorithm relative to the input size. For search algorithms, the space complexity is typically O(1), meaning they require a constant amount of additional memory regardless of the input size.

### Additional Resources

For further learning, check out the following resources:

- [Search Algorithms Video Playlist](https://www.notion.so/d46f0eb1ba3d4ef09ed0c31cbe3605be?pvs=21)
- [GeeksforGeeks: Search Algorithms](https://www.notion.so/d46f0eb1ba3d4ef09ed0c31cbe3605be?pvs=21)
- [Coursera: Data Structures and Algorithms Specialization](https://www.notion.so/d46f0eb1ba3d4ef09ed0c31cbe3605be?pvs=21)