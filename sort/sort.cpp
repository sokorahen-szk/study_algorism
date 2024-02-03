#include <iostream>
#include "sort.hpp"
#include "util.hpp"

using namespace std;

// バブルソート
// DESC = 0 降順
// ASC = 1 昇順
void bubbleSort(int ary[], int size, int sort) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (i == j) continue;
            if (sort == DESC &&  ary[i] < ary[j]) swap(&ary[i], &ary[j]);
            if (sort == ASC &&  ary[i] > ary[j]) swap(&ary[i], &ary[j]);
        }
    }
}

