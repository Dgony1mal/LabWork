#include <stdio.h>
#include <ctype.h>
int main(){
    char spisok[81];
    printf("Выкладывай информацию, БЫСТРО! \n");
    fgets(spisok, sizeof(spisok), stdin);
    for(int x = 0; spisok[x] != '\0'; x++){
        if(spisok[x] == 'a' || spisok[x] == 'b'){
            spisok[x] = toupper(spisok[x]);
        }
    }
    printf("%s", spisok);
    return 0;
}