﻿#include "tasks.h"

/*	Task 03. Amount of Days [количество дней]
 *
 *	Дан порядковый номер месяца и номер года.
 *	Определите количество дней в заданном месяце соответствующего года.
 *
 *	Примечание
 *	1) Постарайтесь реализовать основной алгоритм так,
 *	чтобы в нём было минимальное количество условных конструкций (можно
 *	обойтись двумя вложенными друг в друга условными коснтрукциями).
 *	2) Не забудьте про "защиту от дурака": если номер месяца некорректен,
 *	то нужно возвратить 0. Год может быть отрицательным (до нашей эры).
 *
 *	Формат входных данных [input]
 *	На вход функция принимает два целых числа типа int.
 *
 *	Формат выходных данных [output]
 *	Функция должна возвращать количество дней в заданном месяце
 *	или ноль (при неверных данных).
 *
 *	[ input 1]: 4 2023
 *	[output 1]: 30
 *
 *	[ input 2]: 5 2023
 *	[output 2]: 31
 *
 *	[ input 3]: 2 1900
 *	[output 3]: 28
 *
 *	[ input 4]: 2 2000
 *	[output 4]: 29
 *
 *	[ input 5]: -7 2023
 *	[output 5]: 0
 *
 *	[ input 6]: 0 2023
 *	[output 6]: 0
 *
 *	[ input 7]: 13 2023
 *	[output 7]: 0
 */

int task03(int month, int year) {
	if (month <= 0 || month > 12) {
		return 0;
	}

	if (month == 1 || month == 3 || month == 5 || month == 7
		|| month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else {
		if (month == 2) {
			return 28 + ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
		}
		else {
			return 30;
		}
	}
	
}