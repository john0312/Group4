// Copyright (c) 2021, 鍾淯丞, 周杰仕, 林仁鴻. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "./HttpListener.h"
#include "./RequestHandler.h"
#include "./SocketProcess.h"

class MainManager
{

public:
    void NewRequest();
    void EndRequest();
    std::vector<SocketProcess *> sockets;

private:
    HttpListener listener;
    RequestHandler request;
};