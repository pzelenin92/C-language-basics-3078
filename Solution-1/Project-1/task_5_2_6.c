﻿/*

Результатом операция сдвиг влево на десятичный разряд для целого числа 127127 будет число 12701270. Написать программу, которая осуществляет операцию сдвиг влево для целого трёхзначного числа kk.

Входные данные:
Целое трёхзначное число kk.

Выходные данные:
Число, полученное из числа kk сдвигом влево.

Sample Input:
505

Sample Output:
5050



*/

#include <stdio.h>

int task_5_2_6(void) {
	int k;
	int out;

	scanf_s("%i", &k);

	out = k * 10;

	printf("%i", out);

	return 0;
}