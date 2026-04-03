# 📘 stdC — C Programming Learning Repository

A personal reference repository covering core C programming concepts from fundamentals to data structures and algorithms. Each folder is a topic, and each file is a focused example.

---

## 📂 Repository Structure

```
stdC/
├── basics/          → Variables, loops, arrays, functions, recursion
├── strings/         → String storage, traversal, built-in functions
├── oop/             → Pointers (single, double, arithmetic, arrays)
├── dma/             → Dynamic Memory Allocation (malloc, calloc, realloc, free)
├── struct/          → Structures (definition, arrays, pointers, typedef)
├── miscs/           → Unions, static/global variables, function pointers, goto
├── fileio/          → File I/O (read, write, append, fgetc, fputc)
├── preproccessing/  → Preprocessor directives (#include, #define, macros)
├── dsalgo/          → Data Structures (Linked List)
└── smallprojects/   → Mini programs (fibonacci, patterns, guess-the-number…)
```

---

## 1. 🧱 Basics (`basics/`)

### Variables (`variable.c`)

- Declare and initialize variables of different data types (`int`, `float`, `char`).
- Format specifiers: `%d`, `%f`, `%c`, `%s`.

### User Input (`userinput.c`)

- `scanf()` reads user input from stdin.
- Always pass the **address** of the variable: `scanf("%d", &x)`.

### Conditionals (`if_else.c`, `switch_case.c`)

- `if / else if / else` for branching logic.
- `switch` is cleaner when matching one variable to many constant values.

### Loops (`for_loop.c`, `while_loop.c`)

- `for` loop: best when iteration count is known.
- `while` loop: best when condition is unknown ahead of time.

### Arrays (`arrays.c`, `arrays_loop.c`, `multi_dim_arr.c`)

- Fixed-size collection of elements of the same type.
- Index starts at **0**: `arr[0]` is the first element.
- Multi-dimensional arrays: `int grid[3][3]` — row × column.

### Functions (`functions.c`)

```c
// Two types: library (printf, rand) and user-defined
int sum(int a, int b);   // prototype (declare before main)

int sum(int a, int b) {  // definition
    return a + b;
}
```

**Key rules:**

- Declare a prototype before `main()`.
- A function can return **only one value**.
- Changes to a parameter inside a function do **not** affect the caller (pass-by-value).

### Recursion (`recursion.c`)

```c
int factorial(int x) {
    if (x == 1 || x == 0) return 1;   // base case — stops recursion
    return x * factorial(x - 1);       // recursive call
}
```

- A function calling itself.
- **Base case** is mandatory — without it, you get infinite recursion → stack overflow.
- Useful for: factorial, Fibonacci, tree traversal.

### Practice Problems (`basics/problems/`)

| File          | Topic                            |
| ------------- | -------------------------------- |
| `prob1.c`     | General problem                  |
| `revArr.c`    | Reverse an array                 |
| `tableOf.c`   | Multiplication table             |
| `multi_arr.c` | Multi-dimensional array practice |

---

## 2. 🔤 Strings (`strings/`)

Strings in C are **arrays of characters** terminated by `'\0'`.

```c
char str[] = "Kalpit";   // stored as: K a l p i t \0
char *ptr = str;
while (*ptr != '\0') { printf("%c", *ptr); ptr++; }
```

- A `char[]` array **cannot** be re-assigned — use `strcpy()`.
- A `char *` pointer **can** be re-pointed: `name = "NewName";`

### Key string functions

| Function              | Purpose               | Header       |
| --------------------- | --------------------- | ------------ |
| `strlen(s)`           | Length of string      | `<string.h>` |
| `strcpy(dst, src)`    | Copy string           | `<string.h>` |
| `strcat(dst, src)`    | Concatenate strings   | `<string.h>` |
| `gets(s)` / `puts(s)` | Read/print whole line | `<stdio.h>`  |

### Files

| File               | What it covers                         |
| ------------------ | -------------------------------------- |
| `strings.c`        | String declaration & pointer traversal |
| `strlen.c`         | Manual length calculation              |
| `strcpycat.c`      | `strcpy` and `strcat` demos            |
| `str_slice.c`      | Extracting substrings                  |
| `str_char_input.c` | Reading character by character         |
| `gets_puts_str.c`  | `gets` / `puts` usage                  |

---

## 3. 🎯 Pointers (`oop/`)

A pointer **stores the memory address** of another variable.

```c
int a = 4;
int *p = &a;   // p holds the address of a
int **k = &p;  // k holds the address of p (double pointer)

printf("%d", *p);   // dereference: prints value at address → 4
```

| Symbol | Meaning                                      |
| ------ | -------------------------------------------- |
| `&x`   | Address of variable `x`                      |
| `*p`   | Value at the address stored in `p`           |
| `**k`  | Value at address of address (double pointer) |

### Files

