#include "util.hpp"

// aとbの値を交換する
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// aryAとaryBが等しいか比較する
bool compare(int aryA[], int aryB[], int size) {
    for (int i = 0; i < size; i++) {
        if (aryB[i] != aryA[i]) return false;
    }

    return true;
}

// 配列の結果を1行で出力する
void arrayOneLinerPrint(int ary[], int size) {
    for (int i = 0; i < size; i++) std::cout << ary[i] << " ";
    std::cout << std::endl;
}

// a配列をb配列にコピーする
void aryCopy(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) b[i] = a[i];
}