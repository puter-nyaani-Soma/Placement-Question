#include <iostream>
#include <vector>
using namespace std;
int main(){
    string letter="XOXOXX";
    int n=3,j,i;
    //getline(cin, letter);
    // cout<<letter<<endl;
    // cin>>n;
    for(j=0;j<3;j++){
        for(i=0;i<letter.length();i++){
            if(letter[i]=='X'){
                letter[i]='O';
                break;
            }
            else{
                letter[i]='X';
            }
            
        }
        n--;
    cout<<letter<<endl;
    }


}