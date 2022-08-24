/**
 * @file BestIndex.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/
 * Problem
 * 
You are given an array A of N elements. Now you need to choose the best index of this array A. An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices.

To calculate the special sum for any index i , you pick the first element that is A[i] and add it to your sum. Now you pick next two elements i.e. A[i+1] and A[i+2] and add both of them to your sum. Now you will pick the next 3 elements and this continues till the index for which it is possible to pick the elements. For example:

If our array contains 10 elements and you choose index to be  then your special sum is denoted by - (A[3]) + (A[4]+A[5]) + (A[6]+A[7]+A[8])
 , beyond this its not possible to add further elements as the index value will cross the value .

Find the best index and in the output print its corresponding special sum. Note that there may be more than one best indices but you need to only print the maximum special sum.

Input
First line contains an integer  as input. Next line contains  space separated integers denoting the elements of the array .
Output
In the output you have to print an integer that denotes the maximum special sum
 */

#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h> 
#include <algorithm>

using namespace std;

int main(){
	int num;
	int i, j, k, l, x_ini, x_end, sum;
    int v_size;

//	cout << "Write the number n of elements" << endl;
	scanf("%d", &num);              	                  // Reading input from STDIN
//	printf("Input number is %d.\n", num);       // Writing output to STDOUT

//	cout << "Enter array A with numbers, space separated" << endl;

	vector<int> v(num);
	for ( int i=0; i<num; ++i ){
    	cin >> v[i];
	}

/* 	for (i=0;i < v1.size();i++) {
    	printf("%d\n",v1[i]);
	}
 */
    vector<int> v_sum(num);

    v_size = v.size();
    for (i=0;i < v_size;i++) {
        l = 0;
        x_ini = i;
        sum = 0;
        k = v_size - 1 - i;

        while (k >= l) {
            x_end = x_ini + l;

            for(j = x_ini;j<=x_end;j++) {
                sum = sum + v[j];
            }
            l++;
            x_ini = x_end + 1;
            k = k - l;
        }

        v_sum[i] = sum;
	}

    double max = *max_element(v_sum.begin(), v_sum.end());
    cout << max << endl;

}
