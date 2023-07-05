#include <iostream>
#include <cstdlib>
using namespace std;
int * findminmax (int *arr,int n){
        int min=999;
        int max=0;
       
        for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    for (int i = 0; i < n;i++){
        cout << arr[i] << " " <<"max " <<max <<  "min " <<min << endl; 
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }

    }
    cout<<max<<" "<<min<<endl;
    int *soln = (int*)malloc(sizeof(int)*2);
    soln[0]=max;
    soln[1]=min;
    return soln;
}
int main(){
    int n,i=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = (int *)malloc(sizeof(int) * n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int* soln=findminmax(arr,n);
    free(arr);
    free(soln);

   
    return 0;

}