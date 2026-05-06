#pragma once

#define OFFSET_FB_REGISTERMESSAGELISTENER CYPRESS_GW_SELECT(0, 0x1401A1450, 0x1404702B0)
namespace fb
{
    class MessageListener;

    class MessageManager
    {
    public:
        bool registerMessageListener(int category, MessageListener* listener, int localPlayerId = 255);

    private:
        class MessageManagerImpl* m_impl;
        bool m_implOwner;
    };

    class MessageManagerImpl
    {
    public:

    };
}