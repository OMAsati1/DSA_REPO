#include <iostream>
#include <vector>
using namespace std;

// Function to find and store prime numbers in a range
vector<int> findPrimesInRange(int m, int n)
{
    vector<int> ans;
    for (int num = m; num <= n; num++)
    {
        bool isPrime = true;
        if (num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            ans.push_back(num);
        }
    }
    return ans;
}

int main()
{
    int m, n;
    cout << "Enter the range (m to n): ";
    cin >> m >> n;

    vector<int> primes = findPrimesInRange(m, n);

    cout << "Prime numbers in the range [" << m << ", " << n << "] are: ";
    for (int prime : primes)
    {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
