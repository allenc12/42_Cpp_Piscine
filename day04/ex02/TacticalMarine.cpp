#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void ) { std::cout << "Tactical Marine ready for battle" << std::endl; }

TacticalMarine::TacticalMarine( TacticalMarine const &cp ) { *this = cp; }

TacticalMarine::~TacticalMarine( void ) { std::cout << "Aaargh ..." << std::endl; }

TacticalMarine& TacticalMarine::operator=( TacticalMarine const& ) { return *this; }

TacticalMarine* TacticalMarine::clone( void ) const { return new TacticalMarine(*this); }

void TacticalMarine::battleCry( void ) const { std::cout << "For the holy PLOT !" << std::endl; }

void TacticalMarine::rangedAttack( void ) const { std::cout << "* attacks with bolter *" << std::endl; }

void TacticalMarine::meleeAttack( void ) const { std::cout << "* attacks with chainsword *" << std::endl; }
