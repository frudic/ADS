
#include <iostream>
#include <vector>
#include <stack>
#include <deque>

using namespace std;

int main() {
    int x;
    cin>>x;
    while(x--){
    int n;
    cin>>n;
    deque<int>bil;
    for(int i=n;i>0;i--){
        bil.push_front(i);
        int x = i % bil.size();
        while(x--){
            int k = bil.back();
            bil.pop_back();
            bil.push_front(k);
        }
    }
    for(int i=0;i<n;i++){
        cout<<bil[i]<<" ";
    }
    cout<<'\n';
    }
    return 0;
}