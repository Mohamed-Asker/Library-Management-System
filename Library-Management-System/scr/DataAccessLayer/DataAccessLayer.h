#pragma once 
#include <iostream>
#include <vector>

namespace Data_Processing
{
	std::vector <std::string> split(std::string& line, const std::string& delimiter);
}

namespace Users_Data
{
	struct stUser
	{
		std::string UserName = "";
		std::string UserPassword = "";
		short permission = 0;
	};

	std::vector <stUser> LoadUserData(const std::string& FileName, const std::string& delimiter);
}