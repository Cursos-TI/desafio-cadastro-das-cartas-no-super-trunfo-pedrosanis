#include <stdio.h>
#include <math.h>
#include <locale.h>


int main () {
    long variable = (359.6 * pow(10,9)) / 6211223;
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("R$ %'lld", variable);

    return 0;

}