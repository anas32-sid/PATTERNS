#include <iostream>
using namespace std;
int main(){
    int a=10;
    int*b=&a;
    cout<<"the address of A is = "<<b<<endl;  // it prints address of a
    cout<<"the address of A is = "<<&a<<endl;// it also prints the adress of a
    cout<<"the address of pointer = "<<&b<<endl;// it prints address of b
    cout<<"the value is of A is = "<<a<<endl;// it prints value assigned to a. 10
    cout<<"the value of A is   = "<<*b<<endl;// it prints value of a
} 
/*the address of A is = 0x61ff0c
the address of A is = 0x61ff0c
the address of pointer = 0x61ff08
the value is of A is = 10
the value of A is   = 10*/