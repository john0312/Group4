// Copyright (c) 2021, 鍾淯丞, 周杰仕, 林仁鴻. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

class Authenticator
{

public:
    bool CheckAccount(std::string account, std::string password);
    std::string SearchAccount(std::string account);
};