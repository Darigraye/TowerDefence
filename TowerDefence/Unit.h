#pragma once

class Unit {
protected:
	short m_level;

public:
	Unit(const int level) : m_level(level) {}

	virtual ~Unit() {}

};

class Monster;

class Tower : public Unit {
protected:
	static const short m_startLevel = 1;

	int m_damage;
	int m_attackSpeed;
	int m_cost;
	short m_radius;

	virtual void setCharacteristic(const short level) = 0;

public:
	Tower() : Unit(m_startLevel) {}

	virtual void levelUp() = 0;
	virtual void damage(Monster& monster);

	virtual ~Tower() {}

};

class Monster : public Unit {
protected:
	int m_damageToCastle;
	int m_health;
	short m_speed;

public:
	explicit Monster(const short level);

	virtual void move();
	inline int giveDamage() const noexcept { return m_damageToCastle; }

	virtual ~Monster() {}

};

