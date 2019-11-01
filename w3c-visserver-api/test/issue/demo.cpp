
#include "trompeloeil.hpp"

#include <string>

#include "jsoncons/json.hpp"


class Interface {
  public:
    virtual ~Interface() = default;

    virtual int f1(const std::string, const jsoncons::json &) = 0;
    virtual int f2(const std::string, const jsoncons::json) = 0;
    virtual jsoncons::json f3(const std::string) = 0;
};


class Imp : public Interface {
  public:
    Imp() {}
    ~Imp() {}

    int f1(const std::string str, const jsoncons::json &json) {

    }
    int f2(const std::string str, const jsoncons::json json) {

    }
    jsoncons::json f3(const std::string str) {

    }
};


class ImpMock : public trompeloeil::mock_interface<Interface> {
  public:
  IMPLEMENT_MOCK2(f1);
  IMPLEMENT_MOCK2(f2);
  IMPLEMENT_MOCK1(f3);
};