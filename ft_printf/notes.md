# Notes for variadic arguments functions

## <printf>

[man printf](https://linux.die.net/man/3/printf)

int printf(const char *format, ...);

### The flag characters

The character % is followed by zero or more of the following flags:
In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier
*Flags > field width > precision > length modifier*

#### #
The value should be converted to an "alternate form". 

*For x and X conversions*, a nonzero result has the string "0x" (or "0X" for X conversions) prepended to it.

[Not relevant] For a, A, e, E, f, F, g, and G conversions, the result will always contain a decimal point, even if no digits follow it (normally, a decimal point appears in the results of those conversions only if a digit follows). For g and G conversions, trailing zeros are not removed from the result as they would otherwise be.

*For other conversions, the result is undefined.*

#### 0

*The value should be zero padded.* 

For d, i, o, u, x, X, a, A, e, E, f, F, g, and G conversions, *the converted value is padded on the left* with zeros rather than blanks. 
*If the 0 and - flags both appear,* the 0 flag is ignored. 
*If a precision is given with a numeric conversion (d, i, o, u, x, and X)*, the 0 flag is ignored. For other conversions, the behavior is undefined.

#### -

The converted value is to be left adjusted on the field boundary. (The default is right justification.) Except for n conversions, the converted value is padded on the right with blanks, rather than on the left with blanks or zeros. A - overrides a 0 if both are given.

#### ' '

(a space) A blank should be left before a positive number (or empty string) produced by a signed conversion.

*When used with signed conversions (%d, %i, %f, %e, %g, etc.)*

#### +

*A sign (+ or -) should always be placed before a number produced by a signed conversion.* By default a sign is used only for negative numbers. A + overrides a space if both are used.

### The field width

An optional decimal digit string (with nonzero first digit) specifying a minimum field width. If the converted value has fewer characters than the field width, it will be padded with spaces on the left (or right, if the left-adjustment flag has been given). Instead of a decimal digit string one may write "*" or "*m$" (for some decimal integer m) to specify that the field width is given in the next argument, or in the m-th argument, respectively, which must be of type int. A negative field width is taken as a '-' flag followed by a positive field width. In no case does a nonexistent or small field width cause truncation of a field; if the result of a conversion is wider than the field width, the field is expanded to contain the conversion result.

number of character output supersedes field width

### The precision

An optional precision, in the form of a period ('.') *followed by an optional decimal digit string*. *Instead of a decimal digit string one may write "*" or " *m$" (for some decimal integer m) to specify that the precision is given in the next argument, or in the m-th argument, respectively, which must be of type int.* If the precision is given as just '.', or the precision is negative, the precision is taken to be zero. This gives the minimum number of digits to appear for d, i, o, u, x, and X conversions, the number of digits to appear after the radix character for a, A, e, E, f, and F conversions, the maximum number of significant digits for g and G conversions, or the maximum number of characters to be printed from a string for s and S conversions

Think of it as: "Always use at least this many digits. Add leading zeroes if needed.

Precision supersedes fieldwidth

## <stdarg.h>

*void* va_start(va_list ap, last);
*type* va_arg(va_list ap, type);
*void* va_end(va_list ap);
*void* va_copy(va_list dest, va_list src);

[va_start/va_end/va_arg/va_copy](https://linux.die.net/man/3/va_start) 

### type va_arg(va_list ap, type);
The va_arg() macro expands to an expression that has *the type and value of the next argument in the call*.
The argument ap is the va_list ap initialized by va_start()
*Each call to va_arg() modifies ap so that the next call returns the next argument*

### va_start()

The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first.

The argument last is the name of the *last argument before the variable argument list*, that is, the last argument of which the calling function knows the type.

### va_end()

Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function. *After the call va_end(ap) the variable ap is undefined.* Multiple traversals of the list, each bracketed by va_start() and va_end() are possible. va_end() may be a macro or a function.

### va_copy()

The va_copy() macro copies the (previously initialized) variable argument list src to dest. The behavior is as if va_start() were applied to dest with the same last argument, followed by the same number of va_arg() invocations that was used to reach the current state of src.

## Pseudocode

1. Accept a format string and variable number of arguments
2. Initialize output buffer
3. Parse through the format string character by character
		For each character:
			a. If it's a regular character (not '%'), add it to the output buffer
			b. If it's '%', look at the next character to determine formatting:
				Parse any flags, width, precision specifications
				Based on the format specifier (d, s, f, etc.), retrieve the appropriate argument
				Convert the argument to string representation according to the format
				Add the formatted string to the output buffer
5. Write the contents of the output buffer to stdout
6. Return the number of characters written

```
int = ft_printf("hello, %s and %s", name1, name2);

format = hello, %s and %s
args = name1, name2 

when (*format == %)
	print_arg(*(format + 1), args)		where args is at name1
read in the flags as we traverse
reach the specifier
print with specifier
return count

```

## Test Scenarios
```
Specifiers --> cspdiuxX%

printf("%")										//ending with %

```

## Miscellaneous Notes
- I want an implementation that does not use indexing as it limits the maximum amount of print area that is possible
	- but i will also need a way to travel the string

- x/X does not take %s values
main.c:46:39: error: format specifies type 'unsigned int' but the argument has type 'char *' [-Werror,-Wformat]
   46 |         printf("string: %X\ni: %X\nu: %X\n", string, i, u);
      |                         ~~                   ^~~~~~
      |                         %s

- ptr addresses are stored as numbers (unsigned long long)
	returned as a hexadecimal