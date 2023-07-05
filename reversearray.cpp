#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int i,n,temp;

    cout<<"enter the size :";
    cin>>n;
    int arr[5];
    cout<<endl<<"Enter the elements : ";
    for (i=0;i<n;i++) {
        cin >> arr[i];
    
    }
    cout << endl;

    for (i=0;i<n;i++) {
        cout << arr[i] << "";
    
    }
}
    for (i=0;i<n/2;i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;


    }