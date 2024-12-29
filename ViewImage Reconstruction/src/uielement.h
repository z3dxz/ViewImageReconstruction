#pragma once
#include "interface.h"
#include <any>

class UIEleTest1 {
public:
	void class_render() {

	}

	void class_init() {

	}
};

class Menu {

};

class UIElement {
	std::string name;
	int bounding_x0;
	int bounding_y0;
	int bounding_x1;
	int bounding_y1;

	render

		efkepfkwefp

	
};

class UIElementHandeler {
public:
	std::Vector epijmeiwfopjowei j

	void CreateUIElemnt()[

	]
};

class ButtonHand; ler{

	void CreateButotn
		'
	
	'
}

class Button : UIElement{
public:
	

public:
	std::string text;
	int typeoFButton;
	bool isOn;
	bool isSelectable;
private:
};

class UIElement {
	
	std::string name;
	int bounding_x0;
	int bounding_y0;
	int bounding_x1;
	int bounding_y1;
	

	std::any sfml_res;

	// Utility function to safely access the stored resource
	template <typename T>
	T* getResource() {
		try {
			return std::any_cast<T>(&sfml_res);
		}
		catch (const std::bad_any_cast&) {
			std::cerr << "Error: Incorrect type access for sfmlResource!" << std::endl;
			return nullptr;
		}
	}

	virtual int render(int, int);
	virtual int init(int, int);

	virtual int sendEvent(Event);


};

enum Event {
	mb1,
	mb2,
	hoverIn,
	hoverOut
};

class UIManager {
public:
	static std::vector<UIElement*>& getElements() { 
		static std::vector<UIElement*> elements; // STATIC = ONLY INIT ONCE. Don't forget that
		return elements;
	}

};

std::vector<UIElement*> elements;


UIElement* SearchByName(std::string index) {
	for (UIElement*& element : elements) {
		if (element->name == index) {
			return element; // return pointer to the found element
		}
	}
	return nullptr; // return nullptr if no element is found
}

int /*status*/ CheckIfValidBounds(const Interface* m, const UIElement& element) {
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