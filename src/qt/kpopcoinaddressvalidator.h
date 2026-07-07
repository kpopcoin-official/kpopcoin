// Copyright (c) 2011-present The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KPOPCOIN_QT_KPOPCOINADDRESSVALIDATOR_H
#define KPOPCOIN_QT_KPOPCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KpopcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KpopcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Kpopcoin address widget validator, checks for a valid kpopcoin address.
 */
class KpopcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KpopcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // KPOPCOIN_QT_KPOPCOINADDRESSVALIDATOR_H
