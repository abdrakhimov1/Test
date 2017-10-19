#include<iostream>
#include<vector>

int main(){
    int NUM, j, max = 0;
    std::cin>>NUM;
    int arr[NUM];
    int arr2[NUM+1];
    for(int i = 0; i < NUM; i++){
    arr2[i] = 1;}
    arr2[NUM] = 0;



    for(int i = 0; i < NUM; i++){
        std::cin >> arr[i];
    }
    for(int i = NUM-1; i>-1; i--){
        j = i;
        while (arr[i] >= arr[j] and j != NUM ) j++;
        arr2[i] += arr2[j];


    }
    for(int i = 0; i < NUM; i++){
            if(arr2[i] > max) max = arr2[i];
            }
    std::cout << max;
    }

