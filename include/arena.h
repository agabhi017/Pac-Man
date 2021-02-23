#ifndef ARENA_H
#define ARENA_H

#include "pacMan.h"
#include "enemy.h"
#include "tileMap.h"

class arena{
    private:
        tileMap map_;
        std::vector <int> arena_map_array_;
        pacMan pac_man_;
        enemy enemy_blinky_;
        enemy enemy_blue_;
        enemy enemy_clyde_;
        enemy enemy_inky_;
        enemy enemy_pinky_;
        int map_food_count_;
        bool refresh_tile_map_;
    public:
        arena();
        void setArenaMapArray(myApplication&, const std::string&);
        void arenaInit(myApplication&, const std::string&);
        void loadPacMan(myApplication&);
        void loadEnemies(myApplication&);
        void loadAllMovables(myApplication&);
        void moveAll();
        void drawAll(myApplication&);
        enemy& getEnemy(const std::string&);
        pacMan& getPacMan();
        std::vector <int>& getMapArray();
        
};

#endif //ARENA_H