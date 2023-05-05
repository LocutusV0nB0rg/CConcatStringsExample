#include <stdio.h>
#include <stdlib.h>

int main() {
    char* s1 = "string1";
    char* s2 = "string2";
    char* s3 = "string3";

    char* buf = (char*) malloc(sizeof(char) * 200);
    sprintf(buf, "%s%s%s", s1, s2, s3);
    printf("Result: %s\n", buf);
    return 0;
}
