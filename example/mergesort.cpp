#include <bits/stdc++.h>
using namespace std;

vector<int> Merge_Sort(vector<int> origin, int length){
    //split
    if(length <= 1){ //分割到最小單位
        return origin;
    }
    int mid = length / 2; //取中間位置
    vector<int> left(origin.begin(), origin.begin() + mid);
    vector<int> right(origin.begin() + mid, origin.end());
    left = Merge_Sort(left, left.size());
    right = Merge_Sort(right, right.size());
    //Merge
    vector<int> result;
    int pleft = 0;
    int pright = 0;
    while(pleft < left.size() && pright < right.size()){
    	if(left[pleft] < right[pright]){
    		result.push_back(left[pleft]);
    		pleft++;
		}
        else{
            result.push_back(right[pright]);
            pright++;
        }
	}
    while(pleft < left.size()){
        result.push_back(left[pleft]);
        pleft++;
    }
    while(pright < right.size()){
        result.push_back(right[pright]);
        pright++;
    }
	return result;
}

int main(){
    vector<int> v = {2, 5, 3, 1, 4};
    v = Merge_Sort(v, v.size());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
