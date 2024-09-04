#include <iostream>

class Entity {
	virtual void Print() {}
};
class Player : public Entity {

};
class Enemy : public Entity {

};

int main() {

	Player* player = new Player();
	Entity* e = player;
	Player* e0 = (Player*)e;

	Player* e3 = dynamic_cast<Player*>(e);

	system("pause");

	return 0;
}