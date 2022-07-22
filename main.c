#include <stdio.h>
#include "class_character.c"

int main()
{
    class *you = character(you, "kevin");
    you->age = 18;
    you->health = 100;
    you->level = 200;
    printf("you're %d\n", you->age);


    return 0;
}