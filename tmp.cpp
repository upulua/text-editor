#include <iostream>

using namespace std;

int y(int &)
{
    return 1;
}

int y(int &&)
{
    return 2;
}

template <typename T>
int f(T &&x) { return y(x); }
template <typename T>
int g(T &&x) { return y(std::move(x)); }

int main()
{
    int i = 10;
    cout << f(i) << f(23);
    cout << g(i) << g(23);
}
