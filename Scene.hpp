#pragma once

#include <vector>
#include "Object.hpp"

using namespace std;

class Scene
{
    public:
        Scene();
        void update();
        void render();
        void save();

        vector<Object> objects;
};