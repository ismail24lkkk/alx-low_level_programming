#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);
#endif
==========================================
MAIN.C CODE
#include "main.h"
/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
 int i;
 i = 98;
 positive_or_negative(i);
 return (0);
}

