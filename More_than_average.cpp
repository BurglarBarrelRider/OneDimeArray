#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int arr[100];
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    int sum = 0;
    for(i = 0; i < n; i++){
        sum += arr[i];
    }
    double averg = double(sum) / n;
    int sum2 = 0; int count = 0;
    for(i = 0; i<n; i++){
        if(arr[i] > averg){
            sum2 += arr[i];
            count++;
        }
    }
    cout<<sum2<<" "<<count;
 
    return 0;
}

