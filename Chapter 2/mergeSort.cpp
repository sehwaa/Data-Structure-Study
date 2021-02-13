#include <iostream>

using namespace std;

int data[9] = {5, 1, 3, 7, 9, 2, 4, 6, 8};

void merge(int left, int mid, int right) {
    int leftIndex = left;
    int rightIndex = mid+1;

    int *sortData = new int[sizeof(int) * (right + 1)];

    int sortIndex = left;

    while (leftIndex <= mid && rightIndex <= right) {
        if (data[leftIndex] <= data[rightIndex])
            sortData[sortIndex] = data[leftIndex++];
        else
            sortData[sortIndex] = data[rightIndex++];

        sortIndex++;
    }

    if (leftIndex > mid) {
        for (int i = rightIndex; i <= right; i++, sortIndex++) {
            sortData[sortIndex] = data[i];
        }
    } else {
        for (int i = leftIndex; i <= mid; i++, sortIndex++) {
            sortData[sortIndex] = data[i];
        }
    }

    for (int i = left; i <= right; i++)
        data[i] = sortData[i];

    delete[] sortData;

}

void mergeSort(int left, int right) {
    int mid;

    if (left < right) {
        mid = (left + right) / 2;

        mergeSort(left, mid);
        mergeSort(mid+1, right);

        merge(left, mid, right);
    }
}

int main() {

    mergeSort(0, sizeof(data)/sizeof(int)-1);

    for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
        cout << data[i];
    }
    return 0;
}