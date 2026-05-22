#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter the numbers: ";

    for(int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Elements in vector are: ";

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}