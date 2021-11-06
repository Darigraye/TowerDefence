#include "Towers.h"
#include "TableInformationTowers.h"

void Castle::setHealth(const short level) {
	const int healthAtFirstLevel = 20;

	m_health = healthAtFirstLevel * level / 2;
}

Castle::Castle(const short level)
	: Unit(level), m_state(stateLife::ALIVE) {

	setHealth(level);
}

void Castle::getDamaged(const Monster& monster) noexcept {
	m_health -= monster.giveDamage();

	if (m_health <= 0) {
		m_state = stateLife::DEAD;
	}
}

void TowerArchers::setCharacteristic(const short level) {
	m_damage = level;
	m_attackSpeed = 2 * level - 1;
	m_radius = 10 * level - 5;
	m_cost = TableInformationTowers::getCount("TowerArchers", level);
}

TowerArchers::TowerArchers()
	: Tower() {

	setCharacteristic(m_level);
}

void TowerArchers::levelUp() {

}
	  