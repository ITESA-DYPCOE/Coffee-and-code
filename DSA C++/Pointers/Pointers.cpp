// Pointers are variables which store address of other variables
// Eg: if i=10 then at cout it will find its pointer using &i and then use it to acces i

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    // & operator is used to find the address.... also called address of operator
    cout << &i << endl;
    //output
    //0x61ff0c .... an hexa decimal no.

    //declaring pointers
    int *p = &i;
    cout << p << endl;
    //output
    //0x61ff0c

    // * can be used to access pointer data as a derefrence operator
    cout << *p << endl;
    //output
    //10

    if (*p == i)
    {
        cout << "true" << endl;
    }
    //proving both are same

    //pointers can be treated as normal numbers
    (*p)++;
    cout << i << endl;
    //output
    //10+1 = 11

    int a[10];
    cout << a << endl;
    //a is a pointer

    return 0;
}