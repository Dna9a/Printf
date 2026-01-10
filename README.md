s## *This project has been created as part of the 42 curriculum by yoabied.* 
<!-- 9sem -->
<div style="display: flex; justify-content: space-between; align-items: center;">
  <span style="font-size: 45px;">📄</span>
  <span style="font-size: 40px;">🐪</span>
</div>
<!-- # Description-->

# Description
 This project consists of implementing the same exact behavior of the printf function,  








<!--which reads a single line from a given file descriptor.
The function must handle any valid file descriptor and return NULL if the descriptor is invalid or if an error occurs.
On success, it returns the line read from the file descriptor, including the terminating newline character if it exists. -->


 - - - - - - - - - - - - - - - - - -
## Function Prototype

```c
int ft_printf(const char *, ...);
```
### Parameters
<!-- - `fd`: file descriptor for reading -->
You have to implement the following conversions:
## • %c Prints a single character.
## • %s Prints a string (as defined by the common C convention).
## • %p The void * pointer argument has to be printed in hexadecimal format.
## • %d Prints a decimal (base 10) number.
## • %i Prints an integer in base 10.
## • %u Prints an unsigned decimal (base 10) number.
## • %x Prints a number in hexadecimal (base 16) lowercase format.
## • %X Prints a number in hexadecimal (base 16) uppercase format.
## • %% Prints a percent sign.


### Return Value
<!-- - `char *`: a pointer to the line read from the file descriptor, or NULL if an error occurs or EOF is reached. -->
## Key Features
<!-- 1. Line-by-Line Reading: Reads a file or standard input line by line, handling lines of any length. __(Support in Mandatory part)__ -->


<!-- Instructions -->
# Instructions
## Usage
#### how to use Printf 
<!-- 1. Include Header: Ensure that the get_next_line.h or get_next_line_bonus.h header is included in your project.

2. Call Function: Call get_next_line(fd) in a loop to retrieve lines until NULL is returned (indicating end-of-file or an error). -->


```c
#include "printf.h"
#include <stdio.h> 

int	main(void)
{








	return (0);
}
```

## Makefile 
<!-- During the process of testing my Printf, I made a small makefile tester so to test my function just with a make command, that's by throwing `ps -ef` output on another file called `file.txt` -->

 - - - - - - - - - - - - - - - - - -

```Make








```
 - - - - - - - - - - - - - - - - - -

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