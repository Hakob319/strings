#include <stdio.h>
#include <string.h>

int strlen(char* str) {

int lenght = 0;

while (str[lenght] != '\0') {
lenght++

}


return lenght;

}
int main() {

char str[] = "HELLO";
int size = stren(str);
printf("%d", size);

return 0;

}
