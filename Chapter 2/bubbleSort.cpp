#include <iostream>

using namespace std;

int data[9] = {5, 1, 3, 7, 9, 2, 4, 6, 8};

void swap (int idx1, int idx2) {
    int temp = data[idx1];
    data[idx1] = data[idx2];
    data[idx2] = temp;
}

void bubbleSort() {
    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        for (int j = i; j < sizeof(data) / sizeof(int) - 1; j++) {
            if (data[j] > data[j+1]) swap(j, j+1);
        }
    }
}

int main() {
    bubbleSort();

    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        cout << data[i];
    }
    return 0;
}