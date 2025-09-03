#pragma once

namespace RE
{
	class __declspec(novtable) alignas(0x08) BSMultiBoundShape :
		public NiObject  // 00
	{
	public:
		inline static constexpr auto RTTI{ RTTI::BSMultiBoundShape };
		inline static constexpr auto VTABLE{ VTABLE::BSMultiBoundShape };
		inline static constexpr auto Ni_RTTI{ Ni_RTTI::BSMultiBoundShape };

		~BSMultiBoundShape() override;  // 00

		enum class BSMBCullResult
		{
			kUntested = 0x0,
			kVisible = 0x1,
			kCulled = 0x2,
			kOccluded = 0x3
		};

		enum class BSMBIntersectResult
		{
			kNone = 0x0,
			kPartial = 0x1,
			kContainsTarget = 0x2
		};

		enum class BSMBShapeType
		{
			kInvalid = 0x0,
			kAABB = 0x1,
			kOBB = 0x2,
			kSphere = 0x3,
			kCapsule = 0x4
		};

		// members
		BSMBCullResult cullResult;  // 18
	};
	static_assert(sizeof(BSMultiBoundShape) == 0x18);
}
