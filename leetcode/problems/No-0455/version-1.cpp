#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& children, vector<int>& cookies) {
        sort(children.begin(), children.end());
        sort(cookies.begin(), cookies.end());
        int child = 0, cookie = 0;
        while (child < children.size() && cookie < cookies.size()) {
            if (children[child] <= cookies[cookie]) ++child;
            ++cookie;
        }
        return child;
    }
};

int main() {
    vector<int> children, cookies;
    int arrayChildren[] = {1,2,3}, arrayCookies[] = {1,1};
    children.assign(arrayChildren, arrayChildren+3);
    cookies.assign(arrayCookies, arrayCookies+2);
    
    Solution solution;
    
    int out = solution.findContentChildren(children, cookies);
    
    cout << "Output : " << out;
}