#pragma once

#include "icover.h"
#include <string>
#include <vector>

class TcpCover : public ICover
{
public:
    TcpCover(std::string ip, int port);
    TcpCover(const TcpCover&) = delete;
    TcpCover(TcpCover&&);
    ~TcpCover();
    TcpCover& operator=(const TcpCover&) = delete;

    void wrap(const std::vector<char> data);

private:
    int m_socket;
    std::string m_ip;
    int m_port;
};