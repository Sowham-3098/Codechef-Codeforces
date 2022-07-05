#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin >> word;
    int upper=0,lower=0;
    for(int i=0;i<word.size();i++){
        if(isupper(word[i])){
            upper++;
        }else{
            lower++;

        }
    }
     string word1;
    if(upper>lower){
        for(int i=0;i<word.size();i++){
           word1[i]=tolower(word[i]); 
        }
    }
    for(int i=0;i<word1.size();i++){
      cout << word1[i];
    }
    

   
    
    return 0;
}