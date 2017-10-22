#pragma once
#include <string>


struct PODs
{
    double a;
    double b;
    double c;
    PODs();
};

struct Strings
{
    std::string a;
    std::string b;
    Strings();
};

struct CArrays
{
    char a[20];
    char b[20];
    char c[20];

    CArrays();
};

struct Mixed
{
    int  a;
    int  b;
    char c[20];

    Mixed();
};

namespace moved
{
Strings get_Strings();
CArrays get_CArrays();
Mixed get_Mixed();
PODs get_PODs();
}
namespace raw
{
Strings get_Strings();
CArrays get_CArrays();
Mixed get_Mixed();
PODs get_PODs();
}
