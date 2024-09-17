#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
int main() {
    
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int num : numbers) {
    cout << num << " ";
    }
    cout << endl;

    reverse(numbers.begin(), numbers.end());

    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
