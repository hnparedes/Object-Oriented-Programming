#include <iostream>

using namespace std;

// Factorial Functions
// void f1(int n)
// {

//     if (n > 0)
//     {

//         cout << n << " ";
//         f1(n-1);

//     }

// }
// 5 4 3 2 1

// void f2(int n)
// {

//     if (n > 0)
//     {

//         f2(n-1);
//         cout << n << " ";

//     }

// }
// 1 2 3 4 5

// Binary Search
int fun1(int x, int y)
{

    if(x == 0)
    {

        return y;

    }
    else
    {

        return fun1(x-1, x+y);

    }

}

int fun2(int n)
{

    if(n <= 1)
    {

        return n;

    }
    else
    {

        return fun2(n-1) + fun2(n-1);

    }

}

void fun3(int n = 500)
{

    if(n <= 0)
    {

        return;

    }
    
    if(n > 1000)
    {

        return;

    }

    cout << n << " ";

    fun3(2 * n);

    cout << n << " ";

}

int fac1(int n)
{

    if(n == 0 || n == 1)
    {

        return 1;

    }
    else
    {
     
        return n * fac1(n-1);

    }

}

int fac2(int n)
{

    int result = 1;

    for(int i = 1; i <= n; i++)
    {

        result = result * i;

    }

    return result;

}

int main()
{

    // Operators << Don't Match?
    // cout << f1(5) << endl;
    // cout << f2(5) << endl;

    cout << fac1(5) << endl;
    cout << fac2(5) << endl;
    cout << fun1(3, 2) << endl;
    cout << fun2(5) << endl;

    return 0;

}