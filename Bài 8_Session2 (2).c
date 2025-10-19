#include <stdio.h>

int main() {
    int number = 12345;
    
    int unit1 = number % 10; 
    int next_number = number / 10;
    int unit2 = next_number % 10 ;    
    int unit3 = (next_number % 100) / 10;   
    int unit4 = (next_number % 1000) / 100;   
    int unit5 = (next_number % 10000) / 1000 ;
    
    
    int result = unit2 * 1000 + unit3 * 100 + unit4 * 10 + unit5;
    
    
    return 0;
}

