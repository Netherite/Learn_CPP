#include<iostream>
using namespace std;

void Sum()
{
    int A[]={2,4,11,8,10,15,13},n=7;
    int sum=0;
    
    //add all elements from Array A to sum
    //print sum

    for(int i = 0; i < n; i++){
        sum += A[1]; 
    }

    cout << sum; 
}

int main(){
    Sum(); 
}