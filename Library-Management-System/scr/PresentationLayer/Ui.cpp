#include <iostream>
#include <iomanip>



namespace SystemConfig
{
	std::string separator = "=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=\n";
	short StartPrint = 28;
}

namespace Helpers
{
	void ResetScreen()
	{
		system("cls");
	}

	void PressAnyKey(const std::string& msg)
	{
		std::cout << msg << "... ";
		system("pause > 0");
	}
}


namespace Login
{
	void PrintHeaderOfLoginScreen(short Attemps)
	{
		std::cout << SystemConfig::separator;
		printf("%*s", SystemConfig::StartPrint + 10, "<<< LOGIN SCREEN >>>\n");
		std::cout << SystemConfig::separator;
		std::cout << "You have " << Attemps << " Attemps to log in:\n";
	}
}