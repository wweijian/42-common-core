# Notes for variadic arguments functions

## <stdarg.h>

*void* va_start(va_list ap, last);
*type* va_arg(va_list ap, type);
*void* va_end(va_list ap);
*void* va_copy(va_list dest, va_list src);

[va_start/va_end/va_arg/va_copy](https://linux.die.net/man/3/va_start) 

### type va_arg(va_list ap, type);
The va_arg() macro expands to an expression that has *the type and value of the next argument in the call*.
The argument ap is the va_list ap initialized by va_start()
Each call to va_arg() modifies ap so that the next call returns the next argument

### va_start()

The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first.

The argument last is the name of the *last argument before the variable argument list*, that is, the last argument of which the calling function knows the type.

### va_end()

Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function. *After the call va_end(ap) the variable ap is undefined.* Multiple traversals of the list, each bracketed by va_start() and va_end() are possible. va_end() may be a macro or a function.

### va_copy()

The va_copy() macro copies the (previously initialized) variable argument list src to dest. The behavior is as if va_start() were applied to dest with the same last argument, followed by the same number of va_arg() invocations that was used to reach the current state of src.