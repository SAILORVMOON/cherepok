#include "Collision.h"


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