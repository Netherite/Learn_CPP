#include <iostream> 
using namespace std; 

int find_max(int arr[], int SIZE){
    int max = 0; 
    for(int i = 0; i < SIZE; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max; 
}

int main(){
    int A[7] = {4, 8, 6, 9, 2, 6, 1};
    int my_max = find_max(A, 7); 
    cout << "The maximum number is " << my_max; 
}