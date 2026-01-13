## *This project has been created as part of the 42 curriculum by yoabied.* 
<!-- 9sem -->
<div style="display: flex; justify-content: space-between; align-items: center;">
  <span style="font-size: 45px;">📄</span>
  <span style="font-size: 40px;">🐪</span>
</div>
<!-- # Description-->

# Description

```This project consists of implementing the same exact behavior of the printf function, with some specific option if we mention the mandatory part , other than that the main goal of this project is to basicaly learn how to handle variadic functions,```

## implementing the following conversions:

#### • %c A single character.
#### • %s A string (as defined by the common C convention).
#### • %p A void * pointer argument printed in hexadecimal format.
#### • %d A decimal (base 10) number.
#### • %i An integer in base 10.
#### • %u An unsigned decimal (base 10) number.
#### • %x A number in hexadecimal (base 16) lowercase format.
#### • %X A number in hexadecimal (base 16) uppercase format.
#### • %% A percent sign.

 - - - - - - - - - - - - - - - - - -
## Function Prototype

```c
int ft_printf(const char *, ...);
```
### Parameters



### Return Value
<!-- - `char *`: a pointer to the line read from the file descriptor, or NULL if an error occurs or EOF is reached. -->
## Key Features
<!-- 1. Line-by-Line Reading: Reads a file or standard input line by line, handling lines of any length. __(Support in Mandatory part)__ -->


<!-- Instructions -->
# Instructions

## Compilation
The project includes a Makefile that compiles the source files with the flags `-Wall`, `-Wextra`, and `-Werror`. To create the library, run:
```c
make
```
This command uses the `ar` tool to generate the required library file `libftprintf.a` at the root of the repository.

## Makefile Rules
#### • `all`: Compiles the library.
#### • ``clean``: Removes object files.
#### • ``fclean``: Removes object files and the libftprintf.a library.
#### • ``re``: Performs a full re-compilation.
## Usage
#### how to use ``ft_printf`` 

```c
#include "ft_printf.h"
#include <stdio.h> 

int	main(void)
{








	return (0);
}
```

<!-- Resources -->
# Resources 
- **[a peers vercel](https://trp-directories.vercel.app/guides/variadic-functions-in-c-complete-guide-to-valist-vastart-vaarg-vaend/)**
- **[sum of my peer miro](https://miro.com/app/board/uXjVN-42a5k=/)**
- **[GeeksforGeeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)**
- **[]()**
- **[]()**

<!-- Additional sections may be required depending on the project (e.g., usage examples, feature list, technical choices, etc.). -->

# The algorithm

## Overview
While building my Printf, I took the approach of creating multiple helper functions so to reach the projects goal .

### 1. Static Variable (Stash)

### 2. `gnl_read` Function

### 3. `ineeddaline` Function

### 4. `stashsys` Function


## Algorithm Flow
1. **Read**: 
2. **Extract**:
3. **Update**: 
4. **Return**: 
5. **Repeat**:  😔🐪



```c
va_list = is basicaly a array that hold a struct it basicaly holds 4 éléments 
typedef struct{
      unsigned int gp_offset; 
      unsigned int fp_offset;
      // each these them are smg
      void *overflow_arg_area;
      void *reg_save_area
}va_list[1];

va_start akhir data type kat3arfo
va_arg katji mora makat3raf datatype mean chat la Kant c
va_end (katsali as if you're using free) 
-----------------

all this is stored in the register thanks to the registers 
unless u surpase the size then u uses stacks
size 48 bite and 128 bite

-----------------



```



the promotion system how it works 
