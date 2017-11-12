# Firecode.io

My solutions to C++ problem sets.

---

### Recursive Preorder Traversal

Given a binary tree, write a method to recursively traverse the tree in the preorder manner. 

Mark a node as visited by adding its `value` to the list - `vector <int> preordered_list`.

```
Example: 
     1
    / \
   2   3     ==> 1245367
  / \ / \
 4  5 6  7 
```
**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/recursive_preorder_traversal.cpp)**

### Bubble Sort

Write a function that takes in an array of `int`s and the `size` of the array and uses the
Bubble Sort algorithm to sort the array in ascending order.

The function should return the same, in-place sorted array.

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/bubble_sort.cpp)**

### Max Gain

Given an array of integers, write a method - `max_gain` - that returns the **maximum gain**. Maximum Gain is defined as the maximum difference between 2 elements in a list such that the larger element appears **after** the smaller element. If no gain is possible, return 0.

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/max_gain.cpp)**

### Permutations!

Implement a method that checks if two strings are permutations of each other. 

`permutation("CAT","ACT") --> true`

`permutation("hello","aloha") --> false`

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/permutations.cpp)**

### Merge Two Sorted Arrays

The idea behind the classic Mergesort algorithm is to divide an array in half, sort each half and then use a `merge()` function to merge the two halves into a single sorted array.

Implement a `merge()` function that takes in two sorted arrays and returns a third sorted array that contains elements of both the input arrays in the ascending order.

You can assume that the input arrays will always be sorted in ascending order and can have different sizes.

Examples:

`merge({2,5,7,8,9},5,{9},1) -> {2,5,7,8,9,9}`

`merge({7,8},2,{1,2},2) -> {1,2,7,8}`

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/merge.cpp)**

### BST Validation

Given the root node of a **Binary Tree**, determine if it is a Binary **Search** Tree.

Examples:
``` 
          20
        /   \
      15    30
     /  \
    14  18     

    output ==> true

          20
         /   \
       30    15 
      /  \                           
     14  18     

   output ==> false
```

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/bst_validation.cpp)**

### Find the First Non Duplicate Character in a String

Find the **first** non-duplicate character in a string. Return `0` if no unique character is found. 

`first_non_repeating( "abcdcd" ) --> 'a'`
`first_non_repeating( "cbcd" ) --> 'b'`
`first_non_repeating( "cdcd" ) --> '0'`

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/first_non_duplicate.cpp)**

### Anagrams

Write a method `is_anagram` that checks if two **lowercase** input `String`s are anagrams of each other. An anagram of a `String` is a `String` that is formed by simply re-arranging its letters, using each letter exactly once. Your algorithm should run in linear **O(n)** time and use constant **O(1)** space. 

Examples:

`is_anagram("abc","cab") => true`

`is_anagram("b","b") => true`

`is_anagram("bd","cb") => false`

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/anagrams.cpp)**

### Levelorder Traversal

Given a binary tree, write a function to perform a levelorder traversal and return a `vector` of integers containing the data of the visited nodes in the correct order.

```
Examples:

     1
    / \
   2   3     ==> 1234567
  / \ / \
 4  5 6  7 
```

**[answer](https://github.com/feklistoff/firecodeio-psets/blob/master/levelorder_traversal.cpp)**

