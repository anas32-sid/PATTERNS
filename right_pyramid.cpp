#include <iostream>
using namespace std;
int main(){
    int a=5;
for(int i=1; i<5; i++){
    for(int j=1; j<a-i; j++){
        cout<<" ";
    }

    for(int j=0; j<i; j++){
        cout<<"*";
    }
    cout<<endl;
}
}