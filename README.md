Team Project - Implementation Of The Standard Printf()
======================================================

Requirements
------------

### General

&bull; Allowed editors: vi, vim, emacs<br>
&bull; All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
&bull; All your files should end with a new line<br>
&bull; A README.md file, at the root of the folder of the project is mandatory<br>
&bull; Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
&bull; You are not allowed to use global variables<br>
&bull; No more than 5 functions per file<br>
&bull; In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples<br>
&bull; The prototypes of all your functions should be included in your header file called main.h<br>
&bull; Don’t forget to push your header file<br>
&bull; All your header files should be include guarded<br>
&bull; Note that we will not provide the _putchar function for this project<br>

### GitHub

There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

More Info
---------

### Authorised Functions and Macros

&bull; write (man 2 write)<br>
&bull; malloc (man 3 malloc)<br>
&bull; free (man 3 free)<br>
&bull; va_start (man 3 va_start)<br>
&bull; va_end (man 3 va_end)<br>
&bull; va_copy (man 3 va_copy)<br>
&bull; va_arg (man 3 va_arg)<br>

### Compilation

&bull; Your code will be compiled this way:<br>
'''
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c<br>
'''

&bull; As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)<br>
&bull; Our main files will include your main header file (main.h): #include main.h<br>
&bull; You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf