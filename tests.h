#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = !task01(2023)
		&& task01(1984)
		&& task01(2000)
		&& task01(0)
		&& !task01(-100)

		&& task01(1600)
		&& task01(1704)
		&& task01(1808)
		&& task01(1912)
		&& task01(2124)
		&& task01(2248)
		&& task01(2352)

		&& !task01(3000)
		&& !task01(1700)
		&& !task01(1800)
		&& !task01(1900)
		&& !task01(2100)
		&& !task01(2200)
		&& !task01(2300)

		&& task01(-1600)
		&& task01(-1704)
		&& task01(-1808)
		&& task01(-1912)
		&& task01(-2124)
		&& task01(-2248)
		&& task01(-2352)

		&& !task01(-3000)
		&& !task01(-1700)
		&& !task01(-1800)
		&& !task01(-1900)
		&& !task01(-2100)
		&& !task01(-2200)
		&& !task01(-2300);

	cout << "Task 01 [The Leap Year]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(1, 2, 3) == 2
		&& task02(17, 23, 11) == 17
		&& task02(7, 7, 7) == 0
		&& task02(5, 7, 7) == 0

		&& task02(7, 5, 7) == 0
		&& task02(7, 7, 5) == 0
		&& task02(0, 0, 0) == 0
		&& task02(-7, -7, -7) == 0
		&& task02(-7, -5, -7) == 0
		&& task02(-7, -7, -5) == 0
		&& task02(7, -5, 7) == 0
		&& task02(7, 7, -5) == 0

		&& task02(23, 11, 17) == 17
		&& task02(11, 17, 23) == 17
		&& task02(-1, -2, -3) == -2
		&& task02(-2, -1, -3) == -2
		&& task02(-3, -1, -2) == -2
		&& task02(-7, 5, 7) == 5
		&& task02(7, -7, 5) == 5
		&& task02(7, 5, -7) == 5
		&& task02(5, 7, -7) == 5;

	cout << "Task 02 [The Average Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(4, 2023) == 30
		&& task03(5, 2023) == 31
		&& task03(2, 1900) == 28
		&& task03(2, 2000) == 29
		&& task03(-7, 2023) == 0
		&& task03(0, 2023) == 0
		&& task03(13, 2023) == 0

		&& task03(2, 2023) == 28
		&& task03(2, 1984) == 29
		&& task03(2, 2000) == 29
		&& task03(2, 0) == 29
		&& task03(2, -100) == 28
		&& task03(2, -2300) == 28
		&& task03(2, 2300) == 28

		&& task03(4, 2023) == 30
		&& task03(6, 2023) == 30
		&& task03(9, 2023) == 30
		&& task03(11, 2023) == 30

		&& task03(1, 2023) == 31
		&& task03(3, 2023) == 31
		&& task03(7, 2023) == 31
		&& task03(8, 2023) == 31
		&& task03(10, 2023) == 31
		&& task03(12, 2023) == 31;

	cout << "Task 03 [Amount of Days]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(1, 2, 3, 4) == "Ascending arithmetic progression."
		&& task04(2, 4, 6, 8) == "Ascending arithmetic progression."
		&& task04(15, 10, 5, 0) == "Descending arithmetic progression."
		&& task04(7, 7, 7, 7) == "Monotonic arithmetic progression."
		&& task04(2, 4, 8, 16) == "No arithmetic progression."

		&& task04(3, 5, 7, 9) == "Ascending arithmetic progression."
		&& task04(9, 11, 13, 15) == "Ascending arithmetic progression."
		&& task04(8, 10, 12, 14) == "Ascending arithmetic progression."
		&& task04(-15, -13, -11, -9) == "Ascending arithmetic progression."
		&& task04(-9, -7, -5, -3) == "Ascending arithmetic progression."
		&& task04(-4, -1, 2, 5) == "Ascending arithmetic progression."
		&& task04(-16, -12, -8, -4) == "Ascending arithmetic progression."

		&& task04(-2, -7, -12, -17) == "Descending arithmetic progression."
		&& task04(17, 12, 7, 2) == "Descending arithmetic progression."
		&& task04(37, 31, 25, 19) == "Descending arithmetic progression."
		&& task04(-19, -25, -31, -37) == "Descending arithmetic progression."
		&& task04(5, 2, -1, -4) == "Descending arithmetic progression."

		&& task04(-7, -7, -7, -7) == "Monotonic arithmetic progression."
		&& task04(0, 0, 0, 0) == "Monotonic arithmetic progression."

		&& task04(1, 1, 2, 3) == "No arithmetic progression."
		&& task04(3, 2, 1, 1) == "No arithmetic progression."
		&& task04(2, 3, 5, 7) == "No arithmetic progression."
		&& task04(7, 5, 3, 2) == "No arithmetic progression."
		&& task04(-1, -1, -2, -3) == "No arithmetic progression."
		&& task04(-3, -2, -1, -1) == "No arithmetic progression."
		&& task04(-2, -3, -5, -7) == "No arithmetic progression."
		&& task04(-7, -5, -3, -2) == "No arithmetic progression."
		&& task04(2, 3, 7, 8) == "No arithmetic progression."
		&& task04(8, 7, 3, 2) == "No arithmetic progression.";

	cout << "Task 04 [Arithmetic Progression]" << (result ? RIGHT : WRONG) << endl;
}


