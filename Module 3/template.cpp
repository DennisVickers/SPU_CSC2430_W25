#include <iostream>
#include <string>

using namespace std;

// Template function to swap two values of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template class for a simple pair container
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    void display() const {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

int main() {
    // Using the template function to swap integers
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Using the template function to swap strings
    string str1 = "Hello", str2 = "World";
    cout << "\nBefore swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    swapValues(str1, str2);
    cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;

    // Using the template class with different data types
    Pair<int, string> p1(1, "One");
    p1.display();

    Pair<string, double> p2("Pi", 3.14159);
    p2.display();

    return 0;
}
