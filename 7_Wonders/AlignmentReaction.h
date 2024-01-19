#pragma once

#include "Entity.h"
#include <vector>

using namespace std;

class AlignmentReaction
{
    vector<Entity*> alignedEntity;

public:
    void PutInVector(Entity* _entity);
    void DestroyEntity();
};