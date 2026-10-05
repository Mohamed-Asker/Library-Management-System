#pragma once
#include <iostream>


namespace SystemConfig
{
	extern std::string separator;
	extern short StartPrint;
}

namespace Helpers
{
	void ResetScreen();
	void PressAnyKey(const std::string& msg);
}

namespace Login
{
	void PrintHeaderOfLoginScreen(short Attemps);
}