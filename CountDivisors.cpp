/**
 * @file CountDivisors.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
 * Problem
 * 
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.
 */


#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int l, r, k, i;
    int sum = 0;

//	cout << "Enter array A with numbers, space separated" << endl;

    cin >> l;
    cin >> r;
    cin >> k;

    for(i=l; i<=r; i++){
        if(i % k == 0){
            sum++;
        }
    }
    cout << sum << endl;
}
