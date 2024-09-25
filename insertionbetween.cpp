#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int Element = 30, newElement = 35;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == Element) {
            vec.insert(vec.begin() + i + 1, newElement);
            break;
        }
    }
    for (int v : vec) {
        cout << v << " ";
    }

    return 0;
}
