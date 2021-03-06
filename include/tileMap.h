#ifndef TILE_MAP_H
#define TILE_MAP_H

#include <SFML/Graphics.hpp>
#include <string>

class myApplication;

class tileMap : public sf::Drawable, sf::Transformable {
    private:
        sf::VertexArray vertices_;
        sf::Texture tile_texture_;
        sf::Vector2u tile_size_;
        sf::Vector2u num_tiles_;
        double h_offset_;  //horizontal offset for rendering the tilemap on the window
        double w_offset_;  //vertical offset for rendering the tilemap on the window
    public:
        tileMap();
        void loadMap(std::vector <int>&, sf::Vector2u, const int, const int, const myApplication&);
        void loadWireFrame(sf::Vector2u, const int, const int, const myApplication&);
        void updateHOffset(const myApplication&);
        void updateWOffset(const myApplication&);
        void setTileSize(sf::Vector2u);
        void setNumTiles(const int, const int);
        void mapInit(sf::Vector2u, const int, const int, const myApplication&);
        void resetVertexMap();
        sf::VertexArray& getVertexMap();
        double getHOffset() const;
        double getWOffset() const;
        sf::Vector2u getTileSize() const;
        sf::Vector2u getNumTiles() const;
        int getRow(const int) const;
        int getCol(const int, const int) const;
        virtual void draw(sf::RenderTarget&, sf::RenderStates) const;
};

#endif //TILE_MAP_H