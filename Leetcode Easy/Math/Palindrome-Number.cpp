#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int original = n;  // Store the original number
    int reverse = 0;

    // Reverse the digits of the number
    while (n > 0)
    {
        int lastdigit = n % 10;  // Extract the last digit
        reverse = reverse * 10 + lastdigit;   // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    // Check if the reversed number is equal to the original number
    return reverse = original;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n; // Read input from the user
    if (palindrome(n))
    {
        cout << n << " is a palindrome." << endl;
    }
    else
    {
        cout << n << " is not a palindrome." << endl;
    }
    return 0;
}
