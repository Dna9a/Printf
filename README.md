## *This project has been created as part of the 42 curriculum by yoabied.* 
<!-- 9sem -->
<div style="display: flex; justify-content: space-between; align-items: center;">
  <span style="font-size: 45px;">📄</span>
  <span style="font-size: 40px;">🐪</span>
</div>

<!-- # Description-->
<!-- • A “Description” section that clearly presents the project, including its goal and a
brief overview. -->
# Description
```
This project consists of implementing the same exact behavior of the printf function, with some specific option if we mention the mandatory part, other than that the main goal of this project is to basicaly learn how to handle variadic functions (va_list / va_start / va_arg / va_end) ,
```

## Mandatory   conversions

| Specifier | Meaning |
|----------|---------|
| `%c` | a single character |
| `%s` | a string (NULL prints `(null)`) |
| `%p` | a pointer printed in hexadecimal (NULL prints `0x0`) |
| `%d` | a decimal (base 10) signed integer |
| `%i` | a decimal (base 10) signed integer |
| `%u` | a decimal (base 10) unsigned integer |
| `%x` | a number in hexadecimal (base 16), lowercase |
| `%X` | a number in hexadecimal (base 16), uppercase |
| `%%` | a percent sign |


 - - - - - - - - - - - - - - - - - -
 
## Function Prototype

```c
int ft_printf(const char *, ...);
```

### Parameters

- `const char *format`: the format string
- `...`: a variable number of arguments (Ellipsis)

### Return Value

- Returns the total number of characters written.
- (Like the real printf) this implementation does not guarantee useful behavior on invalid format strings.


<!-- Instructions -->
<!-- • An “Instructions” section containing any relevant information about compilation,
installation, and/or execution. -->
# Instructions

## Usage
Example:

```c
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a;
	a = 15;

	ft_printf("Hello World, today is %d", a);
	printf("Hello World, today is %d", a);

	return (0);
}
```

## Compilation
The project includes a Makefile that compiles the source files to create the required library file `libftprintf.a`. Run:
```zsh
make
```
Then you can manually compile your program with:
```zsh
gcc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

<!-- Resources -->
<!-- • A “Resources” section listing classic references related to the topic (documentation, articles, tutorials, etc.), as well as a description of how AI was used — specifying for which tasks and which parts of the project. -->
# Resources 
## References

- **[Variadic Functions Guide](https://trp-directories.vercel.app/guides/variadic-functions-in-c-complete-guide-to-valist-vastart-vaarg-vaend/)**
- **[Peer's Miro Board](https://miro.com/app/board/uXjVN-42a5k=/)**
- **[GeeksforGeeks - Variadic Functions](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)**
- **[Microsoft Docs - Variadic Functions](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)**
## AI Usage
- **ChatGPT** was used to redefine terms such as promotions and variadic functions to ensure clarity and accuracy eather during the making of my Ft_printf project or while writing this README file.

<!-- Additional sections may be required depending on the project (e.g., usage examples, feature list, technical choices, etc.). -->
# The Algorithm

## Overview

```
While building my ft_printf, I took the approach of creating multiple helper functions to achieve the project's goals.
```
### **Main Functions**
#### - `ft_printf`: main function that processes the format string and arguments
#### - `type_routeur`: routes to the correct printing function based on the format specifier

### **Helper Functions**

#### The following helper functions were implemented to handle specific tasks as : 
#### - `ft_putnbr`: prints a signed int in decimal (handles negatives + INT_MIN) responsible of `%d` and `%i`
#### - `ft_putnbr_unsigned`: prints an unsigned int in decimal responsible of `%u`
#### - `ft_putnbr_hex`: prints an unsigned int in hexadecimal ('x' or 'X') responsible of `%x` and `%X`
#### - `longhex_for_addr`: prints an unsigned long in lowercase hex (used for `%p`)
#### - `ft_putaddress`: prints "0x" + the pointer value (or "0x0" if NULL) responsible of `%p`
#### - `ft_putstr`: prints a string (handles NULL) responsible of `%s`
#### - `ft_putchar`: prints a single character responsible of `%c`

## ** Algorithm Flow**
1. **Start**: call `ft_printf(format, ...)`
2. **Init**: set up `va_list` (`va_start`)
3. **Parse**: walk through `format` and detect `%` specifiers
4. **Dispatch**: call `type_routeur(specifier, ap)`
5. **Print**: helper does `va_arg` + writes output
6. **Count**: accumulate total printed characters
7. **Finish**: `va_end` and return the count

<!-- ➠ Additional sections may be required depending on the project (e.g., usage
examples, feature list, technical choices, etc.).
Any required additions will be explicitly listed below.
• A detailed explanation and justification of the chosen algorithm and data structure
must also be included. -->
## Technical Notes
### Variadic Argument Handling

```c
// va_list is essentially a structure that holds argument information
typedef struct {
    unsigned int gp_offset;      // General purpose register offset
    unsigned int fp_offset;      // Floating point register offset
    void *overflow_arg_area;     // Stack argument area
    void *reg_save_area;         // Register save area
} va_list[1];
```

**Key Functions:**
- `va_start(ap, last)`: Initializes the argument list, where 'last' is the last named parameter
- `va_arg(ap, type)`: Retrieves the next argument of the specified type
- `va_end(ap)`: Cleans up the argument list (similar to freeing memory)

**Storage:**
- Arguments are stored in registers when possible (up to 48 bytes for general purpose, 128 bytes for floating point)
- Additional arguments overflow to the stack
--------------------------------------------------------------
### Type Promotion in Variadic Functions

When passing arguments to variadic functions, C automatically promotes certain types:

```
char    ──────────► int
short   ──────────► int
float   ──────────► double

unsigned char  ───►  int
unsigned short ───►  int
```

This is why we use `int` in `va_arg()` even when expecting a `char`.
