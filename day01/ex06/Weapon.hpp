#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

public:
	Weapon( void );
	Weapon( std::string );
	~Weapon( void );

	std::string getType( void ) const;
	void setType( std::string );
	
private:
	std::string _type;

};

#endif /* WEAPON_HPP */
