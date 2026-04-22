*This project has been created as part of the 42 curriculum by <mide-fre>*

# Libft

## Description

Libft is a static C library that reimplements a set of fundamental functions from the standard C library (libc), along with additional utility functions and basic data structures.

The main objective of this project is to develop a deep understanding of:
- memory manipulation
- string handling
- dynamic memory allocation
- data structures

This library is designed to be reused throughout the 42 curriculum, serving as a solid foundation for future projects.

---

## Detailed Library Description

The **Libft** library is organised into three main components, each addressing a specific aspect of low-level programming.

### 1. Libc Functions (Reimplementation)

These functions replicate the behaviour of standard libc functions, strictly following their original specifications:

- **Character classification**  
  Functions used to determine character properties (alphabetic, numeric, etc.).

- **Memory manipulation**  
  Functions such as `memset`, `memcpy`, and `memmove` provide direct control over memory blocks, which is essential for performance and safety.

- **String manipulation**  
  Functions like `strlen`, `strchr`, and `strncmp` allow efficient handling of C strings.

- **Type conversion**  
  `atoi` converts strings into integers.

- **Memory allocation**  
  `calloc` and `strdup` handle dynamic memory allocation safely.

All these functions are implemented without relying on their original counterparts, ensuring a complete understanding of their internal behaviour.

---

### 2. Additional Functions

This set of functions extends the capabilities of the library:

- **String processing**  
  Functions such as `split`, `strjoin`, `substr`, and `strtrim` allow flexible manipulation of strings.

- **Transformations**  
  Functions like `strmapi` apply custom logic to each character of a string.

- **Advanced conversion**  
  `itoa` converts integers into strings, including negative values.

- **File descriptor output**  
  Functions to write characters, strings, and numbers to file descriptors (e.g. stdout, stderr).

These utilities are commonly reused in more advanced projects and help reduce repetitive code.

---

### 3. Data Structures — Linked Lists

The library includes an implementation of singly linked lists:

- Each node contains:
  - a generic pointer (`void *content`)
  - a pointer to the next node

- Provided functionalities:
  - node creation
  - insertion at the beginning and end
  - list size calculation
  - iteration over elements
  - safe deletion of nodes
  - list transformation (`lstmap`)

This structure enables dynamic and flexible data storage.

---

## Instructions

### Compilation

```bash
make
