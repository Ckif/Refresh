// #include<stdio.h>

int mx_factorial_iter(int n) {
    int j = 1;

    if (n < 0 || n > 12)
        return 0;
    else if(n == 0)
        return 1;
    for (int i = 1; i <= n; i++)
        j*=i;
    return j;
}

// int main(void) {
//     printf("%d\n" ,mx_factorial_iter(5));
// }
