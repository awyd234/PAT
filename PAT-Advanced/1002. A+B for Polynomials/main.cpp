//
//  main.cpp
//  1002. A+B for Polynomials
//  https://www.patest.cn/contests/pat-a-practise/1002
//
//  Created by Qian Hu on 2017/12/28.
//  Copyright © 2017年 Qian Hu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;
int main(int argc, const char * argv[]) {
    map<int, double> result;
    int n, poly;
    double data;
    cin >> n;
    while (n--) {
        cin >> poly >> data;
        result[poly] += data;
    }
    cin >> n;
    while (n--) {
        cin >> poly >> data;
        result[poly] += data;
        if (result[poly] == 0) {
            result.erase(poly);
        }
    }
    cout << result.size();
    for (map<int, double>::reverse_iterator iter = result.rbegin(); iter != result.rend(); iter++) {
        cout << " " << iter->first << " " << fixed << setprecision(1) << iter->second;
    }
    cout << endl;
    return 0;
}
