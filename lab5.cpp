#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    //-----first area-----
    int minIndex;

    // Traverse the array and select the minimum element
    for (int i = 3; i < size - 1; i++) //взять из feature
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element
        //-----second area-----
        int temp = arr[i]; //взять из master
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    //-----third area-----
    int arr[] = {5, 9, 3, 1, 8, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}