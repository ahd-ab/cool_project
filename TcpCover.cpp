#include "TcpCover.h"

#include <sys/types.h>
#include <sys/socket.h>

TcpCover::TcpCover(std::string ip, int port)
    : m_ip(std::move(ip)), m_port(port)
{
    m_socket = socket(AF_INET, SOCK_STREAM, 0);
}