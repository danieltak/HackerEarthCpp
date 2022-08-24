/**
 * @file numsteps.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-24
 * 
 * 
 * Problem
You are given two arrays a1, a2, ..., an and b1, b2, ..., bn. In each step, you can set ai=ai - bi if ai >= bi. Determine the minimum number of steps that are required to make all a's equal.

Input format

First line:  n
Second line: a1,a2,...,an
Third line: b1,b2,...,bn
Output format

Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

Constraints

1<= n,a,b <=5000

 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h> 

using namespace std;

int main(){
	int num;
	int i, j, k;
	bool flag = false;
	bool gt, eq;

	cout << "Write the number n of elements" << endl;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT

	cout << "Enter 1st array a, space separated" << endl;

	vector<int> v1(num);
	for ( int i=0; i<num; ++i ){
    	cin >> v1[i];
	}

	cout << "Enter 2nd array b, space separated" << endl;
	vector<int> v2(num);
	for ( int i=0; i<num; ++i ){
    	cin >> v2[i];
	}

/* 	for (i=0;i < v1.size();i++) {
    	printf("%d\n",v1[i]);
	}

	for (i=0;i < v2.size();i++) {
    	printf("%d\n",v2[i]);
	} */
	j = 1;
	while(flag == 0){
		eq = true;
		gt = false;
		for (i=0;i < v1.size();i++) {
			if(v1[i] >= v2[i]){
				v1[i] = v1[i] - v2[i];
				gt = true;
			}
		}

		for (i=0;i < ceil(v1.size()/2);i++) {
			for (k=0;k < v1.size();k++) {
				if(v1[i] != v1[k]){
					eq = false;
					break;
				}
			}
		}

		if(eq == true) {
			flag = 1;
			cout << j << endl;
		} else if(gt == false){
			flag = 1;
			cout << -1 << endl;
		} else {
			j++;
		}

	}

}
