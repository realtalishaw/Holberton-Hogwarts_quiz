#!/bin/bash

#home screen for Holberton School Sorting Quiz

gcc holberton-sorting_quiz.c -o holberton-sorting_quiz
clear
toilet -f smblock --metal "Holberton School of Witchcraft and Wizardy"
echo -e "Sorting Quiz!\nWhich house do you belong to?"
sleep 2s
clear
./holberton-sorting_quiz
