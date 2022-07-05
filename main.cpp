#include <pthread.h>

#include <SFML/Graphics.hpp>

#include "Scene.hpp"
#include "BrainPointEaterScene.hpp"

sf::Event event;
void EventHandler();

int screenWidth = 900;
int screenHeight = 600;
sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "SFML works!");
sf::Color backgroundColor(230, 200, 155, 255);

Scene* scene = new BrainPointEaterScene();

int main()
{
    while (window.isOpen())
    {
        EventHandler();

        window.clear(backgroundColor);

        scene->update();
        scene->render();

        window.display();
    }

    scene->save();
    return 0;
}

void EventHandler()
{
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
            break; 

        case sf::Event::KeyPressed:
            
            if (event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
            break;
        
        default:
            break;
        }
    }
}