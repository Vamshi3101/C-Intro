#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int arr[26] {0};
    for(int i =0;i<a.length();i++){
        arr[int(a[i]-'a')]++;
    }
    for(int i =0;i<26;i++){
        if(arr[i]!=0){
            cout<<char(i+'a')<<" "<<arr[i]<<"\n";
        }
    }
    return 0;
}