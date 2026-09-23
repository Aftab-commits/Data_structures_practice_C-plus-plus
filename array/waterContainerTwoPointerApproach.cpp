// in this program i will use a two pointer approach to solve the same
// water container problem.
#include<iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    int small;
    int ind1;
    int ind2;


    int max = 0;
    int arr[] = {1,1,11,2,2,2,2,3,4,2,2,2};
    int res;
    int jt;
    for(int i = 0,j = size(arr)-1 ; i<size(arr) || j>=0; jt==1? j--:i++){
        jt =0;
        small = arr[i];
        if(arr[j]<small){
            small = arr[j];
            jt =1;
        }
        if((res = small * (j-i))>max){
            max = res;
            num1 = arr[i];
            num2 = arr[j];
            ind1 = i;
            ind2 = j;
        }

    }
    cout<<"The first boundry is: "<< num1<< ", at index: "<<ind1<< endl;
    cout<<"The second boundry is: "<< num2<< ", at index: "<<ind2<< endl;



    return 0;
}