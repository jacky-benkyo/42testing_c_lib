This project has been created as part of the 42 curriculum by yichow.


• Description
The goal of this project is to learn how to create a library in C. This library contains more than
40 C core functions. This library is a critical work tool for further program C development.

list out the functions and usage:

• Instructions
 section containing any relevant information about compilation,
installation, and/or execution.

what the project is about, how to run it, and where to find more information


*This project has been created as part of the 42 curriculum by yichow.*

# Libft — Your Very First Own Library

## Description
**Libft** is the foundational project of the 42 curriculum. Because C programming can be tedious without access to standard utility functions, the goal of this project is to build a custom static C library (`libft.a`) from scratch by reimplementing core standard C library (`libc`) functions as well as additional utility functions for strings, memory management, file descriptor output, and singly linked lists.

This library serves as an essential toolkit and building block that will be reused across future 42 C projects. All functions are written strictly in accordance with the 42 Norm, without global variables, and compiled with `-Wall -Wextra -Werror`.

---

## Detailed Library Description

### Part 1: Libc Functions
Reimplementations of standard C library functions with the `ft_` prefix, matching the exact prototypes and behaviors defined in their respective `man` pages:

* **Character Classification & Conversion**
  * `ft_isalpha` — Checks for an alphabetic character.
  * `ft_isdigit` — Checks for a digit (`0` through `9`).
  * `ft_isalnum` — Checks for an alphanumeric character.
  * `ft_isascii` — Checks whether `c` fits into the 7-bit US-ASCII character set.
  * `ft_isprint` — Checks for any printable character (including space).
  * `ft_toupper` — Converts a lowercase letter to uppercase.
  * `ft_tolower` — Converts an uppercase letter to lowercase.

* **String Manipulation & Examination**
  * `ft_strlen` — Calculates the length of a string.
  * `ft_strlcpy` — Size-bounded string copying.
  * `ft_strlcat` — Size-bounded string concatenation.
  * `ft_strchr` — Locates the first occurrence of a character in a string.
  * `ft_strrchr` — Locates the last occurrence of a character in a string.
  * `ft_strncmp` — Compares two strings up to `n` bytes.
  * `ft_strnstr` — Locates a substring in a string, searching at most `len` bytes.
  * `ft_atoi` — Converts the initial portion of a string to an `int`.

* **Raw Memory Manipulation**
  * `ft_memset` — Fills memory with a constant byte.
  * `ft_bzero` — Zeroes out a byte string of `n` bytes.
  * `ft_memcpy` — Copies `n` bytes between non-overlapping memory areas.
  * `ft_memmove` — Safely copies `n` bytes between potentially overlapping memory areas.
  * `ft_memchr` — Scans memory for the first instance of a byte.
  * `ft_memcmp` — Compares two memory areas byte by byte.

* **Dynamic Memory Allocation (using `malloc`)**
  * `ft_calloc` — Allocates memory for an array of elements with integer overflow protection and initializes all bytes to zero.
  * `ft_strdup` — Allocates and returns a duplicate of a null-terminated string.

---

### Part 2: Additional Functions
Custom utility functions for string processing and file descriptor I/O that are either absent from standard `libc` or provided in a different form:

* **String Allocation & Transformation**
  * `ft_substr` — Allocates and returns a substring from string `s` starting at index `start` of maximum length `len`.
  * `ft_strjoin` — Allocates and returns a new string resulting from the concatenation of `s1` and `s2`.
  * `ft_strtrim` — Allocates and returns a copy of `s1` with characters specified in `set` removed from both ends.
  * `ft_split` — Splits a string `s` into a `NULL`-terminated array of strings using delimiter `c`, freeing all prior allocations on failure.
  * `ft_itoa` — Allocates and converts an `int` (including negative numbers and `INT_MIN`) into a null-terminated string.
  * `ft_strmapi` — Applies a function `f(index, char)` to each character of `s` to create a newly allocated string.
  * `ft_striteri` — Applies a function `f(index, &char)` to each character of `s` in place via its address.

* **File Descriptor Output (using `write`)**
  * `ft_putchar_fd` — Outputs a character `c` to the given file descriptor `fd`.
  * `ft_putstr_fd` — Outputs a string `s` to the given file descriptor `fd`.
  * `ft_putendl_fd` — Outputs a string `s` to the given file descriptor `fd`, followed by a newline.
  * `ft_putnbr_fd` — Outputs an integer `n` to the given file descriptor `fd`.

---

### Part 3: Linked List Functions (`t_list`)
Functions to create, traverse, modify, and free singly linked lists using the `t_list` structure defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;


Instructions
Prerequisites

    A C compiler (cc / gcc / clang)

    GNU make and ar archiver

Compilation

Clone the repository and run make at the root of the project to compile the static library libft.a:
Bash

git clone <your-repo-url> libft
cd libft
make

Makefile Rules

    make or make all — Compiles all mandatory .c source files into .o object files and archives them into libft.a.

    make bonus — Compiles the linked list functions and includes them in libft.a.

    make clean — Removes all generated .o object files.

    make fclean — Removes all .o object files and the compiled libft.a archive.

    make re — Performs a full recompilation (fclean followed by all).


• Resources
To check the specifications and how does the function work, documentation from man and information from GeeksforGeeks website are used. AI https://cs50.ai/chat is used for checking my logic and understanding the abstract concepts.
	Community Unit Testers:

    Francinette

    libftTester by Tripouille

    libft-unit-test by alelievr
