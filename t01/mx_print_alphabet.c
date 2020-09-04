void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 0; i < 26; i+=2) {
        mx_printchar(i+65);
        mx_printchar(i+98);
    }
    mx_printchar('\n');
}

// int main(void) {
//     mx_print_alphabet();
// }
