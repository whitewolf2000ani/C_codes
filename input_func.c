#include <stdio.h>
#inlcude < stdlib.h>
int input(char str[], int n);

int main()
{
    char str[100];
    int size;
    scanf("%d", &size);
    // Get char is used in order to consume the newline character in the input buffer which is being picked up by the getchar() function.
    getchar();
    int n = input(str, size);
    printf("%d %s", n, str);
    return 0;
}

int input(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        else
        {
            str[i] = '\0';
        }
    }
    return i;
}