#include<iostream>
using namespace std;

int main(){
int a=5;
int b=9;
int temp;
cout<<"before swapping ";
cout<<a<<" "<<b;
cout<<endl;

//using a temporary variable to swap

temp=a;
a=b;
b=temp;
cout<<"after swapping ";
cout<<a<<" "<<b;

return 0;
}
