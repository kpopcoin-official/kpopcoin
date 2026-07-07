// Copyright (c) 2023 Kpopcoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "nontrivial-threadlocal.h"

#include <clang-tidy/ClangTidyModule.h>

class KpopcoinModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<kpopcoin::NonTrivialThreadLocal>("kpopcoin-nontrivial-threadlocal");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<KpopcoinModule>
    X("kpopcoin-module", "Adds kpopcoin checks.");

volatile int KpopcoinModuleAnchorSource = 0;
