#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char** argv){
    int i,j,k;
    int **matrix = (int **)malloc((sizeof(int *) * 3));
    for(i=0;i<3;i++){
        matrix[i]=(int *)malloc((sizeof(int) * 3));
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrix[i][j]=atoi(argv[i*3+j+1]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"|"<<endl<<'U'<<endl;
    //rotate 90
    // 1 2 3     7 8 9                     7 4 1
    // 4 5 6 =>  4 5 6     => transpose    8 5 2
    // 7 8 9     1 2 3                     9 6 3
    for(k =0;k<3;k++){
    for(i=0; i<=(int)3/2;i++){
        for(j=i; j<3; j++){
            
            int temp=matrix[i][k];
            matrix[i][k] =matrix[j][k];
            matrix[j][k] =temp;

        }

    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose matrix

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
           

        }
        // if(i==j){
        //     cout<<"matrix";
        //     break;
        // }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    free(matrix);

}