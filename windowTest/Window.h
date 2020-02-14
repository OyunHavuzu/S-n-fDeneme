#pragma once

#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>

/*
class Window
{
sf::RenderWindow* window;
sf::String text;

public:
std::vector<sf::Drawable*> drawables;
Window();
~Window();

void loop();
void draw(std::vector<sf::Drawable*> drawables);
void close();
void clear();
void display();
void setTitle(sf::String text);

};
*/

class IWindow {
public:
	sf::RenderWindow* window = 0;
};

class Iloop : public IWindow {
public:
	void loop();
};

class Idraw : public IWindow {
	std::vector<sf::Drawable*> drawables;
public:
	void draw(std::vector<sf::Drawable*> drawables);
};

class Iclose : public IWindow {
public:
	void close();
};

class Iclear : public IWindow {
public:
	void clear();
	void clear(sf::Color color);
};

class Idisplay : public IWindow {
public:
	void display();
};

class IsetTitle : public IWindow {
public:
	void setTitle(sf::String text);
};

class Icapture : public IWindow {
public:
	sf::Image capture() const;
};

class IgetDefaultView : public IWindow {
public:
	sf::View getDefaultView() const;
};

class IgetSettings : public IWindow {
public:
	sf::ContextSettings getSettings() const;
};

class IgetPossition : public IWindow {
public:
	sf::Vector2i getPossition() const;
};

class IgetSize : public IWindow {
public:
	sf::Vector2u getSize() const;
};

class IgetView : public IWindow {
public:
	sf::View getView() const;
};

class IisOpen : public IWindow {
public:
	bool isOpen() const;
};

class IpollEvent : public IWindow {
public:
	bool pollEvent(sf::Event event);
};

class IsetActive : public IWindow {
public:
	bool setActive(bool active);
};

class IsetFramerateLimit : public IWindow {
public:
	void setFramerateLimit(int limit);
};

class IsetMouseCursor : public IWindow {
public:
	void setMouseCursor(sf::Cursor cursor);
};

class IsetMouseCursorGrabbed : public IWindow {
public:
	void setMouseCursorGrabbed(bool grabbed);
};

class IsetMouseCursorVisible : public IWindow {
public:
	void setMouseCursorVisible(bool visible);
};

class IsetPossition : public IWindow {
public:
	void setPossition(sf::Vector2i possition);
};

class IsetSize : public IWindow {
public:
	void setSize(sf::Vector2u size);
};

class IsetView : public IWindow {
public:
	void setView(sf::View view);
};

class IsetVisible : public IWindow {
public:
	void setVisible(bool visible);
};

class IwaitEvent : public IWindow {
public:
	bool waitEvent(sf::Event event);
};

/*     
class IRendertargetD : public IWindow {                       //Destracterlarýn prototip tanýmlarý hatalý
public:
RenderTarget();
};
*/
