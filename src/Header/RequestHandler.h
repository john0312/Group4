// Copyright (c) 2021, 鍾淯丞, 周杰仕, 林仁鴻. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "./OperateData.h"
#include "./Authenticator.h"
#include "./APIHandler.h"

class RequestHandler
{

public:
    Authenticator auth;
    OperateData *data;
    OperateData *header;
    std::unordered_map<std::string, APIHandler> apis;
};