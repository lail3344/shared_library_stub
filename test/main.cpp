#include "triangle.hpp"
#include <iostream>
//#include <dlfcn.h>

int main() {
    using std::cout;
    using std::cerr;
    using std::endl;

    // try to access class from shared library
    triangle* instance = new triangle();

    instance->set_side_length(0);
    cout << "Area is : " << instance->area() << endl;

    // do remain if no shared library
    // TBD

#if 0
    // load the triangle library
    void* triangle = dlopen("./triangle.so", RTLD_LAZY);
    if (!triangle) {
        cerr << "Cannot load library: " << dlerror() << '\n';
        return 1;
    }

    // reset errors
    dlerror();
    
    // load the symbols
    create_t* create_triangle = (create_t*) dlsym(triangle, "create");
    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        cerr << "Cannot load symbol create: " << dlsym_error << '\n';
        return 1;
    }
    
    destroy_t* destroy_triangle = (destroy_t*) dlsym(triangle, "destroy");
    dlsym_error = dlerror();
    if (dlsym_error) {
        cerr << "Cannot load symbol destroy: " << dlsym_error << '\n';
        return 1;
    }

    // create an instance of the class
    triangle *tri = create_triangle();

    // use the class
    tri->set_side_length(7);
        cout << "The area is: " << tri->area() << '\n';

    // destroy the class
    destroy_triangle(tri);

    // unload the triangle library
    dlclose(triangle);
#endif
}
