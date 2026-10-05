#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "DataAccessLayer.h"


namespace Users_Data
{
	stUser ConvertUserLineDataToRecord(std::string& line, const std::string& delimiter)
	{
		stUser user;
		std::vector <std::string> vUser = Data_Processing::split(line, delimiter);

		user.UserName = vUser[0];
		user.UserPassword = vUser[1];
		user.permission = std::stoi(vUser[2]);

		return user;
	}

	std::vector <stUser> LoadUserData(const std::string& FileName, const std::string& delimiter)
	{
		std::fstream file;
		std::vector <stUser> vUsers;
		file.open(FileName, std::ios::in);

		if (file.is_open())
		{
			std::string line;
			while (std::getline(file, line))
				vUsers.push_back(ConvertUserLineDataToRecord(line, delimiter));

			file.close();
		}
		return vUsers;
	}
}