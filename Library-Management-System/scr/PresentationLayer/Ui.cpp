#include <iostream>
#include <iomanip>
#include <string>



namespace SystemConfig
{
	std::string separator = "=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=-+-=\n";
	short StartPrint = 28;
	std::string delimiter = "#//#";
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

	std::string ReadText(const std::string& msg, short width)
	{
		std::string text;
		std::cout << std::left << std::setw(width) << msg << ": ";
		std::getline(std::cin >> std::ws, text);
		return text;
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