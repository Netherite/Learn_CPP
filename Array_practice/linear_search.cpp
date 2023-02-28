//find what is the index of 12 in the following array: 6 11 25 8 15  7 12 20 9 14

#include <iostream> 
using namespace std; 

void find_index(int arr[], int value){
    bool found = false; 
    for(int i = 0; i < 10; i++){
        if(arr[i] == value){
            found = true; 
            cout << "12 was found at index " << i; 
        }
    }
    if(found == false) {
        cout << "12 was not found."; 
    }
}

int main(){
    int my_arr[10] = {6, 11, 25, 8, 15, 7, 13, 20, 9, 14}; 
    find_index(my_arr, 12);
}