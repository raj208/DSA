#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> numbers(size);

    cout << "Enter the values for the vector:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Sort the vector
    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
