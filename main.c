#include <stdio.h>

#include "vec3d.h"

static void vec3d_vector_print(const vec3d *v, const char *label)
{
    printf("\"%s\": (%.3f, %.3f, %.3f)\n", label, v->x, v->y, v->z);
}

static void vec3d_scalar_print(vec3d_float v, const char *label)
{
    printf("\"%s\": (%.3f)\n", label, v);
}

int main()
{
    vec3d a = {1.0f, 2.0f, 3.0f};
    vec3d b = {4.0f, 5.0f, 6.0f};
    vec3d c;

    vec3d_vector_print(&a, "A");
    vec3d_vector_print(&b, "B");

    c = vec3d_sum(&a, &b);
    vec3d_vector_print(&c, "A + B");

    c = vec3d_sub(&a, &b);
    vec3d_vector_print(&c, "A - B");

    c = vec3d_cross(&a, &b);
    vec3d_vector_print(&c, "A x B");

    vec3d_scalar_print(vec3d_dot(&a, &b), "A * B");

    return 0;
}
