
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    int arr[105];
    cin>>n>>k;

    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int counter = 0;
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if( (arr[i] + arr[j]) % k == 0 ){
                counter++;
                // cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    cout<<counter;

    return 0;
}