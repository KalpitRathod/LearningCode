/*
FILE pointer

The "FILE" pointer is a structure which needs to be created for opening the file.
A file pointer is a pointer to this structure if the file.
FILE pointer is needed for communication between the file and the program.

File opening modes in C
C offers the programmers to select a mode for opening a file.
Following modes are pimarily used in C File I/O
"r"->open for reading (if file not exists returns NULL)
"rb"->open for reading in binary (if file not exists returns NULL)
"w"->open for writing (if file exists contents will be overwritten)
"wb"->open for writing (if file exists contents will be overwritten)
"a"->open for append (if file does not exists it will be created)


Type of Files
1. txt files (.txt, .c)
2. Binary files (.jpg, .pdf)
*/

#include <stdio.h>

int main() {
    FILE *ptr;
    ptr =  fopen("whatsup.txt", "r"); //for reading
    // ptr =  fopen("whatsup.txt", "w"); //for writing
    return 0;
}