void testingTaskX() {
	bool result = taskX(1, 2, 3, 3, 2, 1) == "Boxes are equal."
		&& taskX(2, 2, 3, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(3, 2, 1, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(3, 11, 5, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(0, 11, 5, 4, 7, 9) == "Error."
		&& taskX(3, -11, 5, 4, 7, 9) == "Error."

		&& taskX(1, 1, 1, 1, 1, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 2, 1, 1) == "Boxes are equal."
		&& taskX(1, 2, 1, 2, 1, 1) == "Boxes are equal."
		&& taskX(1, 1, 2, 2, 1, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 1, 2, 1) == "Boxes are equal."
		&& taskX(2, 1, 1, 1, 1, 2) == "Boxes are equal."
		&& taskX(2, 2, 1, 2, 2, 1) == "Boxes are equal."
		&& taskX(2, 1, 2, 2, 2, 1) == "Boxes are equal."
		&& taskX(1, 2, 2, 2, 2, 1) == "Boxes are equal."
		&& taskX(1, 2, 2, 1, 2, 2) == "Boxes are equal."
		&& taskX(1, 2, 2, 2, 1, 2) == "Boxes are equal."

		&& taskX(2, 3, 2, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(3, 2, 2, 3, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 3, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 2, 3, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 2, 1, 3) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 1, 2, 3) == "The first box is larger than the second one."
		&& taskX(2, 2, 3, 1, 3, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 2, 1) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 2, 1, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 2, 1, 2, 2) == "The first box is larger than the second one."
		&& taskX(2, 2, 1, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 1, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 2, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 1, 2, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(1, 2, 1, 1, 1, 1) == "The first box is larger than the second one."
		&& taskX(2, 1, 1, 1, 1, 1) == "The first box is larger than the second one."

		&& taskX(3, 1, 2, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(2, 3, 1, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(2, 1, 3, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(1, 2, 3, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(1, 3, 2, 2, 2, 3) == "The first box is smaller than the second one."
		&& taskX(3, 2, 1, 2, 3, 2) == "The first box is smaller than the second one."
		&& taskX(3, 2, 1, 3, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 1, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 2, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 2, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 1, 2, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(2, 2, 1, 2, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 2, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 1, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 2, 1) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 1, 2) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 1, 2, 1) == "The first box is smaller than the second one."
		&& taskX(1, 1, 1, 2, 1, 1) == "The first box is smaller than the second one."

		&& taskX(3, 5, 11, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(11, 5, 3, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(11, 3, 5, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(5, 11, 3, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(5, 3, 11, 4, 7, 9) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 4, 9, 7) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 7, 9, 4) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 7, 4, 9) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 9, 7, 4) == "Boxes are incomparable."
		&& taskX(3, 11, 5, 9, 4, 7) == "Boxes are incomparable."

		&& taskX(5, 12, 8, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(5, 8, 12, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(12, 5, 8, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(12, 8, 5, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(8, 5, 12, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(8, 12, 5, 15, 16, 2) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 15, 2, 16) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 16, 15, 2) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 16, 2, 15) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 2, 16, 15) == "Boxes are incomparable."
		&& taskX(5, 12, 8, 2, 15, 16) == "Boxes are incomparable."

		&& taskX(3, 7, 11, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(7, 11, 3, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(11, 3, 7, 1, 9, 11) == "Boxes are incomparable."
		&& taskX(3, 7, 11, 9, 11, 1) == "Boxes are incomparable."
		&& taskX(3, 7, 11, 11, 1, 9) == "Boxes are incomparable."

		&& taskX(3, 0, 5, 4, 7, 9) == "Error."
		&& taskX(3, 11, 0, 4, 7, 9) == "Error."
		&& taskX(3, 11, 5, 0, 7, 9) == "Error."
		&& taskX(3, 11, 5, 4, 0, 9) == "Error."
		&& taskX(3, 11, 5, 4, 7, 0) == "Error."
		&& taskX(-3, 11, 5, 4, 7, 9) == "Error."
		&& taskX(3, 11, -5, 4, 7, 9) == "Error."
		&& taskX(3, 11, 5, -4, 7, 9) == "Error."
		&& taskX(3, 11, 5, 4, -7, 9) == "Error."
		&& taskX(3, 11, 5, 4, 7, -9) == "Error.";

	cout << "Task X  [Boxes]" << (result ? RIGHT : WRONG) << endl;
}