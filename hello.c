#include <stdio.h> 

void println(const char *s) {
    printf("%s\n", s);
}

int main(int argc, char **argv)
{
    const char* s = "-- Hello world! --";
    println(s);
    return 0;
}
