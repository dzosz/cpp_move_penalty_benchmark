
#include "mylib.hpp"
#include <string>

Mixed::Mixed()
{
    a = 199;
    b = 331;
    sprintf(c, "asdaefqfx");
}

Strings::Strings()
{
    a = "adsja zu dsiaidsai 3k3k3k1 al";
    b = "xcmzk cmak ij1j01j asdds";
}

PODs::PODs()
{
    a = 101;
    b = 1399;
    c = -50;
}

CArrays::CArrays()
{
    sprintf(a, "stoo skacxx sa");
    sprintf(b, "czyraaa ssscz ");
    sprintf(c, "ikka hoppa");
}

namespace moved {
Strings get_Strings()
{
    Strings a;
    return std::move(a);
}
CArrays get_CArrays()
{
    CArrays a;
    return std::move(a);
}
Mixed get_Mixed()
{
    Mixed a;
    return std::move(a);
}
PODs get_PODs()
{
    PODs a;
    return std::move(a);
}
}

namespace raw
{
Strings get_Strings()
{
    Strings a;
    return a;
}
CArrays get_CArrays()
{
    CArrays a;
    return a;
}
Mixed get_Mixed()
{
    Mixed a;
    return a;
}
PODs get_PODs()
{
    PODs a;
    return a;
}

}
