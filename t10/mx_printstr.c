#include<unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

// int main(void) {
//     mx_printstr("0lkjhikjgyufgijhlk51 pk");
// }
