#include <iostream>
using namespace std;
int main(){
    int totalrow =5;
    for(int i=0; i<5; i++){
        for(int j=0; j<2*i-totalrow; j++){
            cout<<" ";
        }
        
        for(int j=0; j<i-totalrow; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}