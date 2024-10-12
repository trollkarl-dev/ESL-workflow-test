#include "vec3d.h"

vec3d vec3d_sum(const vec3d *a, const vec3d *b)
{
    vec3d result;

    result.x = a->x + b->x;
    result.y = a->y + b->y;
    result.z = a->z + b->z;

    return result;
}

vec3d vec3d_sub(const vec3d *a, const vec3d *b)
{
    vec3d result;

    result.x = a->x - b->x;
    result.y = a->y - b->y;
    result.z = a->z - b->z;

    return result;
}

vec3d_float vec3d_dot(const vec3d *a, const vec3d *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

vec3d vec3d_cross(const vec3d *a, const vec3d *b)
{
    vec3d result;

    result.x = (a->y * b->z) - (a->z * b->y);
    result.y = (a->z * b->x) - (a->x * b->z);
    result.z = (a->x * b->y) - (a->y * b->x);

    return result;
}
