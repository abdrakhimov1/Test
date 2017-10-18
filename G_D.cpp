#include<iostream>
#include<vector>

int main(){
    int NUM;
    int arr[NUM];
    int c = 0;
    std::vector <int> arr2;

    std::cin >> NUM;

    for(int i = 0; i < NUM; i++){
        int t;
        std::cin >> t;
        arr[i] = t;
            }

    for(int j = 0; j < NUM; j++){
        if(arr2.back() < arr[j]) arr2.push_back(arr[j]);
    }
    std::cout << arr2.size();
}
