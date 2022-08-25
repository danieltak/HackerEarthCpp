/**
 * @file EasySumSetProblem.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * Problem
 https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/

In this problem, we define "set" is a collection of distinct numbers. For two sets  and , we define their sum set is a set . In other word,  set  contains all elements which can be represented as sum of an element in  and an element in . Given two sets , your task is to find set  of positive integers less than or equals  with maximum size such that . It is guaranteed that there is unique such set.

Input Format

The first line contains  denoting the number of elements in set , the following line contains  space-separated integers  denoting the elements of set .

The third line contains  denoting the number of elements in set , the following line contains  space-separated integers  denoting the elements of set .

Output Format

Print all elements of  in increasing order in a single line, separated by space.

 * 
 */


#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h> 
#include <algorithm>

using namespace std;

int main(){
	int n, m, i, j, x;
    int max, min;

//	cout << "Write the number n of elements" << endl;
	scanf("%d", &n);              	                  // Reading input from STDIN
//	printf("Input number is %d.\n", num);       // Writing output to STDOUT

//	cout << "Enter array A with numbers, space separated" << endl;
	vector<int> a(n);
	for ( int i=0; i<n; ++i ){
    	cin >> a[i];
	}

    scanf("%d", &m);   

    vector<int> c(m);
	for ( int i=0; i<m; ++i ){
    	cin >> c[i];
	}

    // Max
    int max_a = *max_element(a.begin(), a.end());
    int max_c = *max_element(c.begin(), c.end());

    max = max_c - max_a;

    //Min
    int min_a = *min_element(a.begin(), a.end());
    int min_c = *min_element(c.begin(), c.end());

    min = min_c - min_a;

    //Result
    vector<int> r;

    for (i=0; i < a.size(); i++) {
        for (j=min; j <= max; j++) {
            x = j + a[i];
            if(std::find(c.begin(), c.end(), x) != c.end()) {
                /* c contains x */
                r.push_back(j);
                continue;
            } else {
                /* c does not contain x */
            }
        }
    }
    sort( r.begin(), r.end() );
    r.erase( unique( r.begin(), r.end() ), r.end() );
    
    for (auto i: r) {
    std::cout << i << ' ';
    }
}
