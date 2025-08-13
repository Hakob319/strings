#include <stdio.h>
#include <string.h>

int main() {
char str[100];
printf("Input a string");
fgets(str);

int lenght = 0;
int i = 0;

while (str[i] != '\0') {
lenght++;
i++;


}
for (int i = 0; i < lenght / 2; ++i) {
char temp = str[i];
str[i] = str[lenght - i - 1];
str[lenght - i - 1] = temp;

}

printf("your reverse string %s", str);

return 0;

}
