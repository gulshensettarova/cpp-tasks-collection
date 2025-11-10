#include <string>
using namespace std;

string reverseString(string s) {
    string reversed = "";
    for(int i = s.length() - 1; i >= 0; i--)
        reversed += s[i];
    return reversed;
}
 
