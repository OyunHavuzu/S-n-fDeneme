
#include "Window.h"


void Iloop::loop() {

while (window->isOpen())
{

	sf::Event event;

	while (window->pollEvent(event))
	{

	switch (event.type)
	{
	 case sf::Event::KeyReleased:

	 case sf::Event::Closed:
	  window->close();

	break;
	}
	}
}
}

void Iclose::close() {
window->close();
}
void Iclear::clear() {
window->clear();
}
void Iclear::clear(sf::Color color) {
	window->clear(color);
}
void Idraw::draw(std::vector<sf::Drawable*> drawables) {
 //window->draw(&drawables);                               //hata
}
void Idisplay::display() {
window->display();
}

void IsetTitle::setTitle(sf::String text) {
window->setTitle(text);
}

sf::Image Icapture::capture()const {
	return window->capture();                                              //Return iþlemi ?
}

sf::View IgetDefaultView::getDefaultView()const {
	return window->getDefaultView();
}

sf::ContextSettings IgetSettings::getSettings()const {
	return window->getSettings();
}

sf::Vector2i IgetPossition::getPossition()const {
	return window->getPosition();
}

sf::Vector2u IgetSize::getSize()const {
	return window->getSize();
}

sf::View IgetView::getView()const {
	return window->getView();
}

bool IisOpen::isOpen()const {
	return window->isOpen();
}

bool IpollEvent::pollEvent(sf::Event event) {
	return window->pollEvent(event);
}

bool IsetActive::setActive(bool active) {
	return window->setActive(active);
}

void IsetFramerateLimit::setFramerateLimit(int limit) {
	window->setFramerateLimit(limit);
}

void IsetMouseCursor::setMouseCursor(sf::Cursor cursor) {
	window->setMouseCursor(cursor);
}

void IsetMouseCursorGrabbed::setMouseCursorGrabbed(bool grabbed) {
	window->setMouseCursorGrabbed(grabbed);
}

void IsetMouseCursorVisible::setMouseCursorVisible(bool visible) {
	window->setMouseCursorVisible(visible);
}

void IsetPossition::setPossition(sf::Vector2i possition) {
	window->setPosition(possition);
}

void IsetSize::setSize(sf::Vector2u size) {
	window->setSize(size);
}

void IsetView::setView(sf::View view) {
	window->setView(view);
}

void IsetVisible::setVisible(bool visible) {
	window->setVisible(visible);
}

bool IwaitEvent::waitEvent(sf::Event event) {
	return window->waitEvent(event);
}