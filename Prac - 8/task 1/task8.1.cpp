#include <iostream>
using namespace std;
// Q -Will the program through an error and if yes then why? 
// A -The program will give us an error because the pointer variable is basically used to store the address of another variable
//    of same data type.
int main()
{
   int *p = {10,20,20};

    cout << *p;

    p++;

    cout << *p;
    return 0;
}