| File                   | Topic                                    |
| ---------------------- | ---------------------------------------- |
| `pointers.c`           | Single and double pointer basics         |
| `pointer_arithmatic.c` | Incrementing pointers through arrays     |
| `pointer_array.c`      | Array name as a pointer                  |
| `ptr_arr_scanf.c`      | Reading arrays via pointers              |
| `arr_func_ptr.c`       | Passing arrays to functions via pointers |

---

## 4. 🧠 Dynamic Memory Allocation (`dma/`)

C arrays have a fixed size at compile-time. **DMA** lets you allocate memory at runtime (on the **heap**).

### The 4 Functions

```c
#include <stdlib.h>

// malloc — allocate uninitialized memory
int *arr = (int *)malloc(5 * sizeof(int));

// calloc — allocate zero-initialized memory
float *arr2 = (float *)calloc(5, sizeof(float));

// realloc — resize previously allocated block
arr = (int *)realloc(arr, 10 * sizeof(int));

// free — release memory (always do this!)
free(arr);
```

| Function  | Initializes to 0? | Signature                |
| --------- | ----------------- | ------------------------ |
| `malloc`  | ❌                | `malloc(bytes)`          |
| `calloc`  | ✅                | `calloc(count, size)`    |
| `realloc` | ❌                | `realloc(ptr, newBytes)` |
| `free`    | —                 | `free(ptr)`              |

> ⚠️ **Always `free()`** what you allocated — C does not garbage-collect.  
> If allocation fails, the function returns `NULL`.

### Files

| File            | Topic                      |
| --------------- | -------------------------- |
| `info.c`        | Complete DMA concept notes |
| `malloc.c`      | `malloc` demo              |
| `calloc.c`      | `calloc` demo              |
| `realloc.c`     | `realloc` demo             |
| `free_malloc.c` | Proper `free` usage        |

---

## 5. 🏗️ Structures (`struct/`)

A **struct** groups different data types under one name — like a custom record.

```c
struct country {
    int population;
    float incomePerPerson;
    char countryCode[10];
};

struct country india;
india.population = 1400000000;        // dot (.) = member access operator
strcpy(india.countryCode, "IN");       // must use strcpy for char arrays

struct country usa = {331000000, 65000.0, "US"};  // inline init
```

### Files

| File               | Topic                              |
| ------------------ | ---------------------------------- |
| `struct.c`         | Basic struct definition and access |
| `struct_arr.c`     | Array of structs                   |
| `struct_input.c`   | Reading struct data from user      |
| `struct_func.c`    | Passing structs to functions       |
| `struct_ptr.c`     | Struct pointer (`->` operator)     |
| `struct_typedef.c` | `typedef struct` for cleaner names |

> **Tip:** Use `->` when accessing members via a pointer: `ptr->population`

---

## 6. 🧩 Miscellaneous (`miscs/`)

### Static & Global Variables (`staticvariables.c`)

```c
int global = 3;   // accessible everywhere

int func1() {
    static int a = 5;  // initialized ONCE; retains value across calls
    a++;
    return a;  // returns 6, then 7, then 8...
}
```

| Type   | Scope        | Lifetime         | Initialized      |
| ------ | ------------ | ---------------- | ---------------- |
| Local  | Inside block | Function call    | Every call       |
| Global | Entire file  | Program lifetime | Once (0 default) |
| Static | Inside block | Program lifetime | Once (0 default) |

### Unions (`unions.c`)

```c
union test {
    int a;
    float b;
    char d[34];   // all share the SAME memory block
};
```

- All members share **one memory location** (size = largest member).
- Only **one member is valid at a time** — writing to one corrupts others.
- Use case: memory-efficient storage when only one field is active at a time.

### Function Pointers (`function_pointers.c`)

```c
int sum(int a, int b) { return a + b; }

int (*fPtr)(int, int);   // declare function pointer
fPtr = &sum;             // point to function
int result = (*fPtr)(4, 6);  // call through pointer → 10
```

- Useful for **callbacks** and strategy patterns.
- Syntax: `returnType (*pointerName)(paramTypes)`

### Callback Functions (`callback_function.c`)

- A function passed as an argument to another function.
- Enables flexible, pluggable logic.

### `goto` Statement (`gotostatment.c`)

- Jumps to a labelled line in code.
- **Avoid in most cases** — makes code hard to follow. Useful only for breaking out of nested loops.

---

## 7. 📁 File I/O (`fileio/`)

Files are accessed through a `FILE *` pointer.

```c
FILE *ptr = fopen("file.txt", "r");  // open for reading
if (ptr == NULL) { /* handle error */ }
fclose(ptr);  // always close the file
```

### File Modes

