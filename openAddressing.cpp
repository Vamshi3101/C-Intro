#include<iostream>
#include<vector>
using namespace std;
struct myHash{
    int bucket,size,*arr;
    myHash(int a){
        bucket = a;
        size = 0;
        for(int i =0;i<bucket;i++){
            arr[i] = -1;
        }
    }
    int hash(int key){
        return key%bucket;
    }
    bool search(int key){
        int h = hash(key);
        int i =h;
        while(arr[i]!=-1){
            if(arr[i]==key)return true;
            i = (i+1)%bucket;
            if(i==h)return false;
        }
        return false;
    }
    bool insert(int key){
        if(size==bucket)return false;
        int i = hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)i=(i+1)%bucket;
        if(arr[i]==key)return false;
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool erase(int key){
        int h = hash(key);
        int i =h;
        while(i!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i = (i+1)%bucket;
            if(i==h)return false;
        }
        return false;
    }
};
int main(){
    myHash h(7);
    h.insert(49);
    h.insert(56);
    h.insert(72);
    if(h.search(56)==true){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}