*This project has been created as part of the 42 curriculum by mide-fre*

# Libft

## Description

Libft is a static C library that reimplements a set of fundamental functions from the standard C library (libc), along with additional utility functions and basic data structures.

The main objective of this project is to develop a deep understanding of:

* memory manipulation
* string handling
* dynamic memory allocation
* data structures

This library is designed to be reused throughout the 42 curriculum, serving as a solid foundation for future projects.

---

## Detailed Library Description

The **Libft** library is organised into three main components, each addressing a specific aspect of low-level programming.

### 1. Libc Functions (Reimplementation)

These functions replicate the behaviour of standard libc functions, strictly following their original specifications:

* **Character classification**  
  Functions used to determine character properties such as alphabetic, numeric, ASCII, or printable values.

* **Memory manipulation**  
  Functions such as `memset`, `bzero`, `memcpy`, and `memmove` provide direct control over raw memory blocks.

* **String manipulation**  
  Functions like `strlen`, `strchr`, `strrchr`, `strncmp`, `strlcpy`, `strlcat`, and `strnstr` allow efficient handling of C strings.

* **Type conversion**  
  `atoi` converts a numeric string into an integer value.

* **Dynamic allocation**  
  `calloc` and `strdup` allocate and duplicate memory safely.

All these functions are implemented independently in order to understand their internal logic and behaviour.

### 2. Additional Utility Functions

This section contains functions not present in the standard libc or implemented here in a different form:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

These functions provide advanced string processing, integer conversion, functional iteration, and controlled output to file descriptors.

### 3. Data Structures — Linked Lists

The library also includes an implementation of singly linked lists using the following structure:

    typedef struct s_list
    {
    	void			*content;
    	struct s_list	*next;
    }	t_list;

Implemented linked list operations:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

These functions allow dynamic storage, traversal, deletion, and transformation of generic data.

---

## Instructions

### Compilation

    make

This command generates:

    libft.a

### Makefile Rules

* `make` or `make all` → compile the library
* `make clean` → remove object files
* `make fclean` → remove object files and library
* `make re` → rebuild everything

### Usage

Include the header file:

    #include "libft.h"

Compile your project with:

    cc main.c -L. -lft

---

## Technical Details

* Language: C
* Norm: 42 Norminette
* Compilation flags: `-Wall -Wextra -Werror`
* No global variables
* Helper functions defined as `static`
* Static library created using `ar`
* Careful dynamic memory management
* No memory leaks

---

## Design Choices

* Independent implementations without using the original libc functions unless explicitly authorised
* Modular code organisation
* Reusable internal logic whenever possible
* Explicit handling of edge cases such as NULL pointers, zero lengths, and integer boundaries
* Priority given to memory safety and predictable behaviour

---

## Testing

The library was tested through:

* custom personal test files
* direct comparison with original libc behaviours
* edge case validation
* memory leak checks

Special attention was given to:

* empty strings
* NULL pointers
* overlapping memory areas
* integer minimum and maximum values
* allocation failures

---

## Resources

### Classic References

The following references were used throughout the development of this project:

* Linux manual pages (`man`)
* *The C Programming Language* — Brian W. Kernighan and Dennis M. Ritchie
* GNU C Library Documentation
* BSD libc Documentation
* Official 42 Libft Subject

These references were consulted to ensure that each function respected the expected prototype, return values, and edge-case behaviour.

### Development and Debugging Resources

Additional resources used during implementation and testing:

* custom written test cases
* peer discussions and peer evaluations
* manual debugging with `gdb`
* memory analysis with `valgrind`

### AI Usage

Artificial Intelligence was used exclusively as a supplementary learning and verification tool.

Its usage was limited to:

* clarifying low-level C concepts
* discussing possible implementation strategies
* validating understanding of edge cases
* reviewing theoretical behaviour of standard functions

AI was not used to blindly generate final solutions, and every function included in this library was manually written, tested, debugged, and fully understood before submission.

---

## Conclusion

Libft establishes the essential foundations of low-level C programming by focusing on memory handling, string processing, dynamic allocation, and basic data structures.

Beyond being a reusable static library, it represents a fundamental step towards writing safer, cleaner, and more efficient C code throughout the 42 curriculum.
