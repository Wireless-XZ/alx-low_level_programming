# 0x0D. C - Preprocessor
## Resources
### Read or watch:
* [Understanding C program Compilation Process](https://alx-intranet.hbtn.io/rltoken/73Xp4zJlc-orfeEzmlYVDg)
* [Object-like Macros](https://alx-intranet.hbtn.io/rltoken/kaqIw352MSJ8xoi1xU09ZA)
* [Macro Arguments](https://alx-intranet.hbtn.io/rltoken/wcQZzunlgjepxExZFc2ORQ)
* [Pre Processor Directives in C](https://alx-intranet.hbtn.io/rltoken/S4zfCHzg82fUAxdt8_SaZQ)
* [The C Preprocessor](https://alx-intranet.hbtn.io/rltoken/G33GiOIZofiIN4Tx9_acbQ)
* [Standard Predefined Macros](https://alx-intranet.hbtn.io/rltoken/0OYhpL2cJfsIMBWhTuZsAA)
* [include guard](https://alx-intranet.hbtn.io/rltoken/oF2vgIZNePdU965jCEZLHA)
* [Common Predefined Macros](https://alx-intranet.hbtn.io/rltoken/ROl5xAMKX-JpenEqmf7FnQ)
## Additional Requirements
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
## TASKS
### 0. Object-like Macro
> Mandatory

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$
```
### 1. Pi
> Mandatory

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 
```
### 2. File name
> Mandatory

Write a program that prints the name of the file it was compiled from, followed by a new line.
* You are allowed to use the standard library
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
``` 
### 3. Function-like macro
> Mandatory

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
```
### 4. SUM
> Mandatory

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
```
