#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector <string> v(5);
    int itemsRead = 0;
    string x;
    while (cin >> x) {
        if (x == "end")
            break;
        if (itemsRead == v.size())
            v.resize(v.size() * 2);
        v[itemsRead++] = x;
    }
    for (int i = itemsRead - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }


}
