#include <SFML/Graphics.hpp>
#include "Player.h"
#include <list>

std::list<sf::RectangleShape> gameObjs;
Player pl = Player(50, 50);

void collision(sf::RectangleShape& testRect) {
    float plx1 = pl.getXPos(), plx2 = pl.getXPos() + pl.getXSize();
    float ply1 = pl.getYPos(), ply2 = pl.getYPos() + pl.getYSize();
    float obx1 = testRect.getPosition().x, obx2 = testRect.getPosition().x + testRect.getSize().x;
    float oby1 = testRect.getPosition().y, oby2 = testRect.getPosition().y + testRect.getSize().y;

    if (ply2 > oby1 && ply1 < oby2 && plx2 > obx1 && plx1 < obx2) {
        float moveX = abs(plx1 - obx2), moveY = abs(ply1 - oby2);
        if (abs(plx2 - obx1) < abs(plx1 - obx2)) {
            moveX = -abs(plx2 - obx1);
        }
        if (abs(ply2 - oby1) < abs(ply1 - oby2)) {
            moveY = -abs(ply2 - oby1);
        }
        if (abs(moveX) < abs(moveY)) {
            moveY = 0;
        } else {
            moveX = 0;
        }

        pl.move(moveX, moveY);
    }
}
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setFramerateLimit(60);

    sf::RectangleShape testRect = sf::RectangleShape(sf::Vector2f(100, 200));
    testRect.setFillColor(sf::Color(100, 100, 100));
    testRect.setPosition(sf::Vector2f(100, 100));
    gameObjs.push_back(testRect);

    int xMove, yMove;

    while (window.isOpen()) {
        xMove = 0;
        yMove = 0;
        
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Right)) {
            xMove++;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Left)) {
            xMove--;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Up)) {
            yMove--;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Down)) {
            yMove++;
        }
        pl.move(xMove, yMove);

        window.clear(sf::Color::Black);
        for (auto iter = gameObjs.begin(); iter != gameObjs.end(); iter++) {
            window.draw(*iter);
            collision(*iter);
            window.draw(pl.draw());
        }
        window.display();
    }

    return 0;
}