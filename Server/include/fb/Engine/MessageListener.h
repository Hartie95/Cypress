#pragma once
#include <cstdint>
#include <StringUtil.h>

namespace fb
{
	class Message;

	class MessageListener
	{
	public:
		enum
		{
			kDefaultOrdering = 100
		};

		virtual void     onMessage(fb::Message& inMessage) = 0;
		virtual uint16_t ordering() const { return kDefaultOrdering; }
	};
}