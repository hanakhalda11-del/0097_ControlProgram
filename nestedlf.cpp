#include <iostream>
using namespace std;

float Rata_rata(float a, float b)
{
    return (a+b)/2;
}

string Status_lulus(float r)
{
    if (r >= 60)
        if(r > 80)
        {
            return "Lulus Cumlaude";
        }
        else 
        {
            return "Lulus Baik";
        }
        else
            return "Gagal";
}

