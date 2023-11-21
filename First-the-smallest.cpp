
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i < n; i++){
        cin>>arr[i];
    }
    int minI = 0; // arr[0] это минимум
    
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minI]){
            minI = i;
        }
    }
    
    if(minI != 0){
        int var = arr[0];
        arr[0] = arr[minI];
        arr[minI] = var;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}