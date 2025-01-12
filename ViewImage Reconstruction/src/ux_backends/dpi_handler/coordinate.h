#pragma once

namespace coord {
	struct VirtualC {
		int x; int y;
	};

	struct FixedC {
		int x; int y;
	};

	struct VirtualS {
		int w; int h;
	};

	struct FixedS {
		int w; int h;
	};

	void AppendSizeToVirtualCoordinate(VirtualC output, const VirtualS& size);
	void AppendSizeToFixedCoordinate(coord::FixedC output, const coord::FixedS& size);
}
