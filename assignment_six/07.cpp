#include <iostream>

// Define an inline function to compute the square of an integer
inline int square(int x)
{
    return x * x;
}

int main()
{
    int num, result;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Call the inline function to compute the square
    result = square(num);

    std::cout << "The square of " << num << " is " << result << std::endl;

    return 0;
}
