#include "CRealNumber.h"
#include <cmath>
#include <sstream>
using namespace std;

RealNumber::RealNumber()
{
    x = 0;
}
RealNumber::RealNumber(float y)
{
    x = y;
}
RealNumber::RealNumber(const RealNumber& r)
{
    x = r.x;
}
RealNumber operator+(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x + b.x;
    return t;
}
RealNumber operator-(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x - b.x;
    return t;
}
RealNumber operator*(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x * b.x;
    return t;
}
RealNumber operator/(RealNumber& a, RealNumber& b)
{
    RealNumber t(0);
    t.x = a.x / b.x;
    return t;
 
}
int RealNumber::operator [] (int i)
{
    return (int)x;
}
float RealNumber::operator ()()
{
    float full;
    return modf(x, &full);
}
RealNumber& RealNumber::operator = (const RealNumber& pr)
{
    x = pr.x;
    return *this;
}
RealNumber::operator std::string() const
{
    stringstream ss;
    ss << x;
    return ss.str();
}
ostream& operator << (ostream& out, const RealNumber& a)
{
    out << a.x;
    return out;
}
istream& operator >> (istream& in, RealNumber& a)
{
    in >> a.x;
    return in;
}