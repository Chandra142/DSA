#include<iostream>
using namespace std;

// NESTED LOOP 

// int main(){
//     int n = 4;
//     for(int i = 1; i <=n; i++){
//         for(int j = 1; j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


//_********************    Pattern   +++++++++++++++++++++++++++

// int main(){
//     int n = 5;
//     for(int i = 0;i <=n; i++){
//         for(int j = 0; j <=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//+++++++++++++++++++++++INVERTED TRIangle+++++++++++++++= 

// int main(){
//     int n = 5;
//     for(int i = 1;i <=n; i++){
//         for(int j =i  ; j<=n;  j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// +++++++++++++++++++ HALF pyramid--------------------


// int main(){
//     int  n = 5;
//     for(int i = 1;i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<j<<" ";
//         }  
//         cout<<endl;
//     }
// }

//---------------------Printing  alphabate in pyramid----------------

// int main(){
//     int n = 5;
//     char ch = 'A';
//         for(int i=1; i<=n; i++){
//             for(int j = 1; j<=i;j++){
//                 cout<<ch++;
//                 // 
//             }
//             cout<<endl;
//         }
// }


// _________------------------HOLLOW RECTENGLE----------

// int main(){
//     int n = 3;
//     for(int i = 1; i<=n; i++){
//         cout<<"*";
//         for(int j = 1; j<=n-1; j++){
//             if(i == 1 || i ==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//         }
//         cout<<"*"<<endl;
//     }
// }

// ++++++++++______________-------------Inverted TRIANGLE

// int main(){
//     int n = 5;
//     for(int i= 1; i<=n; i++){
//         for(int j = 1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j = 1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//----------------------______________FLYOD'S TRIANGLE________________

// int main(){
//     int n =5;
//     int num =1;
//     for(int i = 1; i<=n; i++){
//         // cout<<i;
//         for(int j = 1; j<=i; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

//________________________________----------DIAMOND PATTERN------------

// int main(){
//     int n = 4; 
//     //first pyramid
//     for(int i=1; i<=n; i++){
//         for(int j =1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j = 1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     //2nd pyramid
//     for(int i = n; i>=1; i--){
//         for(int j = 1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int j =1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//**********************************Assignment+++++++++++++++++++++++++++++++++++


// int main(){
//     int n = 5;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<=i;j++){
//             if((i+j)%2 == 0){
//                 cout<<1;
//             }
//             else{
//                 cout<<0;
//             }
//         }
//         cout<<endl;
//         // cout<<0;
//     }
// }

//*****************************Rohombus Pattern####################

int main(){
    int n = 5;
    for(int i = 0; i<n; i++){
        //spaces
        for(int j =0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j = 0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}