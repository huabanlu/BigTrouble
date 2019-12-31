#ifndef TOOL_H
#define TOOL_H

#include "Test.h"

namespace Tool{

    inline bool expect_content(const Test &t) {
        if (t.method == "AA" || t.method == "BB" || t.method == "CC" ) {
            return true;
        }
        return false;
    }

    inline bool is_ok(){
        return true;
    }
}

#endif //TOOL_H
