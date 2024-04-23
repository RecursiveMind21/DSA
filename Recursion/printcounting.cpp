#include <iostream>
using namespace std;

void printcount(int num) {
    // Base case
    if (num == 1) {
        cout << num << " ";
        return;
    }

    printcount(num - 1);
    cout << num << " ";
}

int main() {
    int num;
    cout << "Enter the number till which you want to print counting: ";
    cin >> num;

    printcount(num);

    return 0;
}
