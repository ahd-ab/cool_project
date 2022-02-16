#pragma once
#ifndef COOL_PROJECT_XOR_COVER_H
#define COOL_PROJECT_XOR_COVER_H

#endif //COOL_PROJECT_XOR_COVER_H


#include <memory>
#include <algorithm>

#include "icover.h"


class XorCover: public ICover {
private:
    std::unique_ptr<ICover> m_inner_cover;
    char m_key = 'a';

public:
    explicit XorCover(std::unique_ptr<ICover> inner_cover);
    ~XorCover() = delete;
    XorCover(const XorCover&) = delete;
    XorCover(const XorCover&&) = delete;
    const XorCover& operator=(const XorCover&) = delete;

    void wrap(const std::vector<char> &data) override;
    std::vector<char> unwrap(const std::vector<char> &data) override;

};