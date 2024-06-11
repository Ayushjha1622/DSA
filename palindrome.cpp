#include <iostream>
using namespace std;

bool ispalindrome(int n){
    int temp=n;
    int reversed=0;

    while(n>0){
        int lastDigit=n%10;
        reversed=reversed*10+lastDigit;
        n = n/10;

    }
    return temp==reversed;
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    if(ispalindrome(n)){
        cout<<n<<" is a palindrome number";
    }else{
        cout<<n<<" is not a palindrome number";
    }
    return 0;

}

