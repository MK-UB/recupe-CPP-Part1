
#pragma once

#include <iostream>
#include <string>

class ClapTrap {

    protected:
		std::string Name;
		int Hit_points ;
		int Energy_points ;
		int Attack_damage ;
	public:

		//Constructos:
		ClapTrap ();
		ClapTrap (std::string name);
      	ClapTrap(const ClapTrap &cpy);

		//Overload Ops:
      	ClapTrap & operator = (const ClapTrap &src);
      	
		//Destructors:
		~ClapTrap ();
	
		//Methods: 
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
