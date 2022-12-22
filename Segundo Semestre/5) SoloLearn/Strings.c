// A string in C is an array of characters that ends with a NULL character '\0'.
// A string declaration can be made in several ways, each with its own considerations.
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - convert string to upper case
strrev() - reverse string
strcmp() - compare two strings

String Input
Programs are often interactive, asking the user for input.
To retrieve a line of text or other string from the user, C provides the scanf(), gets(), and fgets() functions.
You can use scanf() to read input according to the format specifiers.
For example:

#include <stdio.h>

int main()
{
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);

    printf("\nHi, %s. Your age is %d", first_name, age);

    return 0;
}

When scanf() is used to read a string, there is no need for & to access the variable address because an array name acts as a pointer.
scanf() stops reading input when it reaches a space. To read a string with spaces, use the gets() function. It reads input until a terminating newline is reached (the Enter key is pressed).
For example:
#include <stdio.h>

int main()
{
    char full_name[50];
    printf("Enter your full name: ");
    gets(full_name);

    printf("\nHi, %s.", full_name);

    return 0;
}

A safer alternative to gets() is fgets(), which reads up to a specified number of characters.This approach helps prevent a buffer overflow, which happens when the string array isnt big enough for the typed text. For example:
#include <stdio.h>

int main()
{
    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, 50, stdin);

    printf("\nHi, %s", full_name);

    return 0;
}

The fgets() arguments are the string name, the number of characters to read, and a pointer to where you want to read the string from.
stdin means to read from the standard input, which is the keyboard.Another difference between gets and fgets is that the newline character is stored by fgets.

String Output


String output is handled with the fputs(), puts(), and printf() functions.
The fputs() requires the name of the string and a pointer to where you want to print the string. To print to the screen, use stdout which refers to the standard output.
For example:
#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);
  fputs(city, stdout);
  printf(" is a fun city.");

  return 0;
} 

The puts() function takes only a string argument and can also be used to display output. However, it adds a newline to output.
For example:
#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);

  puts(city);

  return 0;
} 

