# Custom printf
## Objectives
> Create a custom mini-version of the `printf` function found in the `stdio.h` library in the C programming language.
This function should permit
- Printing of any number of arguments given to the stdout, the standard output stream
- Handling of conversion specifiers: `%c`, `%s`, `%`, `%d`, and `%i`

## Synopsis
> This repository contains the necessary code to run and execute our custom `_printf` function. Our simple `_printf` can handle conversion specifiers: `c`, `s`, `%`, `d`, and `i`. It does not support flag characters, field width, precision, or lenght modifiers.

## Files Given:
```
man_3_printf ----------------------- Custom manpage for custom _printf function
_printf.c -------------------------- Contains custom printf function
main.h ----------------------------- Contains a struct & protoypes of functions used in all files
specfunctions.c -------------------- Contains functions that handle the c, s, %, d, & i conversion specifiers
```

## Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.3.0
- Style guidelines: [Betty Style](https://github.com/holbertonschool/Betty/wiki)

## Usage
When using `_printf`, you can send a formatted string to the standard output. This string can display formatted variables (conversion specifiers) & special control characters. Here is an example of implementation:
```
int main(void)
{
	_printf("%c%s %d rules\n", "C", "ohort", 19);
	return (0);
}
```
Output:
```
Cohort 19 rules
```

## Contributors
Jason Beagle & Foster Clark
