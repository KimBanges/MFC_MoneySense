#pragma once
#ifndef SERVER_CONNECT_H
#define SERVER_CONNECT_H

class Server_connect_winsock
{
private:

public:
    SOCKET connectSocket;

    Server_connect_winsock();
    ~Server_connect_winsock();

    bool ConnectToServer(const std::string& host, const std::string& port);
    bool SendMessageToServer(const std::string& message);
    std::string ReceiveMessage();
    void CloseConnection() const;
    bool IsConnected() const;
    bool CheckForMessage();
};

#endif // SERVER_CONNECT_H