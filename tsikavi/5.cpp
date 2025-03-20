#include <iostream>

bool isPalindrome(int n)
{
    int reserved = 0, original = n;
    while(n>0)
    {
        reserved = reserved * 10 + n % 10;
        n /= 10;
    }
    return reserved == original;
}

int main()
{
    std::cout << "palindromes: " << std::endl;
    for(int i = 1; i < 100; i++)
    {
        if(isPalindrome(i))
        {
            int square = i * i;
            if(isPalindrome(square))
            {
                std::cout << i << " (" << square << " )" << std::endl;
            }
        }
    }
}