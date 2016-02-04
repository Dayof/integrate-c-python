#include <boost/python.hpp>
#include <Python.h>

char const* greet()
{
   return "hello, world";
}

BOOST_PYTHON_MODULE(testc)
{
    using namespace boost::python;
    def("greet", greet);
}
