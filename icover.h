#include <vector>
#include <memory>

class ICover {

public:
    virtual void wrap(const std::vector<char>& data) = 0;

    virtual std::unique_ptr<std::vector<char>> unwrap() = 0;

    virtual ~ICover() = 0;

};
