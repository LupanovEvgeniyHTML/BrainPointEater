#include "Scene.hpp"

Scene::Scene()
{
    //
}

void Scene::update()
{
    for (auto &object : objects)
    {  
        object.update();
    }

    // коллизии
}

void Scene::render()
{
    for (auto &object : objects) // рендер в порядке слоёв
    {  
        object.render();
    }
}

void Scene::save()
{
    for (auto &object : objects)
    {  
        object.save();
    }
}