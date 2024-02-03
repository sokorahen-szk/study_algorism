#include <iostream>
#include "sort.hpp"
#include "util.hpp"

using namespace std;

int main() {
    int ary [] = {1, 7, 99, 5, 2, 0, 88, 129, 4};

    // バブルソート例
    int exampleBubbleSortAry [sizeof(ary) / sizeof(int)];
    aryCopy(ary, exampleBubbleSortAry, sizeof(ary) / sizeof(int));

    // 降順
    bubbleSort(exampleBubbleSortAry, sizeof(exampleBubbleSortAry) / sizeof(int));
    arrayOneLinerPrint(exampleBubbleSortAry, sizeof(exampleBubbleSortAry) / sizeof(int));
    // 129 99 88 7 5 4 2 1 0

    // 昇順
    bubbleSort(exampleBubbleSortAry, sizeof(exampleBubbleSortAry) / sizeof(int), ASC);
    arrayOneLinerPrint(exampleBubbleSortAry, sizeof(exampleBubbleSortAry) / sizeof(int));
    // 0 1 2 4 5 7 88 99 129

    return 0;
}