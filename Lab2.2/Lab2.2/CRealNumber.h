#pragma once
#include <iostream>

class RealNumber
{
	float x;
public:
	RealNumber();
	RealNumber(float);
	RealNumber(const RealNumber&);

	float GetX() const { return x; }
	void SetX(float value) { x = value; }

	friend RealNumber operator + (RealNumber&, RealNumber&);
	friend RealNumber operator - (RealNumber&, RealNumber&);
	friend RealNumber operator * (RealNumber&, RealNumber&);
	friend RealNumber operator / (RealNumber&, RealNumber&);
	int operator [] (int);
	float operator () ();
	RealNumber& operator = (const RealNumber&);

	operator std::string() const;

	friend std::ostream& operator << (std::ostream&, const RealNumber&);
	friend std::istream& operator >> (std::istream&, RealNumber&);
};
