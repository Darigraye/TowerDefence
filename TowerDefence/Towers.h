#pragma once

#include "Unit.h"

class Castle : public Unit {
private:
	int m_health;

	enum class StateLife {
		ALIVE = 0,
		DEAD = 1,
	};

	StateLife m_state;

	void setHealth(const short level);
public:
	Castle(const short level);

	void getDamaged(const Monster& monster) noexcept;
	inline const StateLife& getState() const noexcept { return m_state; }

};

class TowerArchers : public Tower {
private:
	static const short maxLevel = 3;

	virtual void setCharacteristic(const short level) override;

public:
	TowerArchers();

	virtual void levelUp() override;

};

class TowerCannon : public Tower {
private:
	static const short maxLevel = 3;

	virtual void setCharacteristic(const short level) override;

public:
	TowerCannon();

	virtual void levelUp() override;

};

class TowerMagician : public Tower {
private:
	static const short maxLevel = 3;

	virtual void setCharacteristic(const short level) override;

public:
	TowerMagician();

	virtual void levelUp() override;
	virtual void damage(Monster& monster) override;

};

class TowerMusketeer : public Tower {
private:
	static const short maxLevel = 2;

	virtual void setCharacteristic(const short level) override;

public:
	TowerMusketeer();

	virtual void levelUp() override;

};