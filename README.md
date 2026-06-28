**The genesis block mining for Kpopcoin will officially begin on Tuesday, June 30, 2026, at 13:00 UTC.**

**License**
This project is based on Bitcoin Core and is released under the MIT License. 
Copyright (c) 2009-2026 Bitcoin Core Developers.
Copyright (c) 2026 Kpopcoin.
### **Kpopcoin (KPC) Overview**

Kpopcoin is a digital currency derived from **Bitcoin Core (v31.99.0-3704fcff5830-dirty)**. All core commands and operations are identical to standard Bitcoin protocols.

**Key Features:**

* **Block Time:** 30 minutes
* **Initial Supply:** 10,000 KP
* **Halving:** Mining rewards reduce to 15/16 of the previous amount every 4,320 blocks.
* **Difficulty Adjustment:** Every 3 weeks.
* **Units:** KP : DOA

### **Getting Started**

*Note: This guide is a simplified summary. For advanced configurations, please refer to the technical documentation.*
*Warning: This software is optimized for **Linux only**. Compatibility with other operating systems is not guaranteed.*

#### **1. Node Setup**

First, set up the node software to participate in the network and manage your wallet.

* **Download:** [Download the node software here](https://github.com/kpopcoin-official/kpopcoin)
* **Extract:** Extract the downloaded archive.
* **Configuration:** Copy the `kpopcoin.conf` file into the `~/.kpopcoin/` directory. (This applies the necessary network connection settings.)
* **Run `./bitcoind`:** Starts the background program that synchronizes your node with the Kpopcoin network.
* **`./bitcoin-cli createwallet "my_wallet"`:** Creates a wallet to store your coins.
* **`./bitcoin-cli getnewaddress`:** Generates your own unique address to receive coins.
* **`./bitcoin-cli encryptwallet "password"`:** Encrypts your wallet with a password to enhance security.

#### **2. Mining**

Use your computing power to generate coins by following these steps:

* **Download:** [Download the miner software here](https://github.com/kpopcoin-official/minerkpc)
* **Extract:** Extract the downloaded archive.
* **Run Miner:** Execute the following command to start mining:
`./minerd -a sha256d -o [http://127.0.0.1:8717/wallet/my_wallet](http://127.0.0.1:8717/wallet/my_wallet) -u userid -p userpw --coinbase-addr=<YOUR_WALLET_ADDRESS>`
* **`-o`**: Connects to your RPC port to send mining data.
* **`-u`, `-p**`: Authenticates your session using the RPC username and password defined in your config.
* **`--coinbase-addr`**: Specifies your wallet address to receive mining rewards.

#### **Troubleshooting**

* **Port Check:** Ensure that **port 8718** is open. This port acts as a "data channel" for your computer to communicate with other nodes in the network. If this channel is blocked, you will be unable to participate in the network.

