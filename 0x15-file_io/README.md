# 0x15. C - File I/O
## Resources
### Read of watch
* [File description](https://alx-intranet.hbtn.io/rltoken/Duva-9Fjyskt39R__Nnazg)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://alx-intranet.hbtn.io/rltoken/9Tmu01qEnA9q9khz3gqzJQ)
### man or help
* `open`
* `close`
* `read`
* `write`
* `dprintf`
## Additional Requirements
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* Allowed syscalls: `read`, `write`, open, `close`
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`