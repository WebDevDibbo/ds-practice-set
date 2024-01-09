#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int current_idx = v.size() - 1;
        while(current_idx != 0)
        {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx] < v[current_idx])
        {
            swap(v[parent_idx], v[current_idx]);
            current_idx = parent_idx;
        }
        else 
            break;
        }
    };
    for(int s : v)
        cout << s << " ";
    return 0;
}