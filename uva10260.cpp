#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map <char, string> mp;
    mp['B']="1";
    mp['F']="1";
    mp['P']="1";
    mp['V']="1";
    mp['C']="2";
    mp['G']="2";
    mp['J']="2";
    mp['K']="2";
    mp['Q']="2";
    mp['S']="2";
    mp['X']="2";
    mp['Z']="2";
    mp['D']="3";
    mp['T']="3";
    mp['L']="4";
    mp['M']="5";
    mp['N']="5";
    mp['R']="6";
    string s;
    while(getline(cin,s)){
        string sum="";
        string temp;
        for(int i=0;i<s.length();i++){
            if(temp!=mp[s[i]]){
                sum+=mp[s[i]];
                temp=mp[s[i]];
            }
        }
        cout<<sum<<endl;
    }
}