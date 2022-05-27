#include<iostream>
#include<list>
using namespace std;
struct myHash{
    int bucket;
    list<int> *table;
    myHash(int b){
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key){
        int i = key%bucket;
        table[i].push_back(key);
    }
    void remove(int key){
        int i = key%bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key%bucket;
        for(auto x:table[i]){
            if(x==key)return true;
        }
        return false;
    }
};
int main(){
    myHash h(7);
    h.insert(70);
    h.insert(71);
    h.insert(56);
    h.insert(9);
    h.insert(72);
    h.remove(56);
    cout<<h.search(56);
    return 0;
}