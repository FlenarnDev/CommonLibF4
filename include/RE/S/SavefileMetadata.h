#pragma once

namespace RE
{
	class __declspec(novtable) SavefileMetadata
	{
	public:
		void FillDataFromFileName(const char* a_saveName)
		{
			using func_t = decltype(&SavefileMetadata::FillDataFromFileName);
			REL::Relocation<func_t> func{ ID::SavefileMetadata::FillDataFromFileName };
			return func(this, a_saveName);
		}

		// members
		char                                            fileNameA[260];     // 00
		REX::W32::FILETIME                              creationTimeStamp;  // 104
		std::uint64_t                                   playerLevel;        // 110
		std::uint32_t                                   filenameVersion;    // 118
		std::uint32_t                                   saveGameNumber;     // 11C
		std::uint64_t                                   playerID;           // 120
		BSStringT<char, -1, DynamicMemoryManagementPol> playerName;         // 128
		BSStringT<char, -1, DynamicMemoryManagementPol> playerLocID;        // 138
		BSStringT<char, -1, DynamicMemoryManagementPol> playTime;           // 148
		bool                                            isValid;            // 158
		bool                                            hasSaveNumber;      // 159
		bool                                            needsSync;          // 15A
		bool                                            modded;             // 15B
		bool                                            survival;           // 15C
	};
	static_assert(sizeof(SavefileMetadata) == 0x160);
}
