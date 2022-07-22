#include <stdio.h>

inline int str_len(char *word)
{
    int index = 0;
    for( ; word[index] != '\0'; index++);
    return index;
}

int main()
{
    char *hello = "hello";
    int count = str_len(hello);
    printf("%d\n", count);

    return 0;
}
