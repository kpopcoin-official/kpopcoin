// Copyright (c) 2016-present The Kpopcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KPOPCOIN_WALLET_WALLETTOOL_H
#define KPOPCOIN_WALLET_WALLETTOOL_H

#include <string>

class ArgsManager;

namespace wallet {
namespace WalletTool {

bool ExecuteWalletToolFunc(const ArgsManager& args, const std::string& command);

} // namespace WalletTool
} // namespace wallet

#endif // KPOPCOIN_WALLET_WALLETTOOL_H
