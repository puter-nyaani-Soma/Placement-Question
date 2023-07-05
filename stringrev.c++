#include <cctype>
#include<iostream>
using namespace std;
int main(){
    int j,i;
    string s,r;
    getline(cin,s);
    r.resize(s.length()+1);   
    for(i=0;i<s.length();i++){
        if(isalpha(s[i])){
            r[s.length()-i-1] =s[i];
        }
        else{
            
            //r.insert(r.begin()+i,s[i]);
            for()

            
        }
        
    }
    cout<<endl<<s<<"---"<<r;
}












