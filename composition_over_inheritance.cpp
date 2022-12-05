#include <iostream>

using namespace std;

// Define the Interface
class Updateable {
	public:
		virtual void update() = 0;
};

// Define the Class which implements the interface
class MovableObject : public Updateable {
	public:
		void update() {
			cout << "update() called from the MovableObject class" << endl;
		}
};

// Define the Class that's dependant on the interface
class PlayableCharacter {
	public:
		void update() {
			// movement_component.update();
			movement_component->update(); // Prince's way requirement
			// movement_component.update(); // Prince's way without pointer 
		}
	private:
		// Updateable movement_component = MovableObject(); // Penaz's way
		Updateable* movement_component = new MovableObject(); // Prince's way
		// Updateable movement_component = new MovableObject(); // Prince's way without pointer
		
};

int main() {
	PlayableCharacter hero;
	hero.update();

	return 0;
}
