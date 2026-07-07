// Copyright (c) 2018-present The Kpopcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KPOPCOIN_QT_TEST_UTIL_H
#define KPOPCOIN_QT_TEST_UTIL_H

#include <chrono>

#include <qglobal.h>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

/**
 * Press "Ok" button in message box dialog.
 *
 * @param text - Optionally store dialog text.
 * @param msec - Number of milliseconds to pause before triggering the callback.
 */
void ConfirmMessage(QString* text, std::chrono::milliseconds msec);

#endif // KPOPCOIN_QT_TEST_UTIL_H
