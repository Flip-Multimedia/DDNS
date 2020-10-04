#include "DDNS_IPManager.h"


bool DDNS_IPManager::hasIpQueryReturnedResult() {
  return this->queryHasReturnedResult;
}

bool DDNS_IPManager::serverIsAssignedIP() {
  if(this->queryHasReturnedResult && this->hasIp) {
    return true;
  }
  else {
    return false;
  }
}

std::string DDNS_IPManager::getServerCurrentIp() {
  if(this->hasIp) {
    return this->currentIp;
  }
  else {
    return "0.0.0.0";
  }
}

void DDNS_IPManager::executeFetchIPQuery() {
  // execute ping test.
}