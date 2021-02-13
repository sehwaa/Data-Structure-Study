#include <iostream>

using namespace std;

int data[9] = {5, 1, 3, 7, 9, 2, 4, 6, 8};

void swap(int low, int high) {
    int temp = data[low];
    data[low] = data[high];
    data[high] = temp;
}

int partition(int left, int right) {
    int pivot = data[left];
    int low = left + 1;
    int high = right;

    while (low <= high) {
        
        //pivot보다 큰 값
        while( pivot > data[low]) low++;

        //pivot보다 작은 값
        while (pivot < data[high]) high--;

        if (low <= high) {
            swap(low, high);
        }
    }

    swap(left, high);
    return high;
}

void quickSort(int left, int right) {
    if (left <= right) {
        int pivot = partition(left, right);
        quickSort(left, pivot-1);
        quickSort(pivot+1, right);
    }
}

int main() {

    quickSort(0, sizeof(data) / sizeof(int)-1);

    for (int i = 0; i < sizeof(data) / sizeof(int); i++) {
        cout << data[i];
    }
    return 0;
}