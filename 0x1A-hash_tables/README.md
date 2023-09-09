# C - Hash tables

### Description 

This directory is dedicated to hasing functions. And we'll use C implementation it hash tables with C.

**What is a hash function ?**
A [hash](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew) function is a function that associates data of arbitrary size with values of fixed size.
The values returned by a hash function (called hash values, hash codes, hashes) are generally used to index a fixed-size table called a hash table.
Here is an example of a simple hash function in C:
```
/**
 * hash_function - Computes a hash for a given string
 * @str: The string to be hashed
 *
 * This function computes a hash for a given string using
 * a hashing algorithm. The string is passed as an argument
 * and the function returns an unsigned long integer representing
 * the hash of the string.
 *
 * The hash is computed by initializing a variable 'i' to 0 and
 * then iterating over each character in the string. For each
 * character, a specific operation is performed that contributes
 * to the final hash value.
 *
 * Return: The computed hash as an unsigned long
 */
#define size 50000 // Size of the HashTable.

unsigned long hash_function(char* str)
{
    unsigned long i;

    i = 0

    for (int j = 0; str[j]; j++)
        i += str[j];

    return (i % SIZE);
}
```

In conclusion, a hash function is a critical tool in computing, used for efficient data retrieval, data integrity verification, encryption, and data security.

**What is a hash table, how do they work and how to use them**
A [hash table](https://en.wikipedia.org/wiki/Hash_table), also known as a hash map, is a data structure that associates keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.
Hash tables work by storing data in an array format, where each data value has its own unique index value.
To use a hash table, you first need to generate a hash of the key using a hash function. This hash is then used to find an index in the hash table where the value should be stored. If two keys result in the same hash (a collision), the hash table needs to have a strategy to handle it.

Here is an example of a basic hash table implementation in C.
```
#define SIZE 200
/**
 * hash_table_s - HashTable data structure
 * @table: Array serving as the basis for the HashTable
 * @size: Current size of the HashTable
 *
 * Description: HashTable is a struct that represents a hash table data structure.
 * It contains an array 'table' which serves as the actual storage for the data.
 * 'size' keeps track of how many elements are currently stored in the HashTable.
 */
typedef struct hash_table_s{
    int size;
    int table[SIZE];
} hash_table_t;

/**
 * hash_table_create - Creates a new HashTable
 *
 * This function creates a new HashTable by dynamically allocating memory
 * for a HashTable struct. If memory allocation is successful, it initializes
 * the size of the HashTable to 0. If memory allocation fails, it returns NULL.
 *
 * Return: A pointer to the new HashTable on success, NULL on failure
 */
hash_table_t* hash_table_create() {
    hash_table_t* h = (hash_table_t*)malloc(sizeof(hash_table_t));
   
    if (h == NULL) {
        return NULL; // Allocation failed
    }

    h->size = 0;
    return h;
}
```

**Topics :** `C` `Algorithm` `Data structure`

### Files 

+ 0-hash_table_create.c a function that creates a hash table.

+ 1-djb2.c a hash function implementing the djb2 algorithm.

+ 2-key_index.c  a function that gives you the index of a key.

+ 3-hash_table_set.c a function that adds an element to the hash table.

+ 4-hash_table_get.c a function that retrieves a value associated with a key.

+ 5-hash_table_print.c a function that prints a hash table.

+ 6-hash_table_delete.c a function that deletes a hash table.

+ hash_tables.h the header file containing all functions

## Note :-)
**Python Dictionaries** are implemented using hash tables.