| Mode            | Meaning                            |
| --------------- | ---------------------------------- |
| `"r"`           | Read (error if file doesn't exist) |
| `"w"`           | Write (creates or overwrites file) |
| `"a"`           | Append (creates if not exists)     |
| `"rb"` / `"wb"` | Binary read/write                  |

### Key Functions

| Function            | Purpose              |
| ------------------- | -------------------- |
| `fopen(path, mode)` | Open a file          |
| `fclose(fp)`        | Close a file         |
| `fprintf(fp, ...)`  | Write formatted text |
| `fscanf(fp, ...)`   | Read formatted text  |
| `fgetc(fp)`         | Read one character   |
| `fputc(c, fp)`      | Write one character  |

### Files

| File                 | Topic                     |
| -------------------- | ------------------------- |
| `fileio.c`           | File modes overview       |
| `file_write.c`       | Writing to a file         |
| `file_read.c`        | Reading from a file       |
| `file_check.c`       | Checking if a file exists |
| `fgetc_file_read.c`  | Reading char by char      |
| `file_fgetc_fputc.c` | Copy file char by char    |

---

## 8. ⚙️ Preprocessing (`preproccessing/`)

Preprocessor directives run **before compilation** and start with `#`.

### `#include`

```c
#include <stdio.h>   // system header — looks in system directories
#include "info.c"    // local file — looks in current directory
```

### `#define`

```c
#define PI 3.14             // constant — text substitution
#define SQUARE(r) r*r       // macro — acts like an inline function

float area = PI * SQUARE(5);  // becomes: 3.14 * 5*5
```

### Conditional Compilation (for debugging)

```c
#define DEBUG
#ifdef DEBUG
    printf("debug info\n");
#endif
#undef DEBUG
```

### Files

| File                  | Topic                                 |
| --------------------- | ------------------------------------- |
| `define_include.c`    | `#include` and `#define` with macros  |
| `macros_directives.c` | More macro examples                   |
| `info.c`              | Helper included by `define_include.c` |

---

## 9. 🔗 Data Structures & Algorithms (`dsalgo/`)

### Linked List (`linkedlist.c`)

A linked list is a chain of **nodes** where each node holds data and a pointer to the next node.

```c
struct Node {
    int data;
    struct Node *nextx;  // pointer to next node
};
```

**Traversal:**

```c
void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->nextx;   // advance to next node
    }
}
```

**Insert at front:**

```c
struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->nextx = head;  // point new node to old head
    return newNode;         // new node becomes head
}
```

| Operation       | Time Complexity |
| --------------- | --------------- |
| Traversal       | O(n)            |
| Insert at front | O(1)            |
| Insert at end   | O(n)            |
| Search          | O(n)            |

> Linked list nodes live on the **heap** (via `malloc`). Unlike arrays, they are not contiguous in memory.

---

## 10. 🚀 Small Projects (`smallprojects/`)

| File                | Description                                       |
| ------------------- | ------------------------------------------------- |
| `fibonacci.c`       | Nth Fibonacci number using recursion              |
| `findthegreatest.c` | Find greatest among N numbers                     |
| `guessthenumber.c`  | Number guessing game                              |
| `leapyear.c`        | Check if a year is a leap year                    |
| `lowercaseornot.c`  | Check if character is lowercase                   |
| `patterns.c`        | Print star/number patterns                        |
| `snackwatergun.c`   | Snake, Water, Gun game (like rock-paper-scissors) |
| `sumof10numbers.c`  | Sum of first 10 numbers                           |

---

## 🔑 Quick Reference Cheatsheet

### Data Types & Format Specifiers

| Type     | Size    | Format       |
| -------- | ------- | ------------ |
| `int`    | 4 bytes | `%d`         |
| `float`  | 4 bytes | `%f`         |
| `double` | 8 bytes | `%lf`        |
| `char`   | 1 byte  | `%c`         |
| `char[]` | n bytes | `%s`         |
| pointer  | 8 bytes | `%p` or `%u` |

### Common Headers

| Header       | Provides                                              |
| ------------ | ----------------------------------------------------- |
| `<stdio.h>`  | `printf`, `scanf`, `FILE`, `fopen`                    |
| `<stdlib.h>` | `malloc`, `calloc`, `realloc`, `free`, `rand`, `exit` |
| `<string.h>` | `strlen`, `strcpy`, `strcat`, `strcmp`                |
| `<math.h>`   | `pow`, `sqrt`, `abs`                                  |

### Memory Layout (simplified)

```
┌─────────────┐
│    Stack    │ ← local variables, function calls
├─────────────┤
│    Heap     │ ← malloc / calloc / realloc
├─────────────┤
│ Data Segment│ ← global & static variables
├─────────────┤
│    Code     │ ← your compiled program instructions
└─────────────┘
```

---

## 🛠️ How to Compile & Run

```bash
# Compile a single file
gcc filename.c -o output

# Compile with math library
gcc filename.c -o output -lm

# Run
./output
```

---

## 📈 Learning Path

```
variables → loops → arrays → functions → recursion
     ↓
strings → pointers → DMA → struct/union
     ↓
file I/O → preprocessor → function pointers
     ↓
data structures (linked list → stacks → queues → trees)
```

---
