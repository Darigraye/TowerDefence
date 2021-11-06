#pragma once

#include <map>
#include <string>

using info = std::map<int, int>;

class TableInformationTowers {
private:
	static std::map<std::string, info> element;

public:
	static int getCount(const std::string& nameTower, const int level) { 
		return element[nameTower][level];
	}
};