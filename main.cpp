#include<bits/stdc++.h>
using namespace std;
#define ll long long 
struct Student {
    ll id;
    string fullname;
};
struct Course {
    ll id;
    string name;
    vector<Student> students;
};



int main() {
    ll n;
    cin>>n;
    vector<Course> courses(n);
    for (int i = 0; i < n; i++) {
        cin>>courses[i].id>>courses[i].name;
        ll id;
        cin>>id
    }
}