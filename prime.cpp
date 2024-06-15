#include<iostream>
bool isprime(int n){
    if(n<=1){
        return false;

    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    if(isprime(n)){
        std::cout<<n<<" is a prime number."<<std::endl;
        }
        else{
            std::cout<<n<<" is not a prime number."<<std::endl;
            }
            return 0;

}