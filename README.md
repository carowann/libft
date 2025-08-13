# libft

A custom C library that started as a 42 School project and evolved into a comprehensive utility collection.

## Origin & Evolution

This project began with the mandatory **libft** assignment at 42 School, which required implementing specific standard C library functions. Over time, I kept adding functions that proved useful for other projects in the curriculum.

What started as a simple recreation of `strlen` and `strcpy` grew into a full-featured library with:
- All the original 42 requirements
- Additional string utilities (`ft_strjoin3`, `ft_strndup`)  
- Get Next Line implementation with multi-file descriptor support
- Custom printf function
- Complete linked list management

## Core Functions

### Character & String Operations
- Character validation: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Case conversion: `ft_toupper`, `ft_tolower`
- String basics: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strdup`
- Advanced string handling: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`

### Memory Management
- Core operations: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- Memory search/compare: `ft_memchr`, `ft_memcmp`
- Safe allocation: `ft_calloc`

### Utilities Added Over Time
- **Get Next Line**: Efficient file reading line by line
- **Custom printf**: Handles basic format specifiers (%s, %d, %c, %x, %p)
- **Linked lists**: Full CRUD operations for `t_list` structures
- **Enhanced string functions**: Multi-string joining, bounded duplication

## Usage

```bash
make        # Compile the base library
make bonus  # Include linked list functions
make clean  # Remove object files
make fclean # Remove all generated files
```

Include in your project:
```c
#include "libft.h"
// Compile with: gcc -Wall -Wextra -Werror -L. -lft your_file.c
```

## Configuration

Buffer size for Get Next Line can be adjusted:
```c
#define BUFFER_SIZE 42  // Default is 10
```

## A Note on Commit History

This was my first time using GitHub seriously, so please forgive the messy commit messages 😅. The code quality improved much faster than my Git skills! I've kept the original history as a reminder of the learning process.

## Why This Matters

Unlike many student projects that get abandoned after grading, this library is battle-tested. Every function here has been used in real 42 projects like `ft_printf`, `push_swap`, `minishell`, and others. When something didn't work in practice, I fixed it. When I needed a new utility, I added it.
