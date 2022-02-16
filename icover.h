#include <vector>


class ICover {

public:
    virtual void wrap(const std::vector<char>& data) = 0;

    virtual std::vector<char> unwrap(const std::vector<char> &data) = 0;

};
