#pragma once

#define CLIENT_HELLO 1
#define CLIENT_HELLO_RESP 2
#define CLIENT_DISCONNECT 3
#define CLIENT_EJECT 4
#define CLIENT_HEARTBEAT 5
#define CLIENT_OBJECT_SET_FIELD 120
#define CLIENT_OBJECT_SET_FIELDS 121
#define CLIENT_OBJECT_LEAVING 132
#define CLIENT_OBJECT_LEAVING_OWNER 161
#define CLIENT_OBJECT_LOCATION 140
#define CLIENT_ENTER_OBJECT_REQUIRED 142
#define CLIENT_ENTER_OBJECT_REQUIRED_OTHER 143
#define CLIENT_ENTER_OBJECT_REQUIRED_OWNER 172
#define CLIENT_ENTER_OBJECT_REQUIRED_OTHER_OWNER 173
#define CLIENT_DONE_INTEREST_RESP 204
#define CLIENT_ADD_INTEREST 200
#define CLIENT_ADD_INTEREST_MULTIPLE 201
#define CLIENT_REMOVE_INTEREST 203

#define CLIENT_DISCONNECT_GENERIC 1
#define CLIENT_DISCONNECT_OVERSIZED_DATAGRAM 106
#define CLIENT_DISCONNECT_NO_HELLO 107
#define CLIENT_DISCONNECT_NO_HEARTBEAT 345
#define CLIENT_DISCONNECT_INVALID_MSGTYPE 108
#define CLIENT_DISCONNECT_TRUNCATED_DATAGRAM 109
#define CLIENT_DISCONNECT_ANONYMOUS_VIOLATION 113
#define CLIENT_DISCONNECT_FORBIDDEN_INTEREST 115
#define CLIENT_DISCONNECT_MISSING_OBJECT 117
#define CLIENT_DISCONNECT_FORBIDDEN_FIELD 118
#define CLIENT_DISCONNECT_FORBIDDEN_RELOCATE 119
#define CLIENT_DISCONNECT_BAD_VERSION 124
#define CLIENT_DISCONNECT_BAD_DCHASH 125
#define CLIENT_DISCONNECT_SESSION_OBJECT_DELETED 153