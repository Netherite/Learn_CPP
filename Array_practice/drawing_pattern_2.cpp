#include <iostream> 
using namespace std; 
int main(){
    for(int i = 4; i > 0; i--){
        for(int j = 1; j < 5; j++){
            if(j >= i){
                cout << "* ";
            }
            else{
                cout << "  "; 
            }
        }
        cout << "\n";
    }
    return 0; 
}