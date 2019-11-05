#include<iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    int t; scanf("%d", &t);  //// ERROR STARTS AT THIS LINE

char buffer[10];
scanf("%s", buffer);      // Noncompliant - will overflow when a word longer than 9 characters is entered
    return 0;
}
