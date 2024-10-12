#ifndef VEC3D_H_
#define VEC3D_H_

typedef double vec3d_float;

typedef struct vec3d_str {
    vec3d_float x, y, z;
} vec3d;

vec3d vec3d_sum(const vec3d *a, const vec3d *b);
vec3d vec3d_sub(const vec3d *a, const vec3d *b);
vec3d_float vec3d_dot(const vec3d *a, const vec3d *b);
vec3d vec3d_cross(const vec3d *a, const vec3d *b);

#endif /* VEC3D_H_ */
