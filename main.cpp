#include <iostream>
#include <cstring>
#include "udp_cover.h"

int main() {

    std::cout << "Hello, World!" << std::endl;

    UDPCover cover;
    std::vector<char> data;
    std::string data_to_send = "test1324";

    data.resize(data_to_send.length());
    std::memcpy(data.data(), data_to_send.c_str(), data_to_send.length());


    cover.wrap(data);

    return 0;
}
