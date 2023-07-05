#include <vector>
#include <iostream>
using namespace std;
int main(){
    string str="somasomasoma";
    int rows=4,i;
    vector <string> lines(rows," ");
    bool isedge=true;
    int line=0;
    for(i=0;i<str.length();i++){
        if(line==0||line==rows-1){
            isedge=!isedge;//isedge = true => go down ;else go up
        }
        lines[line]+=str[i];
        if(isedge){
            line--;

        }
        else{
            line++;

        }
    }
    for(i=0;i<rows;i++){
        cout<<lines[i]<<endl;
    }
}