#pragma once
#include <iostream>
#include <string>
using namespace std;
class clsString

{
private : 
	String _Value;
public:

	clsString();
	clsString(string value);
	void setValue(string value);
	String getValue();
	__declspec(property(get = getValue, set = setValue)string Value);
}