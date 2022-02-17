#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "udp_cover.h"

UDPCover::UDPCover() {
    m_sock = socket(AF_INET, SOCK_DGRAM, 0);
}

UDPCover::~UDPCover() {
    close(m_sock);
}

void UDPCover::wrap(const std::vector<char> &data) {

    struct sockaddr_in target_address{};

    target_address.sin_family = AF_INET;
    target_address.sin_port = m_target_port;
    inet_aton(m_target_ip_address.c_str(), &target_address.sin_addr);

    size_t sending_res = sendto(m_sock, data.data(), data.size(), 0, (struct sockaddr*) &target_address, sizeof(target_address));

}

std::unique_ptr<std::vector<char>> UDPCover::unwrap() {

    return std::make_unique<std::vector<char>>();
}