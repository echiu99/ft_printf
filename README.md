# ft_printf
ft_printf is a custom implementation of the standard C printf() function. This project taught me about handling a variable number of arguments and managing formatted output in C. The result is a versatile and reusable library function for formatted printing, adhering to the specific constraints of the project.

## Features
- Supports the most common printf conversions:
  - %c: Prints a single character.
  - %s: Prints a string.
  - %p: Prints a pointer address in hexadecimal format.
  - %d / %i: Prints a signed integer (decimal).
  - %u: Prints an unsigned integer (decimal).
  - %x / %X: Prints an integer in hexadecimal (lowercase/uppercase).
  - %%: Prints a literal % character.
- Fully functional library: libftprintf.a for integration into other projects.
- Extensible design for adding more formatting features in the future.

## Installation
1. Clone this repository:
```
git clone https://github.com/your-username/ft_printf.git  
cd ft_printf  
```
2. Compile the library using the Makefile:
```
make
```

## Usage
To use ft_printf in your project, include the header file and link the compiled library.
### Function Prototype:
```
int ft_printf(const char *format, ...);  
```
### Example Usage:
```
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s! The answer is %d.\n", "world", 42);
    ft_printf("Memory address: %p\n", (void *)0x12345678);
    return 0;  
}
```
### Compilation Example:
```
cc main.c -L. -lftprintf -o my_program
```

## Key Features
- Variadic Functions: Leveraged va_start, va_arg, and va_end to handle a variable number of arguments.
- Custom Parsing: Built a parser to interpret the format string and apply appropriate conversions.
- Memory Efficiency: Managed all dynamic memory allocations and ensured no leaks.
- Extensible Design: Modularized the code for easy addition of new flags or conversions.

## Challenges
The ft_printf project deepened my understanding of:
- Variadic functions in C and their practical uses.
- Formatting strings and numbers efficiently.
- Handling edge cases in a system-level function.

## About This Project
I developed ft_printf as part of my programming journey to better understand variadic functions and string formatting. This function is now part of my personal library (libft) and can be reused in future C projects.

## Acknowledgments:
This project is part of the 42 curriculum and is designed to teach the fundamentals of threading, synchronization, and process management. Special thanks to the 42 network for the learning opportunity.
