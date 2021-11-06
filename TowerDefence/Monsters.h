#pragma once

#include "Unit.h"

class Orc : public Monster {
public:
	explicit Orc(const short level);

};

class BigOrc : public Orc {
public:
	explicit BigOrc(const short level);

};

class SmallOrc : public Orc {
public:
	explicit SmallOrc(const short level);

};

class Skeleton : public Monster	 {
public:
	explicit Skeleton(const short level);

};

class Lair {
public:
	void spawnMonsters(const short numberStage);

};