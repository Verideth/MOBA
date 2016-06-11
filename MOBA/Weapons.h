#pragma once

namespace Weapons
{
	class RPG
	{
	public:
		sf::Vector2f GetSize();
		sf::Vector2f GetPos();

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

	private:
		float x;
		float y;
		float width;
		float height;
	};
};