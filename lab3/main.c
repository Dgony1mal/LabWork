#include <stdio.h>
#include <ctype.h>

int main() {
    char str[81];
    printf("Введите строку (до 80 символов): ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'A';
        } else if (str[i] == 'b') {
            str[i] = 'B';
        }
    }
    
    printf("Полученная строка: %s\n", str);
    
    return 0;
}