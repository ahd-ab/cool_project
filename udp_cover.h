#pragma once

#include <string>
#include <memory>

#include "icover.h"

#define TARGET_IP "127.0.0.1"
#define TARGET_PORT 11111

class UDPCover: public ICover {

public:

    explicit UDPCover();
    ~UDPCover();
    UDPCover(const UDPCover&) = delete;
    UDPCover(const UDPCover&&) = delete;
    const UDPCover& operator=(const UDPCover&) = delete;

    virtual void wrap(const std::vector<char>& data) = 0;

    virtual std::unique_ptr<std::vector<char>> unwrap() = 0;

private:
    int m_sock;
    std::string m_target_ip_address = TARGET_IP;
    int m_target_port = TARGET_PORT;
};
