#include <iostream>

using namespace std;

int data[9] = {5, 1, 3, 7, 9, 2, 4, 6, 8};

void insertionSort() {
    int key;
    int i, j;
    for (i = 1; i < sizeof(data) / sizeof(int); i++) {
        key = data[i];
        for (j = i-1; j >= 0; j--) {
            if (key < data[j]) 
                data[j+1] = data[j];
            else
                break;
        }
        data[j+1] = key;
    }
}

int main() {
    insertionSort();

    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        cout << data[i];
    }
    return 0;
}