#ifndef A_STAR_H
#define A_STAR_H

#include "arena.h"
#include <algorithm>
#include <vector>
#include <set>

namespace aStar
{
    struct Node{
        int index;
        int g, h;
        bool is_source;
        bool is_destination;
        bool is_open;
        Node* parent;
        Node();
        int getCost();    
    };

    class pathFind{
        private:
            int source_index_;
            int destination_index_;
        public:    
            pathFind();
            aStar::Node getNodeFromIndex(int&, const tileMap&, aStar::Node*);
            int getDistance(int&, int&, const tileMap&);
            int getTop(int, const tileMap&, const std::vector <int>&);
            int getBottom(int, const tileMap&, const std::vector <int>&);
            int getRight(int, const tileMap&, const std::vector <int>&);
            int getLeft(int, const tileMap&, const std::vector <int>&);
            std::vector <int> getPath(const int, int, const tileMap&, const std::vector <int>&);
    };
} // namespace aStar


#endif //A_STAR_H