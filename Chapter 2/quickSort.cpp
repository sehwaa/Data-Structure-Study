#include <iostream>

using namespace std;

int data[9] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

int main() {
    int pivot = 0;
    int low = 1;
    int high = 9;

    while (high > low) {
        if (data[pivot] < data[low] && data[pivot] > data[high]) {
            int temp = data[low];
            data[low] = data[high];
            data[high] = temp;
        }
        high--;
        low++;
    }
    return 0;
}