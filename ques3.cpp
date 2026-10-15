#include <iostream>
using namespace std;
int main(){
    int found=37;
    for(int i=1;i<=50;i++){
        if(found==i){
            cout<<"Number is found";
            break;
        }else{
            cout<<"Number is not found";
            break;
        }
    }
    return 0;
}