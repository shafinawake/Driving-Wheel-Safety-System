#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    const int numInputs = 5;
    const int totalCombinations = 1 << numInputs;


    cout << "Decimal A   B   C   D   E   | F\n";
    cout << "-----------------------------------\n";


    for (int i = 0; i < totalCombinations; ++i)
    {
        bitset<numInputs> bits(i);
        int countOnes = bits.count();
        int F = (countOnes < 3) ? 1 : 0;
        cout << i << "\t";

        for (int j = numInputs - 1; j >= 0; --j)
        {
            cout << bits[j] << "   ";
        }
        cout << "| " << F << "\n\n";
    }

    return 0;
}
