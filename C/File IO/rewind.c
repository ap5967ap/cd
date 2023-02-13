// C program to implement
// rewind()
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
    char str[200];
    FILE* ptr;

    ptr = fopen("Hello.txt", "w+");
    fputs("Welcome to GeeksforGeeks", ptr);

    fclose(ptr);

    ptr = fopen("Hello.txt", "r+");
    if(fgets(str, 200, ptr) != NULL)
    {
        puts(str);
    }
    rewind(ptr);
    //rewind() function sets the file pointer to the beginning of the file. 
    if(fgets(str, 200, ptr) != NULL)
    {
        puts(str);
    }

    fclose(ptr);
return 0;
}
/*
RETURN VALUE: 
    fopen():

                    a FILE * if it succeeds.

                    NULL if it failed to open, had and error.

    fclose():

                    0 if success

                    EOF otherwise, ifit had an error.

    fscanf():

                    number of conversions

                    EOF if end of file reached or error

    fprintf():

                    number of characers printed

                    something -ve if it had an error
*/
//read
/*
https://www.geeksforgeeks.org/c-file-io/
https://www.geeksforgeeks.org/basics-file-handling-c/
https://www.geeksforgeeks.org/c-program-to-read-contents-of-whole-file/
https://www.geeksforgeeks.org/opening-modes-in-standard-i-o-in-c-c-with-examples/
https://www.geeksforgeeks.org/c-program-merge-contents-two-files-third-file/
https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/
https://www.geeksforgeeks.org/scanf-and-fscanf-in-c/
*/
