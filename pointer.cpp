#include <iostream>
using namespace std;

int main()
{

    int num = 27;
    int* num_pointer = &num;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Before Increment: " << num_pointer << endl;
    num_pointer++;
    cout << "After Increment: " << num_pointer << endl;
    cout << "Before Decrement: " << num_pointer << endl;
    num_pointer--;
    cout << "After Decrement: " << num_pointer << endl;
    return 0;
}
