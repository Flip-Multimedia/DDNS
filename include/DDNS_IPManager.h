#include <iostream>

class DDNS_IPManager {
  private:
    bool hasIp;
    bool queryHasReturnedResult;

    std::string currentIp;

  public:
    std::string getServerCurrentIp();
    bool serverIsAssignedIP();
    bool hasIPQueryReturnedResult();

    void executeFetchIPQuery();

}