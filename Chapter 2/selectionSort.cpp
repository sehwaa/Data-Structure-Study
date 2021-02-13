#include <iostream>

using namespace std;

int data[9] = {5, 1, 3, 7, 9, 2, 4, 6, 8};

void swap (int idx1, int idx2) {
    int temp = data[idx1];
    data[idx1] = data[idx2];
    data[idx2] = temp;
}

void selectionSort() {
    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        int minIndex = i;
        for (int j = i+1; j < sizeof(data) / sizeof(int); j++) {
            if (data[j] < data[minIndex])
                minIndex = j;
        }
        swap(i, minIndex);
    }
}

int main() {

    selectionSort();

    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        cout << data[i];
    }
    return 0;
}