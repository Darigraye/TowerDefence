#pragma once

class Command {
public:
	virtual void execute() = 0;

	virtual ~Command() {}
};

class StateMachine {
private:
	short m_level;
	short m_numberStage = 1;
	int m_currentMoney = 0;

public:
	explicit StateMachine(const short level) : m_level(level) {}

	void newStage();

};