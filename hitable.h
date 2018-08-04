//
//  hitableh.hpp
//  main
//
//  Created by Griffin Hines on 8/4/18.
//  Copyright © 2018 Griffin Hines. All rights reserved.
//

#ifndef hitableh
#define hitableh

#include "ray.h"

struct hit_record{
    float t;
    vec3 p;
    vec3 normal;
};

class hitable {
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};
#endif
