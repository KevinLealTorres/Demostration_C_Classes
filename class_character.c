#pragma once

//Class' Methods
    int str_len(char *word)
    {
        int index = 0;
        while(word[index] != '\0'){ index++; }
        return index;
    }


    struct class
    {
    // Atributtes
        int     age, level, health;
        char    *name;

    // Methods
        int     (*str_len)(char *word);

    };  typedef struct class class;


    class *character(class *this, char *name)
    {
        this = malloc(sizeof(*this) * str_len(name));
        this->name = name;
        this->str_len = &str_len;

        return this;
    }