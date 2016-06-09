#pragma once

class Weapons 
{
	class RPG
	{
		class Katana
		{
		public:
			const char* SetModel(const char* model);
			float SetDamage(float newDamage);

		private:
			sf::Texture texture;
			sf::Sprite weaponModel;
		};
		
		class Magnum
		{
		public:
			const char* SetModel(const char* model);
			float SetDamage(float newDamage);

		private:

		};
	};
};