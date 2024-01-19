#pragma once
#include "Entity.h"
#include <vector>
#include "Case.h"

using namespace std;

class AlignmentReaction
{
	vector<Case*> alignedEntity;

public:
	void PutInVector(Case* _entity);
	void DestroyEntity();

	bool Verification(Case* _ball, vector<vector<Case*>> _allCases);
	void InLineVerification(Case* _ball, vector<vector<Case*>> _allCases, const int _direction = 0);
	bool ThreeInARow();
};

