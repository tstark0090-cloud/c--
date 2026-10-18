#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 1000; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0)
                sum += i;
        }
        if (sum == num)
            cout << num << " is a perfect number" << endl;
    }
    return 0;
}
