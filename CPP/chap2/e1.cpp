#include <iostream>

struct Player 
{
	struct Stats
	{
		int health;
	}
	stats;
};

int main()
{
	Player p1;
	p1.stats.health = 100;

	int& hp = p1.stats.health;
	hp-=20;
	std::cout << "현재 체력: " << p1.stats.health << std::endl;
	std::cout << "현재 체력: " << hp << std::endl;
	return 0;
}

