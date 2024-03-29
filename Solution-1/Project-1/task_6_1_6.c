﻿/*
В третьем уроке был приведён код программы,
которая подсчитывает уровень базового обмена веществ п
о формуле Миффлина-Сан Жеора исходя из данных, которые вы введёте 
(возраст, рост и вес). Модифицируйте данную программу так, чтобы 
она дополнительно принимала и учитывала сведения о половой 
принадлежности человека.

Входные данные:
Один символ и три целых числа.
Символ f (female) или m(male), обозначающий половую принадлежность.
Первое число a -- целое, возраст человека
Второе число h -- целое, рост человека в сантиметрах
Третье число w -- целое, вес человека в килограммах.

Выходные данные:
Вывести уровень базового обмена веществ в таблице, оформленной 
в соответствии примером ниже. Если первый аргумент не является
символом f или m, то необходимо вывести одно слово ERROR!

Sample Input 1:
m 25 178 67

Sample Output 1:
|  BMR  |
|1662.50|

Sample Input 2:
d 22 160 49

Sample Output 2:
ERROR!



*/

#include <stdio.h>

int task_6_1_6(void) {
    char fm;
    int age, height, weight;
    double out;

    scanf_s("%c ", &fm);
    scanf_s("%i %i %i", &age, &height, &weight);

    out = 0.0;

    switch (fm) {

    case 'f': 
        printf("|  BMR  |\n");
        printf("|%6.2f|", 10 * weight + 6.25 * height - 5 * age - 161); break;
    case 'm':
        printf("|  BMR  |\n");
        printf("|%6.2f|",10 * weight + 6.25 * height - 5 * age + 5); break;
    default: printf("ERROR!"); break;

    }

    return 0;
}