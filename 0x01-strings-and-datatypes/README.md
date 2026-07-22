## Strings
"Strings" are a set of words, much like a phrase (i.e. "Bonjour, tout le monde!" or "Hello, world!").

Declaring them requires library `stdio.h`, which is a **St**an**d**ard **I**nput **O**utput library that contains functions that allow for input and output from the program. From the previous C scripts, we can identify that this library is loaded at the beginning of the script.
```c
# include <stdio.h>
``` 

We can use several parameters to print a text/phrase along with examples, such as:
- `puts()`: The basic way to print to the terminal, often followed by a newline.
  ```c
  puts("Example string");
  ```
- `printf()`: More "powerful" than `puts`, which gives us the ability to print escape sequences, as well as conversion characters to declare variables.
  ```c
  printf("Example string\n");
  ```

You can view, compile-and-run, or rewrite my example script of [`strings.c`](0x01-strings-and-datatypes/strings.c) that uses both functions above.

### Handy tables for strings

Below are tables based on the slides from [C-Tasks-1](https://github.com/interruptlabs/VRDP-C-Python/blob/main/C-Tasks-1.pdf) from InterruptLabs's VRDP Training Program.
| **Escape sequence syntaxes** | **Command output**           |
| ---------------------------- | ---------------------------- |
| `\a`                         | alert/bell                   |
| `\b`                         | non-erasing backspace        |
| `\f`                         | form feed - clear the screen |
| `\n`                         | newline                      |
| `\r`                         | carriage return              |
| `\t`                         | tab                          |
| `\v`                         | vertical tab                 |
| `\'`                         | single quote                 |
| `\"`                         | double quote                 |
| `\ooo`                       | octal value                  |
| `\xhh`                       | hex calue                    |
- Normally, we use `\n` to add a newline in each texts/phrases.
- We can add tabs or any escape sequences depending on the contexts of each programs/scripts.

| **Conversion characters**    | **Value held**               |
| ---------------------------- | ---------------------------- |
| `%c`                         | character                    |
| `%s`                         | string                       |
| `%d`                         | decimal integer              |
| `%f`                         | floating point               |
| `%o`                         | octal                        |
| `%u`                         | unsigned integer             |
| `%p`                         | pointer                      |
| `%%`                         | percent sign                 |
| `%x`                         | hexadecimal                  |
- We often use these characters to declare variables, whether we define it or required variables for the data input (i.e. `scanf()`), which I will explain it in later chapters.

### Declaring strings in array

I will give you a brief description of an _array_, which is a list of _n_ elements (numbers) of a specific data type.
- Suppose there are 6 index of an array. The first index starts at `0`, then the final index ends at `5`.
    ```
    char array[6] = "Hemlo\n";

    |-------------|-------------|-------------|-------------|-------------|-------------|
    |      H      |      e      |      m      |      l      |      o      |      \n     |
    |-------------|-------------|-------------|-------------|-------------|-------------|
       1st index     2nd index     3rd index     4th index     5th index     6th index

    ```
- Each of indexes might contain adjacent characters located in memory.
- If an array has 20 indexes, it also means there are 20 adjacent characters as well.

Once the array has been declared, you cannot simply increase or decrease the indexes, so make sure your array have enough spaces to store elements depending on what variable you are already set up.

Declaring strings with arrays can be done within two ways:
- [`char_array.c`](0x01-strings-and-datatypes/char_array.c): Defining each characters in each array, one-by-one.
  - Notice the last character of the array is a `0`, which is also known as a null byte.
  - The null byte is used as a delimiter character to stop operations right at the null byte.
  - The rest of extra bytes are _garbages_ and it will be ignored.
- [`char_array2.c`](0x01-strings-and-datatypes/char_array2.c): The script uses `strcpy` function to _copy_ the string into the `str_a` array without declaring it one-by-one.
  - The syntax of the used function is `strcpy(destination, source);`

## Data types

In most programming languages, including C, declaring variables are required to specify variables that might be working in some functions.

In C, we can use `sizeof()` function to declare how many bytes are stored in each data types.
- I.e. `sizeof(char);`

### Common data types

The most common data types, which are often used in some programs, are the following:
- `int`: Stores four numbers within **4 bytes** in size.
	`int number, age = 27;`
- `float`: Stores decimal/non-whole numbers within the **same bytes** as `int`.
	`float decimal = 8.34;`
- `char`: Stores characters within **1 byte** in size.
  `char letter = 'p';`
- `_Bool`: Stores boolean values (True (`1`)/False (`0`)) within the **same bytes** as `char`.
  `_Bool daccord = 1;`

> 📝 Note:
> Strings use an array of characters to represent strings, with the following example:
> ```c
> char a_string[] = "Bonjour, tout le monde!\n";
> ```

### Advanced data types

There are other data type sizes that correlate with the ranges, especially for `int` data types.
- `unsigned int` (4 bytes): Unsigned integer type between the range of 0 to 65535.
- `short int` (2 bytes): Short signed integer type between the range of −32767 to 32767.
- `long int` (4 bytes): Long signed integer type between the range of −2147483647 to 2147483647.
- `long long int` (8 bytes): Largest range of the long signed integer, which are between of −9223372036854775807 to 9223372036854775807.

> 📝 Note:
> Both signed and unsigned integers are four bytes in size on the x86 architecture.
