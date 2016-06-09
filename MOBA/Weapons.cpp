#include <SFML/Graphics.hpp>
#include "Collision.h"
#include "Weapons.h"

const char* Weapons::RPG::Katana::SetModel(const char* newModel)
{
	texture.loadFromFile(newModel);

	weaponModel.setTexture(texture);
}

float Weapons::RPG::Katana::SetDamage(float newDamage)
{

}