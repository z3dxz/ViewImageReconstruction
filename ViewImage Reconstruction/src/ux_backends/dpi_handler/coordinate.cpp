#include "coordinate.h"

void coord::AppendSizeToFixedCoordinate(coord::FixedC output, const coord::FixedS& size) {
	output.x += size.w;
	output.y += size.h;
}

void coord::AppendSizeToVirtualCoordinate(coord::VirtualC output, const coord::VirtualS& size) {
	output.x += size.w;
	output.y += size.h;
}