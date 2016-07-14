#ifndef PHP_PROTOBUF_H
#define PHP_PROTOBUF_H

extern zend_module_entry protobuf_module_entry;
#define phpext_proto_ptr &protobuf_module_entry

#define PHP_PROTOBUF_VERSION "0.1.0"                                                                                             

#ifdef PHP_WIN32
#   define PHP_PROTOBUF_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#   define PHP_PROTOBUF_API __attribute__ ((visibility("default")))
#else
#   define PHP_PROTOBUF_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#define PROTOBUF_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(protobuf, v)

#if defined(ZTS) && defined(COMPILE_DL_PROTOBUF)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif  /* PHP_PROTOBUF_H */
