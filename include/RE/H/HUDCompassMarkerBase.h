#pragma once

namespace RE
{
	class __declspec(novtable) alignas(0x08) HUDCompassMarkerBase : BSGFxShaderFXTarget
	{
	public:
		// members
		bool showHudWarningColor;  // B0
	};
	static_assert(sizeof(HUDCompassMarkerBase) == 0xB8);
}
