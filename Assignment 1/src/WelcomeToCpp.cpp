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
#include"random.h"

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
    return 0;
}


string intToString(int n) {
    // [TODO: fill in the code]
    return "";
}


DocumentInfo statisticsFor(istream& source) {
    DocumentInfo docInfo;
    // [TODO: fill in the code]
    return docInfo;
}

