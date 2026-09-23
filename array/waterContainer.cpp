// here is the problem i have to solve:
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

// Example 2:

// Input: height = [1,1]
// Output: 1

 

// Constraints:

//     n == height.length
//     2 <= n <= 105
//     0 <= height[i] <= 104

// first i will try this by loops:
#include<iostream>
using namespace std;

int main(){
    int max;
    int ind1;
    int ind2;
    int small;
    int count;
    int res;
    int num1;
    int num2;



    int arr []= {1,1,11,2,2,2,2};

    max = 0;

    for(int i = 0; i<size(arr); i++){
        count = 0;
        for(int j = i; j<size(arr); j++){
            small = arr[i];
            if(j<i){
                small = arr[j];
            }
            if((res = small *count )> max){
                max = res;
                num1 = arr[i];
                num2 = arr[j];
                ind1 = i;
                ind2 = j;
            }
            count++;
        }
    }
    cout<<"The first boundry is: "<< num1<< ", at index: "<<ind1<< endl;
    cout<<"The second boundry is: "<< num2<< ", at index: "<<ind2<< endl;




    return 0;
}