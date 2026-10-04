#include <iostream>
using namespace std;

int main() {
    int searchnum;
    int numbers[] = {10, 20, 30, 40, 50};

    cout << "Enter the number to search: ";
    cin >> searchnum;

    for (int index = 0; index < 5; index++) {
        if (numbers[index] == searchnum) {
            cout << "Number found!";
            break;
        }
    }

    return 0;
}