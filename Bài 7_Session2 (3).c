#include <stdio.h>

int main() {
    int number = 12345;
    int sum; 
    
    int unit1 = number % 10;
    int unit2 = (number % 100) / 10;
    int unit3 = (number % 1000) / 100;
    int unit4 = (number % 10000) / 1000;
    int unit5 = number / 10000 ;

    sum = unit1 + unit2 + unit3 + unit4 + unit5;

    return 0;
}



