// #include<stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0, j = 0; i < size-1; i++) {
        if (arr[i] > arr[i+1]) {
            j = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = j;
            i = -1;
        }
    }
}

// int main(void) {
//     int size = 7;
//     int arr[7] = {3, 55, -11, 1, 0, 4, 22};
//     mx_sort_arr_int(arr, size);
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
// }
