/*
 * File: WelcomeToCpp.cpp
 * --------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the first assignment of CS106B.
 * [TODO: rewrite the documentation]
 *
 * The repeating call sequence is
 *    triggerStackOverflow(137), which calls
 *    [TODO: fill this in], which calls
 *    triggerStackOverflow(137) again.
 */

// Please feel free to add any other #includes you need!
#include "WelcomeToCpp.h"
#include <iostream>
#include <string>
#include "random.h"

using namespace std;


void flipHeads() {
    // [TODO: fill in the code]
    int cnt = 0 ;
    int all_cnt = 0;
    while(cnt<3){
    if (randomBool()){
        cout<<"Flip: heads"<<endl;
        ++cnt;
    }
    else{
        cout<<"Flip: tails"<<endl;
        cnt=0;
    }
    all_cnt++;
    }
    cout<<"It took "<<all_cnt<<"flips to get 3 consecutive heads."<<endl;
}


int nChooseK(int n, int k) {
    // [TODO: fill in the code]
    if(n==0 || k==0 || n==k)
        return 1;
    else{
        return nChooseK(n-1,k-1)+nChooseK(n-1,k);
    }
}


int stringToInt(string str) {
    // [TODO: fill in the code]
    //only  recursively permitted
    if (str==""){
        char val = '0';
        return val-'0';
    }
    if(str[0]=='-'){
        int lastval = str[str.length()-1] - '0';
        string strr = str.substr(1,str.length()-2);
        return -1.0*(stringToInt(strr)*10 + lastval);
    }

    int lastval = str[str.length()-1] - '0';
    string strr = str.substr(0,str.length()-1);
    return stringToInt(strr)*10 + lastval;

}


string intToString(int n) {
    // [TODO: fill in the code]
    if(n<0){
        n = -1.0*n;
        if(n>0&&n<10){
            char ch = char(n+'0');
            string str(1,ch);
            return str;
        }
        else{
            return '-'+intToString(n/10) + intToString(n%10);
        }
    }
    else{
        if(n>=0&&n<10){
            char ch = char(n+'0');
            string str(1,ch);
            return str;
        }
        else{
            return intToString(n/10) + intToString(n%10);
        }
    }

}


DocumentInfo statisticsFor(istream& source) {
    DocumentInfo docInfo;
    // [TODO: fill in the code]
    return docInfo;
}

