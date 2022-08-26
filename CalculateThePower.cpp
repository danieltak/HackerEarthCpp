/**
 * @file CalculateThePower.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 * https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/
 * Given two number A and B. Calculate the value of AB. Output may be too large so print the answer modulo 10^9+7.

Input:
Input contains two integers A and B separated by space.

Output:
Print value of AB modulo 10^9+7.

Constraints:
Test File 1 to 5:
1<=A<=10
1<=B<=10

Test File 6 to 10:
1<=A<=10^6
1<=B<=10^10
 * 
 */

#include <stdio.h>
#include <iostream>
#include <math.h> 
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
	double num;
	int a, b;

    cin >> a;
    cin >> b;

    num = pow(a,b);

    std::stringstream ss;
    ss.setf(std::ios_base::scientific | std::ios_base::uppercase);
    ss << std::setprecision(2) << num;
    auto result = ss.str();
    cout << result;

}

