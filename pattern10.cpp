#include <iostream>
using namespace std;
int pattern10(int n){
    for(int i=0; i<=2*n-1; i++){
        int stars=i;

        if(i>n)stars=2*n-i;
        

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern10(n);
}