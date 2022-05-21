#include<bits/stdc++.h>
using namespace std;

/*
    Calculating frequency of characters in a string.

    sample Input: str = "Test String";

    output: e => 1
            g => 1
            i => 1
            n => 1
            r => 1
            s => 2
            t => 3
*/

int main(){
    string str = "Test String";
    int i;
    int freq[256] = {0};

    for(i = 0; i < str.length(); i++){
        /*
        Iterating through the string and increasing
        the value of freq array index based on
        the ASCII of the character
        */
        freq[tolower(str[i])]++;
    }
    for(i = 0; i < 256; i++){
        if(freq[i] != 0 && i != 32){
            printf("%c => %d\n",i,freq[i]);
        }
    }

    return 0;
}
