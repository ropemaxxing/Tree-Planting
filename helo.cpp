#include <iostream>
#include <string>
#include <cstdlib> // For generating random numbers
#include <ctime>   // For seeding random number generator

using namespace std;

class Entity {
protected:
    string name;
    int damage;
public:
    Entity(string n, int d) : name(n), damage(d) {}
    virtual void attack() = 0;
    virtual void display() = 0;
};

class Tree : public Entity {
private:
    int height;
    int health;
public:
    Tree() : Entity("Tree", 0), height(0), health(100) {}

    void grow() {
        height += 1;
        cout << "The tree grows taller. Height is now: " << height << " meters." << endl;
    }

    void display() override {
        cout << "Your tree is " << height << " meters tall." << endl;
        cout << "Tree health: " << health << "%" << endl;
    }

    void water() {
        health += 10;
        cout << "You water the tree. Tree health increased." << endl;
        if (health > 100) {
            health = 100;
        }
    }

    void fertilize() {
        height += 2;
        cout << "You add fertilizer to the tree. It grows faster!" << endl;
    }

    int getHeight() {
        return height;
    }

    void damage(int amount) {
        health -= amount;
        if (health < 0) {
            health = 0;
        }
        cout << "Oh no! Your tree was damaged. Tree health is now: " << health << "%" << endl;
    }

    void attack() override {
        // Trees don't attack
    }
};

class Enemy : public Entity {
public:
    Enemy(string n, int d) : Entity(n, d) {}
    virtual ~Enemy() {} // Make the destructor virtual

    virtual void attack() override {
        cout << "A " << name << " appears and attacks your tree!" << endl;
    }

    virtual void display() override {
        cout << "A " << name << " appears with damage: " << damage << endl;
    }
};

class EnemyList {
private:
    Enemy* head;
public:
    EnemyList() : head(nullptr) {}

    void addEnemy(string name, int damage) {
        Enemy* newEnemy = new Enemy(name, damage);
        newEnemy->next = head;
        head = newEnemy;
    }

    void displayEnemies() {
        Enemy* current = head;
        while (current != nullptr) {
            current->display();
            current = current->next;
        }
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void clear() {
        while (head != nullptr) {
            Enemy* temp = head;
            head = head->next;
            delete temp;
        }
    }

    ~EnemyList() {
        clear();
    }

    Enemy* getHead() {
        return head;
    }
};

void checkTreeStat(Tree& myTree) {
    myTree.display();
}

int main() {
    srand(time(0)); // Seed random number generator

    Tree myTree;
    EnemyList enemies;

    cout << "Welcome to the Tree Planting Game!" << endl;
    cout << "You have a small tree. Let's help it grow." << endl;

    while (true) {
        cout << "What would you like to do?" << endl;
        cout << "1. Plant a tree" << endl;
        cout << "2. Water the tree" << endl;
        cout << "3. Add fertilizer" << endl;
        cout << "4. Fight enemies" << endl;
        cout << "5. Check tree stats" << endl;
        cout << "6. Quit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                myTree.grow();
                break;
            case 2:
                myTree.water();
                break;
            case 3:
                myTree.fertilize();
                break;
            case 4:
                if (!enemies.isEmpty()) {
                    Enemy* current = enemies.getHead();
                    while (current != nullptr) {
                        current->attack();
                        myTree.damage(current->damage);
                        current = current->next;
                    }
                } else {
                    cout << "There are no enemies to fight. Your tree is safe for now." << endl;
                }
                break;
            case 5:
                checkTreeStat(myTree);
                break;
            case 6:
                cout << "Thanks for playing! Goodbye." << endl;
                enemies.clear();
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
                break;
        }

        // Generate random enemies
        if (rand() % 3 == 0) {
            int randomDamage = rand() % 20 + 10;
            string enemyName = "Enemy" + to_string(rand() % 1000);
            enemies.addEnemy(enemyName, randomDamage);
        }

        cout << endl;

        // Display current enemies
        if (!enemies.isEmpty()) {
            cout << "Current enemies:" << endl;
            enemies.displayEnemies();
        }
    }

    return 0;
}
