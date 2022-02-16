#pragma once

#include <exception>
#include <string>


class ConnectionFailed : public std::exception
{
public:
    ConnectionFailed(const std::string& ip, int port);
    ~ConnectionFailed() = default;
    ConnectionFailed(const ConnectionFailed&) = delete;
    ConnectionFailed(ConnectionFailed&&) = delete;
    const ConnectionFailed& operator=(const ConnectionFailed&) = delete; 

    virtual const char* what() const noexcept;

private:
    std::string msg;
};
