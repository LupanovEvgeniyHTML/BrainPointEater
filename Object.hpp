#pragma once

class Object
{
    public:
        Object();
        virtual void update();
        virtual void render();
        virtual void save();

        bool collisionEnable;
        int renderLayer;
};