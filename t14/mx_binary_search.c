int mx_strcmp(const  char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int l_side = 0;
    int r_side = size - 1;
    int middle = 0;
    int index = 0;

    while (l_side <= r_side) {
        middle = (l_side + r_side) / 2;
        (*count)++;
        if (mx_strcmp(arr[middle], s) == 0) {
            index = middle;
            return index;
        }
        if (mx_strcmp(arr[middle], s) > 0)
            r_side = middle - 1;
        else
            l_side = middle + 1;
    }
    (*count) = 0;
    return -1;
}
