#pragma once 
#include <iostream>
#include <vector>
#include "../DataAccessLayer/DataAccessLayer.h"


namespace Login
{
	bool FindUserByUserNameAndPassword(const std::vector <Users_Data::stUser>& vUsers, Users_Data::stUser& user, const std::string& password, const std::string& UserName);
}