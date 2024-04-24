#include <iostream> 
using namespace std;

string removeDuplicates(string str) {

    // Base case
    if (str.empty()) {
        return str;
    }

    string ans;

    ans.push_back(str[0]);

    int i = 1;
    while (i < str.length() && str[i] == str[0]) {
        i++;
    }

    return ans + removeDuplicates(str.substr(i));
}

int main() {
    string str;
    cout << "Enter value for string: ";
    cin >> str;

    string ans = removeDuplicates(str);

    cout << "String before: " << str << endl;
    cout << "String after: " << ans << endl;

    return 0;
}
