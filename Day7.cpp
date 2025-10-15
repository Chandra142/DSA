#include<bits/stdc++.h>
using namespace std;
// void sayHello(){
//     cout<<"Printing sayHellow function \n";
// }
// void assistant(){
//     sayHello();
//     cout<<"Printing assistant function";
// }
// int main(){
//     assistant();

// }

//###################### forward declareation++++++++++++++++++++++

// void sayHello();

// int main(){
//     sayHello();
// }
// void sayHello(){
//     cout<<"\nPrinting lower function\n";
// }

//##################################### PARAMETER ++++++++++++++++++++++++++++++++++++++++++++++

// int sum(int a, int b){                                 //here a & b are parameter

//     //int sum(int a, int b = 1)                        // wee cannot take first parameter as a default paramerter as int a = 1;  

//     int add  = a + b;
//     return add;
// }

// int main(){
//     int s = sum(2,4);                                //here a & are argument;

//     // int s = sum(2);                               int this case a = 2 and b =1; 

//     cout<<"sum = "<<s<<endl;
// }

//+++++++++++++++++++++++++++++++++++++++++++ WAF to print prodcut of two number +++++++++++++++++++++++++++++++++++

// int prod(int a, int b){
//     return a*b;
// }

// int main (){
//     cout<< prod(10,20);
// }


//+++++++++++++++++++++++++++++++++++++++ WAF to check number is odd or even+++++++++++++++++++++++++++++++++++

// bool isEven(int a){
//     if(a%2 == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }

// int main(){
//     cout<<isEven(21);
// }

//+++++++++++++++++++++++++++++++++++++++++ FACTORIAL OF A GIVEN NUMBER+++++++++++++++++++++++++++++++

// int fact(int n){
//     int fact = 1;
//     for(int  i = 1; i<=n; i++){
//         fact  = fact*i;
//         cout<<"factorial("<<i<<") = "<<fact<<endl; 
//     }
//     return fact;
// }

// int main (){
//     fact(5);
//     return 0;
// }

//++++++++++++++++++++++++++++++++++++++++ TO CHECK WEATHER THE GIVEN NUMBER IS PRIME OR NOT+++++++++++++++++++++++++++++++++++

//+++++++++Method 1+++++++++++++


// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }
//     for(int i = 2; i<n; i++){
//         cout<<" a ";
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

//+++++++++++Method 2++++++++++++++
// bool isPrime2(int n){
//     if(n==1){
//         return false;
//     }
//     for(int i = 2; i*i<=n; i++){
//         cout<<" a ";
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     cout<<isPrime2(7);
//     return 0;
// }

//+++++++++++++++++++++++++++ FUNCTION OVERLOADING++++++++++++++++++++++++

// int sum(int a, int b){
//     cout<<(a+b)<<endl;
//     return 0;
// }
// int sum(double a, double b){
//     cout<<(a+b)<<endl;
// }
// int sum(int a, int b, int c){
//     cout<<(a+b+c)<<endl;
// }

// int main(){
//     sum(50,50);
//     sum(1.3,2.5);
//     sum(4,5,6);
// }


// ++To check the prime number in the given range as n++++++++++++++++++

bool isPrime(int n){
    if(n==1){
        return true;
    }
    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void allPrime(int n){
    for(int i = 2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    allPrime(30);
}
