#pragma once

#include <array>
#include "xy_pair_type.h"

class Stone;

class Field {
    std::array<std::array<char, 18>, 22> buffer = {{
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xC9', '\xCD', '\xCD', '\xCD', '\xCD', '\xBB'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xBA', ' ', ' ', ' ', ' ', '\xBA'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xBA', ' ', ' ', ' ', ' ', '\xBA'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xBA', ' ', ' ', ' ', ' ', '\xBA'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xBA', ' ', ' ', ' ', ' ', '\xBA'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', '\xC8', '\xCD', '\xCD', '\xCD', '\xCD', '\xBC'}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xBA', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\xBA', ' ', ' ', ' ', ' ', ' ', ' '}},
                                                           {{'\xC8', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xCD', '\xBC', ' ', ' ', ' ', ' ', ' ', ' '}}}};

    Stone *currStone;
    Stone *nextStone;
    xy_pair pos = {0, 0};
public:
    const std::array<std::array<char, 18>, 22> &getBuffer() { return buffer; };

    int size_x() { return buffer.size(); };

    int size_y() { return buffer[0].size(); };

    int pos_x() { return pos.x; };

    int pos_y() { return pos.y; };

    Field(xy_pair, Stone *, Stone *);

    ~Field();
};

