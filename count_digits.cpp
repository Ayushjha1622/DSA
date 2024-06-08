// #include <iostream>
// int countDigits(int n)
// {
//     int result = 0;

//     while (n > 0)
//     {
//         n = n / 10;
//         result++;
//     }
//     return result;
// }

// int main()
// {
//     int n;
//     std::cout << "Enter an integer: ";
//     std::cin >> n;

//     std::cout << "number of digits: " << countDigits(n) << std::endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int countDigits(int n){
    int result=0;


while(n>0){
    n=n/10;
    result++;
}
return result;
}
int main(){
int n;
cout<<"Enter an integer: ";
cin>>n;

cout<<"no. of digits: "<<countDigits(n)<<endl;
}