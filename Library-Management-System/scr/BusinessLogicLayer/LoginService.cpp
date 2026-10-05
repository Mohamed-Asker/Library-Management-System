#include <iostream>
#include <vector>
#include "../DataAccessLayer/DataAccessLayer.h"



namespace Login
{
	bool FindUserByUserNameAndPassword(const std::vector <Users_Data::stUser>& vUsers, Users_Data::stUser& user, const std::string& password, const std::string& UserName)
	{
		for (const Users_Data::stUser& tempUser : vUsers)
		{
			if (tempUser.UserName == UserName && tempUser.UserPassword == password)
			{
				user = tempUser;
				return true;
			}
		}
		return false;
	}
}