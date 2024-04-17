#include<iostream>
using namespace std;

long long int BinarySearch(int n){

    int start = 0;
    int end = n;

    long long int mid = start + (end - start)/2;

    long long int ans = -1;

    while(start <= end){
        
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        else if(square > n){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int floorSqrt(int n)
{
    int ans = BinarySearch(n);
    return ans;
}

double precision(int num, int n){

    double ans = n;
    double increment = 0.00001;

    while(ans * ans <num){
        ans += increment;
    }

    return ans;
}

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    int store = floorSqrt(num);

    //cout << floorSqrt(num);
    cout << endl;
    cout << "Square root: " << precision(num,store);
    cout << endl;
    cout << endl;
    return 0;
}