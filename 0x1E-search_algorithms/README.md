# 0x1E. C - Search Algorithms


A search algorithm is an algorithm designed to solve a search problem.
Search algorithms can be classified based on their mechanism of searching into
three types of algorithms: [linear](https://en.wikipedia.org/wiki/Linear_search),
binary(https://en.wikipedia.org/wiki/Binary_search_algorithm), and hashing.


In this project we learned about searching Algorithms. We'll write some and
answer to some questions from ALX related to complexity (time and space)
of algorithms using Big O notation

**Topics** : C, Algorithms
**Style of the code**: The code is written in Betty style.

## Usage
To use the code in this project, you can to run :

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c file_name.c -o output_name
./output_name
```

## Files
| File name         | Description |
|-------------------|--------------------------------|
| search_algos.h    | the header of the project      |
| 0-linear.c   | searches for a value in an array of integers using the Linear search algorithm     |
| 1-binary.c   | searches for a value in a sorted array of integers using Binary search algorithm     |
| 2-O   |  the time complexity (worst case) of a linear search in an array of size n     |
| 3-O   |  the space complexity (worst case) of an iterative linear search algorithm in an array of size n     |
| 4-O   |  the time complexity (worst case) of a binary search in an array of size n     |
| 5-O   |  the space complexity (worst case) of a binary search in an array of size n     |
| 6-O   |  the space complexity of this function / algorithm provided by ALX     |
| 100-jump.c   |  searches for a value in a sorted array of integers using the Jump search algorithm     |
| 101-O   |   the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)     |
| 102-interpolation.c   |  searches for a value in a sorted array of integers using the Interpolation search algorithm    |


Bellow is the function of the file 6-0
```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

