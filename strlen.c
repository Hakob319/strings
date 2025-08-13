#include <stdio.h>
#include <string.h>

int strlen(char* str) {

int count = 0;

while (*(str + count) != '\0') {
count++

}


return count;

}
int main() {

char arr[] = "HELLO";
int size = stren(str);
printf("%d", size);

return 0;

}
