# libft

libft is a project developed for 42 Heilbroon School.


**Keywords**

C programming - pointers - libc.h - strings.h - stdlib.h - malloc - single linked list - C library - archive - Makefile

## Subject

This is the first project realized for the 42 Heilbronn school. The goal is to recreate some of the functions of the standard library `libc`.

The bonus part involves functions to create [single linked lists](https://en.wikipedia.org/wiki/Linked_list) and performing operations with them like creating new node, adding and removing nodes, retrieve size and last item of the list.

## How to Use

1. Clone the repository:
```
git clone git@github.com:NicoCastelnuovo/libft.git libft
```
2. Navigate to the `libft` directory and `make` the library:
```
cd libft
make
```
3. Include the header inside your .c file:
```
#include "libft.h"
```
4. Compile your executable:
```
cc <your_main.c> ./<libft_path>/libft.a -I ./<libft_path>/include/ -o <program_name>
```

5. Enjoy!
