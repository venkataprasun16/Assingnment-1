#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> helloWorld(int n) {
    vector<string> newstr;
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            newstr.push_back("HelloWorld");
        }
        else if (i % 3 == 0) {
            newstr.push_back("Hello");
        }
        else if (i % 5 == 0) {
            newstr.push_back("World");
        }
        else {
            newstr.push_back(to_string(i));
        }
    }
    return newstr;
}