#include <stdio.h>

int main() {
    
    int number = 12345;
    int result = 0;

    
    int temp = number;

    
    while (temp > 0) {
        int digit = temp % 10;         
        result = result * 10 + digit;  
        temp = temp / 10;              
    }

   
}

