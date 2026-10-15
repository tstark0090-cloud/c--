#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> num;

        if (num == 0) {
            break; 
        }

        if (num > 0) {
            count++;
        }
    }

    cout << "You entered " << count << " positive numbers." << endl;
    return 0;
}
