

#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

ofstream out;
ifstream in;
int main()
{
    int i = 0;
    int j, q, sum2 = 0;
    int sum1 = 0;
    out.open("C:\\Users\\DELL\\source\\repos\\OperationSystem\\First_list.txt");

    if (out.is_open())
    {

        while (!_kbhit())
        {
            i++;
            j = i % 10;
            out << j << endl;
            //sum1 += j;
            cout << j;
            Sleep(100);

        }
    }
    out.close();

    out.open("C:\\Users\\DELL\\source\\repos\\OperationSystem\\Second_list.txt");

    if (out.is_open())
    {
        for (int k = j; k >= 0; k--)
        {
            out << k << endl;
        }
    }
    out.close();

    in.open("C:\\Users\\DELL\\source\\repos\\OperationSystem\\First_list.txt");
    if (in.is_open())
    {
        while (in >> q)
        {
            sum1 += q;
        }
    }
    in.close();

    in.open("C:\\Users\\DELL\\source\\repos\\OperationSystem\\Second_list.txt");
    if (in.is_open())
    {
        while (in >> q)
        {
            sum2 += q;
        }
    }
    in.close();

    out.open("C:\\Users\\DELL\\source\\repos\\OperationSystem\\Result.txt");

    if (out.is_open())
    {
        int result = sum1 + sum2;
        out << result;
    }
    out.close();

    return 0;
}
