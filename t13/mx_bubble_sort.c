int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    char *buff;
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
                buff = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = buff;
                count++;
            }
        }
    }
    return count;
}
