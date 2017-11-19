#ifndef _LEVELSYSTEM_
#define _LEVELSYSTEM_

#include "Subjects\Core\Main.h"

class CLevelSystem {

private:

	int level;
	int xp;

public:
	
	void startLevelSystem();

	int getXP() { return xp; }
	int getLevel() { level = getXP() / 1000; return level; }

	int onKillAdd(int kXP) { xp = kXP + xp; }
	int onWinAdd(int wXP) { xp = wXP + xp; }

};


#endif // !_LEVELSYSTEM_
