#include <iostream>
#include <vector>
#include "PresentationLayer.h"
#include "../DataAccessLayer/DataAccessLayer.h"
#include "../BusinessLogicLayer/BusinessLogicLayer.h"



namespace Login
{
	bool ShowLoginScreen(const std::vector <Users_Data::stUser>& vUsers, Users_Data::stUser& user)
	{
		for (short Attemps = 3; Attemps >= 1; Attemps--)
		{
			Helpers::ResetScreen();
			Login::PrintHeaderOfLoginScreen(Attemps);

			if (Login::FindUserByUserNameAndPassword(vUsers, user, Helpers::ReadText("Password", 9), Helpers::ReadText("User Name", 9)))
				return true;
			else
			{
				std::cout << "\nInvalid UserName or Password.";
				if (Attemps == 1)
				{
					std::cout << "\nYou don't have any attemps to log in.";
					std::cout << "\nTry after 5 minutes.\n";
					return false;
				}
			}
			Helpers::PressAnyKey("\nPress any key to continue");
		}
		return false;
	}
}