#include <stdio.h>
#include <string.h>

int main() {

char str1[] = "hello";
char str2[] = "world";

strcat(str2, str1);
printf("%s", str2);

return 0;

}
