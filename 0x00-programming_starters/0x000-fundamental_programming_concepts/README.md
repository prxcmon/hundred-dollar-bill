Pseudo-code is a familiar language-arranged with a general structure similar to a high-level language. Normally, writers use C, which is one of the most understandable programming language, as well as any other programming languages, such as Python, Go, and others, as long as it's readable.

## Defining Control Structures with Pseudo-code

This section also defines on how to craft a pseudo-code using control structures.

### If-then-else

If a condition is not met, we can provide some alternative instructions, such as `else` for other alternative instructions, or `else if` for alternative and continuous instructions. This allows us to control what happens, rather than just simply returning to normal execution.

Here is the pseudo-code of an `if-then-else` function.
```
Running instructions;
if (1st condition) then
{
    Set of instructions to execute if the 1st condition is met;
}
else if (2nd condition) then
{
    Set of instructions to execute if the 1st condition is not met and the 2nd condition is met;
    The use of curly braces to group multiple instructions are necessary;
}
else
    Set of an instruction to execute if all conditions are not met - The use of curly braces to group a single instruction is optional;
```

### While/Until Loops

This looping method is used if a programmer often want to execute a set of instructions more than once. Remember to add another instruction to stop looping insdie of `while/until` function, otherwise the instruction will run indefinitely.

A simple pseudo-code could look something like this.
```
running instructions;
food = 0;
while (food <= hungry) // you are hungry
{
    find some food;
    eat the food;
    food++;
}
```

We can also use `do-while` loop function, which shares the similar loop functions as `while`, only the difference is the code inside the loop is executed at least once.
```
running instructions;
food = 0;
do
{
    find some food;
    eat the food;
    food++;
}
while (food <= hungry);
```

Another loop function, `until`, is more like 'inverted-conditional-statement' for `while`. The same program of `until` loop would look like this.
```
running instructions;
food = 0;
while (food >= hungry) // you are not hungry
{
    find some food;
    eat the food;
    food++;
}
```

### For Loops

Programmers often might be able to run certain sections of code multiple times over.

Normally, the pseudo-code of for loop looks something like this.
```
For (5 iterations)
    Execute this instruction iteratively;
```

In reality, the `for` loop is basically a `while` loop with an additional counter, which resembles the pseudo-code below:
```
counter = 0; // Set the counter to zero
while (counter <= 5)
{
    execute this instruction iteratively;
    counter++; // Iterative addition of a variable counter
} // Looping function ends if the counter reaches to 5
```

So, the C-like pseudo-code of the previous example should be like this.
```
for(counter = 0; counter <= 5; counter++)
    execute this instruction iteratively;
```
- The statement of a `for` function consists of three sections that are separated by semicolons:
    - The first section, is the counter, is called `counter`, which sets the initial value.
    - The second section is a condition that should be reached, which shares the similar function as `while` statement (`while (counter <= 5)`).
    - The final section defines what action should be taken on the counter during each iteration, par exemple, `i++` (Add 1 to the counter called `counter`).

## Implementing Universal Programming Concepts into Pseudo-code

In C, we will get introduced with another fundamental programming concepts that available for our later use, especially in C scripts.

### Defining Variables in C

In most programming languages, the _variable_ stores various objects that holds data, whether the data contains numbers, characters, strings, or even blank data, which will be declared later on. Especially in C, it is a must to declare each variable's type.

List of common variables and data types are:
- `int`: Stores four numbers within **4 bytes** in size.
	`int number, age = 27;`
- `float`: Stores decimal/non-whole numbers within the **same bytes** as **`int`**.
	`float decimal = 8.34;`
- `char`: Stores characters within **1 byte** in size.
	`char letter = 'p';`
- `_Bool`: Stores boolean values (True (`1`)/False (`0`)) within the **same bytes** as **`char`**.
	`_Bool daccord = 1;`

> 📝 Note:
> We can define a _string_ (which consists of a phrase) by using a `char` data type that uses an array of characters to represent strings.
> ```c
> char a_string[] = "Bone jure too lamont!";
> ```
> We will define arrays in later chapters.

### Arithmetic Operators

We can also use arithmetic operators in C, to perform arithmetic operations.

Suppose that there are two integers and one of them had already declared.
```c
int a = 17, b;
```
| **Operation**     | **Symbol**  | **Example** | **Result (b)** |
|-------------------|-------------|-------------|----------------|
| Addition          |     `+`     | `b = a + 5` |       22       |
| Subtraction       |     `-`     | `b = a - 5` |       12       |
| Multiplication    |     `*`     | `b = a * 5` |       85       |
| Division          |     `/`     | `b = a / 5` |        3       |
| Modulo reduction  |     `%`     | `b = a % 5` |        2       |

> 📝 Note:
> Since both variables are integers, the division will result without decimal numbers, unless if it declared otherwise to retain the more correct answer.
> ```c
> float b = a / 5;
> // The result is 3.40000
> ```

