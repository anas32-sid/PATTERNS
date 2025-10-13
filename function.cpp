#include <iostream>
using namespace std;

int hello(int a, int b){
    if(a>=b){    // isko agar hamne false value di to ya to ye print kar dega a ko hi ya fir ye error dega
        return a; // isko ek else dena hai jis se agar a false ho to ye b print karde
    }
}
int main(){
    int a = 17;
    int b = 18;
    int c;
    c = hello(a, b);
    cout<<c<<endl;
    return 0;
}

