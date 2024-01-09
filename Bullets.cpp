#include "Bullets.hpp"

void Bullets::draw(SDL_Renderer *rend, SDL_Texture *ast){
        SDL_RenderCopy(gRenderer, assets, &srcB, &moverB);
}

void Bullets::operator ++(){ //operator overloading function for movement of bullet
    moverB.y-=20;
}

SDL_Rect Bullets::getLocation() //bullet location
{
    return moverB;
}

void Bullets::removeBullet() //making the bullet null
{
    moverB.h=0;moverB.w=0;
}

bool Bullets::outOfScreen(){ //checking if the bullet is out of screen
    if ((moverB.y+moverB.h)<0){
        return true;
    }else{
        return false;
    }
}

Bullets::Bullets(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov, int bullet_type):gRenderer(rend), assets(ast)
{ //defining the speed of each bullet(moverB) and generating it accordng to its coordinates(srcB)
    if (bullet_type == 1){
        moverB = {mov.x+30,mov.y-25,40,40};
        srcB = {361,1805,66,66}; 
    }
    else if (bullet_type == 2){
        moverB = {mov.x+35,mov.y-20,30,40};
        srcB = {357,2061,74,66}; 
    }
    else if (bullet_type == 3){
        moverB = {mov.x,mov.y-40,100,70};
        srcB = {305,3933,178,94}; 
    }
    else if (bullet_type == 4){
        moverB = {mov.x,mov.y-25,100,70};
        srcB = {337,1277,114,54};
    }
    else if (bullet_type == 5){
        moverB = {mov.x+35,mov.y-25,30,40};
        srcB = {361,2325,66,58};
    }
    else if (bullet_type == 6){
        moverB = {mov.x+40,mov.y-50,25,45};
        srcB = {377,2573,34,66}; 
    }
}