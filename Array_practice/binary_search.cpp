#include <iostream> 
using namespace std; 
int main(){
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, key; 
    cout << "Enter Key: "; 
    cin >> key; 

    while(l <= h) {
        int mid = (l + h) /2; 
        if(key == A[mid]){
            cout << "Found at " << mid; 
            return 0;  
        }
        else if(key < A[mid]){
            h = mid - 1; 
        }
        else if(key > A[mid]){
            l = mid + 1; 
        }
    }

    if(l > h){
        cout << "key not found."; 
    }

    return 0; 
}