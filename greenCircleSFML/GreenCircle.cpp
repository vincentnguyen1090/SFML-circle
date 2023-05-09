//
// Created by vince on 5/2/2023.
//

#include "GreenCircle.h"
#include <SFML/Graphics.hpp>
GreenCircle::GreenCircle()
{
    sf::RenderWindow window(sf::VideoMode(1024, 720, 32), "Test");
    sf::CircleShape circle;
    circle.setFillColor(sf::Color::Green);
    circle.setRadius(250.f);
    circle.setOrigin(sf::Vector2f(circle.getGlobalBounds().width/2, circle.getGlobalBounds().height/2));
    circle.setPosition(1024/2, 720/2);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
}
