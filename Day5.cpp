#include<iostream>
using namespace std;

//____________SUM OF N NATURAL NUMBER_____________

// int main(){
//     int n =1234,dig;
//     cout<<"enter number--";
//     cin>>n;
//     int sum  = 0;;
//     while(n>5){
//         dig  = n%10;
//         sum+= dig;
//         n= n/10;
//     }
//     cout<<sum;
// }

//____PRINTNING REVERSE DIGIT OF A GIVEN NUMBER______________

// int main(){
//     int n = 10829;
//     int sum =  0;
//     int dig; 
//     while(n>0){
//         dig = n%10;
//         n = n/10;
//         cout<<dig;
//     }
// }

//______________Reverse a given number and print its result______________

// int main(){
//     int n = 10829;
//     int res = 0;
//     while(n>0){
//         int dig = n%10;
//         res = res*10 + dig;
//         n = n/10;
//     }
//     cout<<res;
// }

//__keep entering number until they are multiple of 10____________

// int main(){
//     int n;
//     do{
//         cout<<"enter the number: ";
//         cin>>n;
//         if(n%10==0){
//             break;
//         }
//         cout<<"you entered the number "<<n<<endl;
//     }while(true); 
// }



// int main(){
//     int i = 1;
//     do{
//         if(i==3){
//             i++;
//             continue;
//         }
//         cout<<i;
//         i++;
//     }while(i<=10);
// }

//_______________________Check for prime number____________

// int main(){
//     int n = 7;
//     bool isPrime = true;
//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }

//     }
//     if(isPrime){
//         cout<<"Number is Prime."<<endl;
//     }
//     else{
//         cout<<"Number is Not Prime."<<endl;
//     }
// }

//_____________________Factorial of a given number________________

int main(){
    int n = 6;
    int fact = 1;
    for(int i = 0; i<n;i++){
        fact = fact*(n-i);
    }

    cout<<"The factorial of "<<n<<" is  =   " <<fact<<endl;
}

//_______________ multiplication table of a number___________

// int main(){
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(int i = 1; i<=10; i++){
//         int tab = n*i;
//         cout<<n<<" x "<<i<<" = "<<tab<<endl;
//     }
// }

//_____to check wheather the given number is ARMSTRONG or NOT_____________

// int main(){
//     int n = 153;
//     int org = n;
//     int dig;
//     int dup =0;
//     while(n>0){
//         dig = n%10;
//         dup = dup + dig*dig*dig;
//         n/10;
//     }
//     if(dup == org){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }