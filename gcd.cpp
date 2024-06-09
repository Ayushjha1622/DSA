// naive method
// #include<iostream>
// using namespace std;


// int gcd(int a, int b){
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     cout << "Enter a: ";
//     cin >> a ;
//     cout << "Enter b: ";
//     cin >> b ;
//     cout << "GCD of " << a << " and " << b << " is "<< gcd(a,b)<<endl;

//     return 0;

// }

// euclidean method
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
        }
    else{
            return gcd(b,a%b);
            }
}
int main(){

int a,b;
cout<<"enter both numbers: ";
cin >> a >> b;
cout << "GCD of " << a << " and " << b << " is " << gcd(a,b);
return 0;

}