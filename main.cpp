#include <iostream>
#include <string>
using namespace std;

long long calculate(const string& op, long long a, long long b) {
    if (op == "add") return a + b;
    if (op == "sub") return a - b;
    if (op== "mul") return a * b;
    if (op == "div") return a / b;
    // OPERATIONS-END
    return 0;
}

int main() {
    string op;
    long long a, b;
    cin >> op >> a >> b;

    if (op == "div" && b==0 )
    {
        cout << "error"<< endl;
    }
    else if (op != "add" && op !="sub" && op !="mul" && op !="div")
    {
        cout << "invalid"<< endl;
    }
    else
    {
        cout << calculate(op,a,b)<< endl;
    }
    
    return 0;
}