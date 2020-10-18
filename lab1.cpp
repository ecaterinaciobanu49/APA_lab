#include <iostream>
#include <math.h>

using namespace std;
int iteratii1 = 0, iteratii2 = 0, iteratii3 = 0;
class fibonacci
{
private:
    int n;
public:
    int fib_recursiv(int n)
    {
        iteratii1++;
        if (n < 2)
        {
            return n;
        }
        else if (n >= 2)
        {
            return fib_recursiv(n - 1) + fib_recursiv(n - 2);

        }

    } 
    int fib_iterativ(int n)
    {
        int i = 1;
        int j = 0;
        for (int k = 0; k < n; k++)
        {
            j = j + i;
            i = j - i;
            iteratii2++;
        }
        return j;

    }
    int fib_divizare(int n)
    {
        int i = 1;
        int j = 0;
        int k = 0;
        int h = 1;
        int t;
        int nr = 0;
        while (n > 0)
        {
            if ((n % 2) != 0)
            {
                t = h * j;
                j = i * h + j * k + t;
                i = i * k + t;
                nr++;
            }
            t = h * h;
            h = 2 * k * h + t;
            k = k * k + t;
            n = n / 2;
            iteratii3++;
        }
        return j;


    }

};



int main()
{
    int n;
    cout << "Dati numarul n: ";
    cin >> n;
    fibonacci f;
    cout << "|1| Algoritmul 1 (recursiv) : " << f.fib_recursiv(n) << endl;
    cout << "Numarul de iteratii : " << iteratii1 << endl;
    cout << "|2| Algoritmul 2 (iterativ) : " << f.fib_iterativ(n) << endl;
    cout << "Numarul de iteratii : " << iteratii2 << endl;
    cout << "|3| Algoritmul 3 (divizare) : " << f.fib_divizare(n) << endl;
    cout << "Numarul de iteratii : " << iteratii3 << endl;

    return 0;


}
