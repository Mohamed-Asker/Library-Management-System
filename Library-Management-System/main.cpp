#include <iostream>
#include <vector>
#include "scr/DataAccessLayer/DataAccessLayer.h"
#include "scr/PresentationLayer/PresentationLayer.h";



int main()
{
	std::vector <Users_Data::stUser> vUsers = Users_Data::LoadUserData("D:/MA-DevVault/Projects/Library-Management-System/Library-Management-System/scr/Data/UsersData.txt", SystemConfig::delimiter);
	Users_Data::stUser user;
	while (Login::ShowLoginScreen(vUsers, user))
	{

	}
	return 0;
}