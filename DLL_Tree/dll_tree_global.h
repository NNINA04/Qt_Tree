#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(DLL_TREE_LIB)
#  define DLL_TREE_EXPORT Q_DECL_EXPORT
# else
#  define DLL_TREE_EXPORT Q_DECL_IMPORT
# endif
#else
# define DLL_TREE_EXPORT
#endif
