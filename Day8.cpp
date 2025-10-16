#include<iostream>
using namespace std;

void binToDec(int binnum){
    int n= binnum;
    int decnum = 0;
    int pow = 1;
    while(n>0){
        int lsd = n%10;
        decnum += lsd * pow; 
        pow = pow * 2;
        n/=10;
    }
    cout<<decnum;

}

void DecToBin(int decnum){
    int n = decnum;
    int binnum  = 0;
    int pow = 1;
    while(n>0){
        int rem = n%2;
        binnum  = binnum + rem*pow;
        pow = pow*10;
        n/=2;
    }
    cout<<binnum;
}
int main(){
    binToDec(1001);
    DecToBin(16);
}

