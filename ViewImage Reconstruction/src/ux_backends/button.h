#pragma once
#include "uielement.h"

class Button {
private:
	static bool button_state(Event st) {
		switch (st) {

		case event_initialize: {
			break;
		}

		case event_render: {
			break;
		}

		case event_mouse_down: {
			break;
		}
		}
		return true;
	}
public:
	UIElement background;
	UIElement text;
	UIElement back;

	Button(){
		background.name = "Background";
		background.position = coord::VirtualC({4,5});
		background.ElementProcedure = button_state;
	}
};