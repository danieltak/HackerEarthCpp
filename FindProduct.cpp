/**
 * @file FindProduct.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-24
 * 
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
 * Problem
 * You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array Modulo 10^9 + 7

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10^9 + 7.
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h> 
#include <algorithm>

using namespace std;

int main(){
	int num, i;
    long long int product;
	const long long int mod = 1000000007;

//	cout << "Write the number n of elements" << endl;
	scanf("%d", &num);              	                  // Reading input from STDIN
//	printf("Input number is %d.\n", num);       // Writing output to STDOUT

//	cout << "Enter array A with numbers, space separated" << endl;
	vector<long long int> v(num);
	for ( int i=0; i<num; ++i ){
    	cin >> v[i];
	}

    product = 1;
    for (i=0; i < v.size(); i++) {
        product = (product * v[i]) % mod;
    }

    cout << product << endl;
}
