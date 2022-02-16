#include "icover.h"
#include "xor_cover.h"


XorCover::XorCover(std::unique_ptr<ICover> inner_cover) :m_inner_cover(std::move(inner_cover)) {};

void XorCover::wrap(const std::vector<char> &data) {
    std::transform(data.begin(), data.end(), data.begin(), [this](char byte){return byte | m_key;});
    m_inner_cover->wrap(data);
}

std::vector<char> XorCover::unwrap(const std::vector<char> &data) {
    std::transform(data.begin(), data.end(), data.begin(), [this](char byte){return byte | m_key;});
    m_inner_cover->unwrap(data);
}




