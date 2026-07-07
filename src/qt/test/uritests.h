// Copyright (c) 2009-present The Kpopcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KPOPCOIN_QT_TEST_URITESTS_H
#define KPOPCOIN_QT_TEST_URITESTS_H

#include <QObject>
#include <QTest>

class URITests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void uriTests();
};

#endif // KPOPCOIN_QT_TEST_URITESTS_H
