#pragma once
#include <iostream>
#include "../DataAccessLayer/DataAccessLayer.h"


namespace SystemConfig
{
	extern std::string separator;
	extern short StartPrint;
	extern std::string delimiter;
}

namespace Helpers
{
	void ResetScreen();
	void PressAnyKey(const std::string& msg);
	std::string ReadText(const std::string& msg, short width);
}

namespace Login
{
	void PrintHeaderOfLoginScreen(short Attemps);
	bool ShowLoginScreen(const std::vector <Users_Data::stUser>& vUsers, Users_Data::stUser& user);
}