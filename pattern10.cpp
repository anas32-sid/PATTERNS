#include <iostream>
using namespace std;
int hello(int n){
    for(int i=0; i<2*n-1; i++){
        int stars =i;

        if(i>n){
            stars =2*n-i;
        }
        for(int j=0; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
int n;
cout<<"enter the value of n: ";
cin>>n;
hello(n);
}
