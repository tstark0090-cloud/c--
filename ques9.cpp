#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number[1-4]: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"You entered 1";
        case  2:
        cout<<"You entered 2";
        case 3:
        cout<<"You entered 3";
        case 4:
        cout<<"You entered 4";
        default :
        cout<<"You entered wrong number";
    }
    return 0;

}