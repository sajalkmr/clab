#include <stdio.h>

// Prototypes for the user-defined functions
int str_length(char[]);
int str_compare(char[], char[]);
void str_concat(char[], char[]);

int main()
{
    // Declare the variables
    char str[50];
    char str1[50], str2[50];
    char str_des[100], str_src[50];
    int length, comp_res;

    // Accept the string from the user to find the length
    printf("Enter a string: ");
    scanf("%s", str);

    // Invoke the function to find the length of the string
    length = str_length(str);

    // Print the length of the string
    printf("The length of %s is %d\n", str, length);

    // Accept two strings to compare
    printf("Enter two strings for string compare: ");
    scanf("%s %s", str1, str2);

    // Invoke string compare function to compare the str1 and str2 strings
    comp_res = str_compare(str1, str2);

    if (comp_res < 0)
    {
        printf("String \"%s\" is less than string \"%s\"\n", str1, str2);
    }
    else if (comp_res == 0)
    {
        printf("String \"%s\" is same as string \"%s\"\n", str1, str2);
    }
    else
    {
        printf("String \"%s\" is greater than string \"%s\"\n", str1, str2);
    }

    // Accept two strings for string concatenation
    printf("Enter two strings for string concatenation: ");
    scanf("%s %s", str_des, str_src);

    // Invoke string concatenation function
    str_concat(str_des, str_src);

    // Print the concatenated string
    printf("The string after concatenation is \"%s\"\n", str_des);

    return 0;
}

int str_length(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;
    return i;
}

int str_compare(char s1[], char s2[])
{
    int i, j;
    for (i = 0, j = 0; (s1[i] != '\0' && s2[j] != '\0'); i++, j++)
    {
        if (s1[i] != s2[j])
        {
            return (s1[i] - s2[j]);
        }
    }

    if (s1[i] == '\0' && s2[j] == '\0')
    {
        return 0;
    }
    else if (s1[i] == '\0' || s2[i] == '\0')
    {
        return (s1[i] - s2[i]);
    }
}

void str_concat(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0'; i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}