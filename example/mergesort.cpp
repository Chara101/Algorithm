#include <bits/stdc++.h>
using namespace std;

vector<int> Merge_Sort(vector<int> origin, int length){
    //split
    if(length <= 1){
        return origin;
    }
    vector<int> left;
    vector<int> right;
    int mid = length / 2;
    left = origin.assign(origin.begin(), mid - 1);
    right = origin.assign(mid, origin.end());
    left = Merge_Sort(left, left.size());
    right = Merge_Sort(right, right.size());
    //Merge
    vector<int> result;
    int pleft = 0;
    int pright = 0;
    
}

int main(){
    vector<int> v = {2, 5, 3, 1, 4};
    Merge_Sort(v, v.size());
    for(int i = 0; i < v.size(); i++){

    }
    return 0;
}