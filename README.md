# ft_printf

This repository contains my custom implementation of the `printf` function in C.

## Description

The `ft_printf` function replicates the behavior of the standard `printf` function, allowing formatted output to the standard output stream. This project is implemented in C and follows the conventions and functionality of the standard `printf`.

## Features

- Supports various format specifiers, including:
  - `%c` for characters
  - `%s` for strings
  - `%d` and `%i` for integers
  - `%u` for unsigned integers
  - `%x` and `%X` for hexadecimal numbers
  - `%p` for pointers
  - `%%` for the percent sign

## Installation

To compile the `ft_printf` function, you can use the provided Makefile. Run the following command:

```sh
make
```

This will generate the `libftprintf.a` library, which you can link with your projects.

## Files

- `ft_printf.c`: Core implementation of the `ft_printf` function.
- `ft_printf.h`: Header file containing function prototypes and macros.
- `Makefile`: Script to compile the library and clean up object files.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
