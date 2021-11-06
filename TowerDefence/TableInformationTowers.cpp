#include "TableInformationTowers.h"

std::multimap<std::string, info> TableInformationTowers::element =
{
	{ "TowerArchers", { 1, 20 } },
	{ "TowerArchers", { 2, 35 } },
	{ "TowerArchers", { 3, 75 } },

};

int TableInformationTowers::getCount(const std::string& nameTower, const int level) {
	auto iterator = element.equal_range(nameTower);
	int returnValue = 0;

	for (auto current = iterator.first; current != iterator.second; ++current) {
		if (current->second.find(level) != current->second.end()) {
			returnValue = current->second[level];
		}
	}

	return returnValue;
}