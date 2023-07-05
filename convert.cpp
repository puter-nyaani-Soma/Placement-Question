#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s="PAYPALISHIRING";
    int rows=3,i;
    bool reachededge = true;
    int currentline=0;
    vector<string> r(rows,"");
    for(i=0;i<s.length();i++){
        if(currentline==0||currentline==rows-1){
            reachededge = !reachededge;
        }
        r[currentline]+=s[i];
        if(reachededge){
            currentline--;
        }
        else {
         currentline++;
        }

    }
    for(i=0;i<rows;i++){
        cout<<r[i]<<endl;
    }
  
  
}