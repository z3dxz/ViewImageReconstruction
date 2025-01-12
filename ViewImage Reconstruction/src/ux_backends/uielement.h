#pragma once
#include <any>
#include <string>
#include "ui_manager.h"

#include "dpi_handler/coordinate.h"

enum Event {
	event_initialize,
	event_render,
	event_mouse_down,
	event_mouse_up,
	event_hover_in,
	event_hover_out,
	event_hover_out
};

class UIElement : UIManager {
public:
	std::string name;
	coord::VirtualC position;
	coord::VirtualS size;

	// successRate(*ElementProcedure)(Event event)
	bool(*ElementProcedure)(Event);

	UIElement();
};


