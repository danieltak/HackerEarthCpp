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
 * https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/lola-and-candies-36b57b1b/
 * Problem
 * 
Alice loves candies, so she went into a candy shop. Now the shopkeeper sells candies in packets and all packets contain an odd number of candies (1, 3, 5, 7.....). Alice wants exactly  candies but she also loves patterns so she decided to buy candies only if the number of candies in the packets is consecutive and distinct (means she cannot buy the same candy packet more than once) and the sum of all the candies in those packets is exactly .

Alice has an infinite amount of money and the shopkeeper also has infinite amount candy packets, so Alice wonders how many different sets of candy packets she can buy.

Find the number of different sets of candy packets that Alice can buy.

Input format

The first and the only line contains a single integer .

Output format

Print a single integer denoting the number of different sets of candy packets Alice can buy.
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h> 
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int num, sum;
	int i, j, k;
    int v_size;
    string comb;

//	cout << "Write the number n of elements" << endl;
	scanf("%d", &num);              	                  // Reading input from STDIN
//	printf("Input number is %d.\n", num);       // Writing output to STDOUT

    vector<int> v;
    vector<string> results;

    //Create array with odd numbers in range
    for (i = num;i > 0;i--) {
      if(i%2!=0){
        v.push_back(i);
      }
	}
    v_size = v.size();
    k = 0;

    // Recurssive combinations
    for (i = 0;i <= v_size;i++) {
        sum = 0;
        comb = "";
        for (j = i;j <= v_size;j++) {
            sum = sum + v[j];
            comb.append(to_string(v[j]));
            comb.append(" ");
            if (sum == num){
                results.push_back(comb);
                k++;
                break;
            }
        }
        
    }

    cout << k << endl;

}
