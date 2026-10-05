#include<iostream>
using namespace std;
int main(){
    int n , a=0 ,b=1 ,c;
    cout<<"enter the number of terms: ";
    cin>>n;
    for(int i =3; i<=n; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;


}