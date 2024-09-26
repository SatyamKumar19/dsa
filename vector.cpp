#include <iostream>
using namespace std;

class Vector {
private:
    int* data;   
    int size;    

public:
    
    Vector(int s) : size(s) {
        data = new int[size]; 
    }

   
    ~Vector() {
        delete[] data;
    }

    
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    
    int get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return -1; 
    }

   
    int getSize() const {
        return size;
    }
};

int main() {
    Vector myVector(3);

    
    myVector.set(0, 1);
    myVector.set(1, 2);
    myVector.set(2, 3);

        for (int i = 0; i < myVector.getSize(); ++i) {
        cout << myVector.get(i) << " "; 
    }
cout <<endl;

    return 0;
}
