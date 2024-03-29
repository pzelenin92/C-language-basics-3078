﻿/*
Вывести сначала чётные элементы массива, а затем нечётные.

Входные данные:
Первая строка число N,(N>0) -- длина массива. Длина массива не более 
100 элементов. Вторая строка NN  натуральных чисел, записанных через 
пробел

Выходные данные:
Элементы массива, упорядоченные соответствующим образом. Сначала чётные 
элементы массива в том порядке, как они встречаются в массиве, затем 
нечётные элементы массива в том порядке, как они встречаются в массиве.

Sample Input 1:
5
3 10 22 75 12

Sample Output 1:
10 22 12 3 75

Sample Input 2:
10
10 3 75 22 12 11 1 2 4 6

Sample Output 2:
10 22 12 2 4 6 3 75 11 1

*/


#include <stdio.h>


int task_8_1_3(void) {
    int a, b;
    int c;
    int j;

    scanf_s("%d", &a);
    int arr[100] = { 0 };

    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &b);
        arr[i] = b;
    }

    for (int i = 0; i<a; i++)
    {
        if (arr[i] % 2 == 0)
        {   
            j = i;
            while (arr[j-1] %2 != 0 && j-1 >= 0)
            {
                c = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = c;
                j--;
            }
        }

    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}