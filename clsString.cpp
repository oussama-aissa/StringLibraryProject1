#include "clsString.h"

clsString::clsString()
{
	_Value = "";
}
clsString::clsString(string value)
{
	_Value = value;
}
void clsString::setValue(string value)
{
	_Value = value;
}
String clsString::getValue()
{
	return _Value;
}