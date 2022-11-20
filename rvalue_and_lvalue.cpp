#include <bits/stdc++.h>

using namespace std;

//string randomItem(const vector <string> &arr){
//    return arr[0];
//} // returns random item in lvalue arr
string randomItem(vector <string> &&arr){
    return arr[0];
} // returns random item in rvalue arr


int main() {
    // lvalue
//    string s1 = "hello";
//    string &s2 = s1;
//    cout << s2 << endl;
//    s1 = "salom";
//    cout << s1 << " " << s2 << endl;
//    s2 = "qwerty";
//    cout << &s1 << " " << &s2 << endl;

    vector <string> v{"hello", "world"};
//    cout << randomItem(v) << endl; // invokes lvalue method
    cout << randomItem({"hello", "world"}) << endl; // invokes rvalue method


    // rvalue
//    string q1 = "salom";
//    string &&q2 = "hello";
//    cout << &q1 << " " << &q2 << endl;

    cout << endl;
    return 0;
}