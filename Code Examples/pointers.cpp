#include <conio.h>
#include <iostream>
// Other includes not required here
// #include <memory>
// #include <string>
// #include <vector>

// Simple function to swap the two variables' values
void swap(int *aa, int* bb)
{
    int temp = *aa;
    *aa = *bb;
    *bb = temp;
    std::cout << "Inside 'swap' function: aa=" << *aa << ", bb=" << *bb << std::endl;
    // Serial.println("Inside 'swap'...");
    // printf("Inside 'swap' function: aa=%d, bb=%d", aa, bb);
}

// Standard "main" function, like the Arduino loop, except this one does not loop
int main()
{
    int a = 5;
    int b = 10;

    std::cout << "BEFORE swap: Var a=" << a << ", var b=" << b << std::endl;
    swap(&a, &b);
    std::cout << "AFTER swap: Var a=" << a << ", var b=" << b << std::endl;

    return 0;
}
