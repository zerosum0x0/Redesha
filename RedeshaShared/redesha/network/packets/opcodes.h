#pragma once

#define SessionCreate 0x00002001

enum LoginWorldOpcode
{
	Login_World_RegisterRequest = 0x0002,
	Login_World_RegisterReply = 0x0003
};

enum LoginClientOpcode
{
	Login_ClientInfo = 0x0001
};