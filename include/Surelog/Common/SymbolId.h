#ifndef SURELOG_SYMBOLID_H
#define SURELOG_SYMBOLID_H
#pragma once

#include <uhdm/SymbolId.h>

namespace SURELOG {

using UHDM::RawSymbolId;
using UHDM::SymbolId;
using UHDM::SymbolIdPP;

using UHDM::BadRawSymbolId;
using UHDM::BadRawSymbol;
using UHDM::BadSymbolId;

using UHDM::operator<<;

using UHDM::SymbolIdLessThanComparer;
using UHDM::SymbolIdHasher;
using UHDM::SymbolIdEqualityComparer;

using UHDM::SymbolIdSet;
using UHDM::SymbolIdUnorderedSet;
using UHDM::SymbolIdVector;

}  // namespace SURELOG

#endif  // SURELOG_SYMBOLID_H
