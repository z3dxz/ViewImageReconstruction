#define SFML_STATIC
#include "interface.h"
#include "uielement.h"


void init(Interface* m) {


    CreateElement(m, "Test Element");

}

void render(Interface* m) {



}


int main() {

    Interface gp;
    gp.window.create(sf::VideoMode(1024, 768), "ViewImage ");
    gp.window.setFramerateLimit(60);

    init(&gp);

    while (gp.window.isOpen())
    {
        sf::Event event;
        while (gp.window.pollEvent(event))
        {
            render(&gp);
            if (event.type == sf::Event::Closed)
                gp.window.close();
        }
    }

}