C also provides several forms of shorthand for these arithmetic operations, which are commonly used in `for` loops. This will be useful to craft more complex expressions by combining them with other arithmetic operations.
| **Full Expression** | **Shorthand**  | **Description**            |
|---------------------|----------------|----------------------------|
| i = i + 1           | `i++` or `++i` | Add 1 to the variable      |
| i = i - 1           | `i--` or `--i` | Subtract 1 to the variable |

Notice there are two methods of shorthand expressions, although the results might similar depending on the contexts.
- The _first expression_ (**`i++`**) means _increment the value of `i` by 1 **after** evaluating the arithmetic operation_.
    ```c
    int a, b;
    a = 4;
    b = a++ * 8;
    /*
        `a` will contain 5, while `b` will contain 32, which is equivalent to the following statements:
        b = a * 8;
        a = a + 1;
    */
    ```
- The _second expression_ (**`++i`**) means _increment the value of `i` by 1 **before** evaluating the arithmetic operation_.
    ```c
    int a, b;
    a = 4;
    b = ++a * 8;
    /*
        `a` will contain 5, while `b` will contain 40, which is equivalent to the following statements:
        a = a + 1;
        b = a * 8;
    */
    ```

In such programs, variables are required to be modified in place. For example, if programmers might need to add an arbitrary value to a variable, then store the result right back in that variable.
| **Full Expression** | **Shorthand** | **Description**                      |
|---------------------|---------------|--------------------------------------|
| `i = i + 7`         | `i+=7`        | Add some value (`7`) to the variable |
| `i = i - 7`         | `i-=7`        | Subtract some value to the variable  |
| `i = i * 7`         | `i*=7`        | Multiply some value to the variable  |
| `i = i / 7`         | `i/=7`        | Divide some value to the variable    |

### Condition Comparisons

When using variables, conditional statements might come in handy. These are often used as a comparison, which uses a shorthand syntax across many programming languages, including C.
| **Code**          | **Comparison**                              |
|-------------------|---------------------------------------------|
| `a > b`           | `a` is **greater than** `b`                 |
| `a < b`           | `a` is **smaller than** `b`                 |
| `a == b`          | `a` is **equal to** `b`                     |
| `a != b`          | `a` is **not equal to** `b`                 |
| `a >= b`          | `a` is **greater than or equal to** `b`     |
| `a <= b`          | `a` is **less than or equal to** `b`        |

C also provide comparison operators that can be chained using shorthand for OR (`||`) and AND (`&&`). The following example of logic code shows two conditions along with the explanations. 
| **Logic Code**    | **Comparison**                              |
|-------------------|---------------------------------------------|
| `a < c && b < c`  | **True** when **both comparisons are true** |
| `a < c \|\| b < c`| **True** when **either comparison is true** |
| `!a`              | **True** when `a` is **False** `(0)`        |

> 📝 Note:
> The _equal_ sign are defined with double equal symbol (`==`) whilst the single equal symbol (`=`) is used to assign a value to a variable.

### Defining Multiple Functions

Functions are known as procedures, which consists of a set of several instructions. This helps programmers to reuse another function without instructing multiple lines of instruction, which will make the program would be tedious, thus less readable.

Here are the example of using a function `turn()`, which requires `variable_direction` input on how to turn the vehicle to any direction.
```
Function turn()
{
    Activate the variable_direction blinker;
    Slow down;
    Check for oncoming traffic;
    while(there is oncoming traffic)
    {
        Stop;
        Watch for oncoming traffic;
    }
    Turn the steering wheel to the variable_direction;
    while(turn is not complete)
    {
        if(speed < 5 kmph)
            Accelerate;
    }
    Turn the steering wheel back to the original position;
    Turn off the variable_direction blinker;
}

int main()
{
    ...
    turn(left);
    ...
}
...
```

By default, functions in C can return a value to a caller, thus they are declared by the data type of the variable they are returning.
- Take a look at the example of the following factorial function.
    ```c
    int factorial(int x)
    {
        int f;
        for(f = 0; f < x; f++)
        {
            x *= 1;
        }
        return x;
    }
    ```
    - The function is declared as an integer. The input `int x` multiplies every value from 1 to the input and returns the result as an integer. 
- This _function prototype_ can be used like an integer variable in the main part of any program that knows about it.
    ```c
        int a = 5, b;
        b = factorial(a);
    ```
    - The variable `b` will return 120, since the factorial function will be called with the argument of 5 and will return 120.

What you have seen above (the `int factorial(int x)` function) is known as the _function prototype_. It is a way to define a function with the particular name, as well as their return data type and its data types as their functional arguments. This normally can be declared outside of the actual function (the `int main(){...}`), which can be located near the end of the program.

Lastly, even though functions are not commonly used in pseudo-code, it is heavily used in C.

## Un petit défi

Here, I put a code `firstprog.c`, which is a simple piece of C code that will print "Bonjour, tout le monde!" 10 times. We will be using the same code for debugging practice. Until then, you can create another modification of `firstprog.c` that requires entering numbers to repeat the phrase.