#pragma once

#include <map>
#include <string>

using info = std::map<int, int>;

class TableInformationTowers {
private:
	static std::multimap<std::string, info> element;

public:
	static int getCount(const std::string& nameTower, const int level) { 
		auto iterator = element.equal_range(nameTower);
		int returnValue = 0;

		for (auto current = iterator.first; current != iterator.second; ++current) {
			if (current->second.find(level) != current->second.end()) {
				returnValue = current->second[level];
			}
		}

		return returnValue;
	}
};