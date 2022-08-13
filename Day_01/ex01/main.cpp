#include "Zombie.hpp"

int main()
{
	Zombie A(std::string ("A"));
	A.announce();

	int N = 3;
	Zombie *Horde = zombieHorde(N, "Zooooombiiiiiie");
	if (Horde)
	{
		for (int i = 0; i < N; ++i)
			Horde[i].announce();
	}
	delete[] Horde;
	return (0);
}
