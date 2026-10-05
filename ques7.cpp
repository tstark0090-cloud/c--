#include<iostream>
using namespace std;

int main() {
    int n;
    while(true){
        cout<<"enter the number: ";
        cin>>n;

        if(n==-1){
            cout<<"the entered number is -1 ";
            break;
        } 
        if(n<0) {
            cout<<"invalid number";
            continue;
        }

    }


}
