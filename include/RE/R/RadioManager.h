#pragma once

namespace RE
{
	namespace RadioManager
	{
		inline bool QPlayerRadioEnabled()
		{
			using func_t = decltype(&RadioManager::QPlayerRadioEnabled);
			static REL::Relocation<func_t> func{ ID::RadioManager::QPlayerRadioEnabled };
			return func();
		}

		inline float QCurrentPlayerFreq()
		{
			using func_t = decltype(&RadioManager::QCurrentPlayerFreq);
			static REL::Relocation<func_t> func{ ID::RadioManager::QCurrentPlayerFreq };
			return func();
		}

		inline void EnablePlayerRadion(bool a_enable, bool a_playOnOffSound)
		{
			using func_t = decltype(&RadioManager::EnablePlayerRadion);
			static REL::Relocation<func_t> func{ ID::RadioManager::EnablePlayerRadio };
			return func(a_enable, a_playOnOffSound);
		}
	}
}
