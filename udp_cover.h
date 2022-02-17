#pragma once

#include <string>
#include <memory>

#include "icover.h"

#define TARGET_IP "1.2.3.4"
#define TARGET_PORT 11111

class UDPCover: public ICover {

public:

    explicit UDPCover();
    ~UDPCover() override;
    UDPCover(const UDPCover&) = delete;
    UDPCover(const UDPCover&&) = delete;
    const UDPCover& operator=(const UDPCover&) = delete;

    void wrap(const std::vector<char>& data) override;

    std::unique_ptr<std::vector<char>> unwrap() override;

private:
    int m_sock;
    std::string m_target_ip_address = TARGET_IP;
    int m_target_port = TARGET_PORT;
};
