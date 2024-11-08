#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type){
	this->type = type;
}
ATarget::ATarget(ATarget const &ref){ *this = ref;}
ATarget &ATarget::operator=(ATarget const &ref){
	if(this == &ref)
		this->type = ref.type;
	return *this;
}
ATarget::~ATarget(){}

std::string const &ATarget::getType() const{return (this->type);}

void ATarget::getHitBySpell(ASpell const &spell) const{
	std::cout << getType() << " has been " << spell.getEffects() << "!\n";
}