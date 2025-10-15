#include<iostream>
using namespace std;
int main(){
    // cout<< (10/3)<<endl; // 3
    // cout<< (10/3.0)<<endl; // 3.33333
    // cout<< (10.0/3.0); // 3.33333
    // cout<< (bool)3+2; // 3
    // cout<< (bool)(3+2); // 3

    // cout<< (5.5 + 5 + 'A'); //75.5

// int x = 2, y = 5; 
// int exp1 = (x * y / x); 
// int exp2 = (x * (y / x)); 
// cout << exp1 << ","; 
// cout << exp2 << "\n";

int x = 10, y = 5; 
int exp1 = (y * (x / y + x / y)); 
int exp2 = (y * x / y + y * x / y); 
cout << exp1 << " "; 
cout << exp2 << "\n"; 


}