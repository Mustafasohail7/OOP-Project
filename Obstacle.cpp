#include "Obstacle.hpp"

// Unit class is well implemented, no need to change it

Obstacle::Obstacle(SDL_Renderer *rend, SDL_Texture *ast) : gRenderer(rend), assets(ast) {}

void Obstacle::draw(SDL_Renderer *gRenderer, SDL_Texture *assets, SDL_Rect src, SDL_Rect mover) {
   SDL_RenderCopy(gRenderer,assets,&src,&mover);
}

void Obstacle::cutAnimation() {}

void Obstacle::dropObstacles() {}

SDL_Rect Obstacle::getMov(
   // ObjectMov.y+=10;
) {}

SDL_Rect Obstacle::getSrc() {}

bool Obstacle::getIsClicked() {}

void Obstacle::setIsClicked() {}

bool Obstacle::outOfScreen() {}