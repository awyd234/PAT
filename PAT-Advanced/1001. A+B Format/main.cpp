//
//  main.cpp
//  1001. A+B Format
//  https://www.patest.cn/contests/pat-a-practise/1001
//
//  Created by Qian Hu on 2017/12/28.
//  Copyright © 2017年 Qian Hu. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, count = 0;
    int result;
    stack<char> outcome;
    cin >> a >> b;
    result = a + b;
    if (result < 0) {
        cout << '-';
        result = -result;
    } else if (result == 0) {
        cout << '0';
    }
    while (result > 0) {
        outcome.push('0' + result % 10);
        result /= 10;
        count ++;
        if (count == 3 && result > 0) {
            outcome.push(',');
            count = 0;
        }
    }
    while (!outcome.empty()) {
        cout << outcome.top();
        outcome.pop();
    }
    cout << endl;
    return 0;
}
