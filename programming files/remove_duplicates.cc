#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    vector<int> unique_arr;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=1; i<n; i++){
        if(i == 1 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i+1]);
        }
        else{
            removed_elements.push_back(arr[i+1]);
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=1; i<arr.size(); i++){
        cout << arr[i+1] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=1; i<unique_arr.size(); i++){
        cout << unique_arr[i+1] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=1; i<removed_elements.size(); i++){
        cout << removed_elements[i+1] << " ";
    }
    cout << endl;
    return 0;
}
