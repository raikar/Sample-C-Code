#include <stdio.h>

int main()
{
    printf("Hello World");
    int val = getValueFromArray(8, 9);
    printf("value is " + val);
    return 0;
}

int getValueFromArray(int len, int index) {
    char array[8] = {'a','b','c','d','e','f','g','h'};
    int value;

// check that the array index is less than the maximum

// length of the array
//if (index < len) {

// get the value at the specified index of the array
    value = array[index];

return value;
} 
