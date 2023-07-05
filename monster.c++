#include <iostream>
using namespace std;
int main(){
    int n,i,j,level;
    cout<<"\nthe number of Monster ";
    cin>>n;
    cout<<"\nYour exp";
    cin>>level;
    //1-power 
    //2-bonus

    int **matrix = (int **)malloc(sizeof(int *) * n);
    for(i=0;i<2;i++){
        matrix[i] = (int *)malloc(sizeof(int)*n);
    }
    int *power = (int *)malloc(sizeof(int)*n);
    cout<<"The power of Monster"<<endl;
    for(i=0;i<n;i++){
        cin>>matrix[0][i];
    }
    cout<<"The bonus of Monster"<<endl;
    for(i=0;i<n;i++){
        cin>>matrix[1][i];
    }
    i = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            

        }
    }
    
   


}