﻿#include "tasks.h"

/*	Task X. Boxes [коробки]
*
*	Есть две коробки, первая размером A1, B1, C1, вторая размером A2, B2, C2.
*	Определите, можно ли разместить одну из этих коробок внутри другой,
*	при условии, что поворачивать коробки можно только на 90 градусов
*	вокруг рёбер.
*
*	Предварительные условия:
*	1)	Стенки коробок имеют нулевую толщину.
*	2)	Одна коробка не может "выглядывать" из другой, она должна помещаться
*	в ней полностью, однако признак вложенности допускает равенство одного
*	или двух соответствующих сторон коробок (но не всех трёх одновременно,
*	потому что тогда коробки будут считаться одинаковыми).
*	3)	Объёмы коробок не могут служить надёжным критерием для их сравнения!
*	4)	Не забудьте про "защиту от дурака": все величины должны быть больше нуля.
*
*	Формат входных данных
*	Функция получает на вход шесть целых чисел типа int.
*
*	Формат выходных данных
*	Функция должна возвратить одну из следующих строчек:
*	1) "Boxes are equal." - если коробки одинаковые.
*	2) "The first box is smaller than the second one." - если первая коробка
*	может быть вложена во вторую.
*	3) "The first box is larger than the second one." - если вторая коробка
*	может быть вложена в первую.
*	4) "Boxes are incomparable." - во всех остальных случаях.
*	5) "Error." - если размеры коробок заданы некорректно.
*
*	[ input 1]: 1 2 3 3 2 1
*	[output 1]: Boxes are equal.
*
*	[ input 2]: 2 2 3 3 2 1
*	[output 2]: The first box is larger than the second one.
*
*	[ input 3]: 3 2 1 2 2 3
*	[output 3]: The first box is smaller than the second one.
*
*	[ input 4]: 3 11 5 4 7 9
*	[output 4]: Boxes are incomparable.
*
*	[ input 5]: 0 11 5 4 7 9
*	[output 5]: Error.
*
*	[ input 6]: 3 -11 5 4 7 9
*	[output 6]: Error.
*/

string taskX(int a1, int b1, int c1, int a2, int b2, int c2) {
    if (a1 <= 0 || b1 <= 0 || c1 <= 0 || a2 <= 0 || b2 <= 0 || c2 <= 0) {
        return "Error.";
    }

    if (a1 > b1) { swap(a1, b1); }
    if (a1 > c1) { swap(a1, c1); }
    if (b1 > c1) { swap(b1, c1); }
    if (a2 > b2) { swap(a2, b2); }
    if (a2 > c2) { swap(a2, c2); }
    if (b2 > c2) { swap(b2, c2); }

    if (a1 == a2 && b1 == b2 && c1 == c2) {
        return "Boxes are equal.";
    }
    bool box1_in_box2 = (a1 <= a2 && b1 <= b2 && c1 <= c2);
    bool box2_in_box1 = (a2 <= a1 && b2 <= b1 && c2 <= c1);
    if (box1_in_box2) {
        return "The first box is smaller than the second one.";
    }
    if (box2_in_box1) {
        return "The first box is larger than the second one.";
    }
    return "Boxes are incomparable.";
}
