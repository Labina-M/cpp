#include<iostream>
using namespace std;

int main(){
int a=5;
int b=9;
cout<<"before swapping ";
cout<<a<<" "<<b;
cout<<endl;

//using XOR gate to swap two numbers
a=a^b;
b=a^b;
a=a^b;
cout<<"after swapping ";
cout<<a<<" "<<b;

return 0;
}
