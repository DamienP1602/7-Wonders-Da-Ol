#include "AlignmentReaction.h"

void AlignmentReaction::PutInVector(Case* _entity)
{
	alignedEntity.push_back(_entity);
}

void AlignmentReaction::DestroyEntity()
{
	for (Case* _case : alignedEntity)
	{
		alignedEntity.pop_back(); //Inshallah ça passe

	}
}

bool AlignmentReaction::Verification(Case* _ball, vector<vector<Case*>> _allCases)
{
	PutInVector(_ball);

	for (vector<Case*> _cases : _allCases)
	{
		for (Case* _case : _cases)
		{
			if (!_case->entity) continue;
			if (!_ball->entity) continue;

			if (_case->entity->GetColor() == _ball->entity->GetColor())
			{
				if (_case->ID == _ball->ID + 1) InLineVerification(_case, _allCases, 1);
				else if (_case->ID == _ball->ID - 1) InLineVerification(_case, _allCases, -1);
				else if (_case->ID == _ball->ID + 8) InLineVerification(_case, _allCases, 8);
				else if (_case->ID == _ball->ID - 8) InLineVerification(_case, _allCases, -8);
			}
		}
	}
	
	if (ThreeInARow())
	{
		DestroyEntity();
		return true;
	}

	return false;//ta race
}

void AlignmentReaction::InLineVerification(Case* _ball, vector<vector<Case*>> _allCases, const int _direction)
{
	PutInVector(_ball);


	for (vector<Case*> _cases : _allCases)
	{
		for (Case* _case : _cases)
		{
			if (_case->ID == _ball->ID + _direction)
			{
				InLineVerification(_case, _allCases, _direction);
				return;
			}
		}
	}
}

bool AlignmentReaction::ThreeInARow()
{
	return static_cast<int>(alignedEntity.size() >= 3);
}
