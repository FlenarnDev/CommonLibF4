#pragma once

namespace RE
{
	class __declspec(novtable) BGSLoadGameBuffer
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSLoadGameBuffer };
		static constexpr auto VTABLE{ VTABLE::BGSLoadGameBuffer };

		virtual ~BGSLoadGameBuffer();  // 00

		// add
		virtual std::uint8_t GetVersion(void);  // 01

		void LoadDataEndian(void* a_data, std::uint32_t a_offset, std::uint32_t a_size)
		{
			using func_t = decltype(&BGSLoadGameBuffer::LoadDataEndian);
			static REL::Relocation<func_t> func{ ID::BGSLoadGameBuffer::LoadDataEndian };
			return func(this, a_data, a_offset, a_size);
		}

		// members
		void*         buffer;          // 008
		std::uint64_t unk10;           // 010
		std::uint32_t unk18;           // 018
		std::uint32_t unk1C;           // 01C
		std::uint32_t unk20;           // 020
		std::uint32_t bufferPosition;  // 024
	};
	static_assert(sizeof(BGSLoadGameBuffer) == 0x28);
}
