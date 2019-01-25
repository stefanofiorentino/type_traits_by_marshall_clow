#include <iostream>

int func(...)
{ return 0; }

template<typename T>
typename std::enable_if<std::is_integral<T>::value, int>::type func(T val)
{ return 1; }

int func(float val)
{ return 2; }

int main()
{
    std::cout << func(nullptr) << " ";
    std::cout << func(2) << " ";
    std::cout << func(2.f) << " ";
    std::cout << func(2.0) << "\n";
    return 0;
}