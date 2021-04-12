// Copyright (c) 2021, 鍾淯丞, 周杰仕, 林仁鴻. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <sys/socket.h>
#include "./MainManager.h"

class MainManager
{
};

class HttpListener
{

public:
    void BindPort(int portNum);

private:
    MainManager *mainManager;
}