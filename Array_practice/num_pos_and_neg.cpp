#include<iostream>
using namespace std;

void Count()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;

    for(int i = 0; i < 12; i++){
        if(A[i] >= 0){
            pcount++;
        }
        else{
            ncount++; 
        }
    }
    
    // write a loop to count positive and negative numbers
    
    cout<<pcount<<" "<<ncount;
}

int main(){
    Count(); 
    return 0; 
}