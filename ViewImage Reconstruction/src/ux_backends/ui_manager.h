#pragma once
#include "uielement.h"
#include <vector>

class UIManager {
private:
public:

	std::vector<const UIElement*> elements;

};



/*

UIElement* SearchByName(std::string index) {
	for (UIElement*& element : elements) {
		if (element->name == index) {
			return element; // return pointer to the found element
		}
	}
	return nullptr; // return nullptr if no element is found
}

int CheckIfValidBounds(const Interface* m, const UIElement& element) {
	if (element.bounding_x0 < 0 || element.bounding_y1 < 0 || element.bounding_x1 >= m->width || element.bounding_y1 >= m->height) {
		return false;
	}
	return true;
}

template <typename T>
void CreateElement(Interface* m, std::string name, T& element) {
	UIElement k;
	k.name = name;
	k.bounding_x0 = -1;
	k.bounding_y0 = -1;
	k.bounding_x1 = -1;
	k.bounding_y1 = -1;

	elements.push_back(k);

}

int SetBounds(const UIElement& element, int x0, int y0, int x1, int y1) {
	element.bounding_x0 = x0;
	return true;
}


void DestroyElement(std::string index) {
	UIElement* searched = SearchByName(index);
}

void GetElementIndex() {

}

class UIManager {
public:
	static std::vector<UIElement*>& getElements() {
		static std::vector<UIElement*> elements; // STATIC = ONLY INIT ONCE. Don't forget that
		return elements;
	}

};
*/
