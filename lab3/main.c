#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    
    printf("Введите строку (до 80 символов): ");
    fgets(str, sizeof(str), stdin);
    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'b') {
            str[i] = str[i] - 32;
        }
    }

    printf("Результат: %s\n", str);
    
    return 0;
}