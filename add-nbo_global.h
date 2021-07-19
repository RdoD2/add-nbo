#ifndef ADDNBO_GLOBAL_H
#define ADDNBO_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ADDNBO_LIBRARY)
#  define ADDNBO_EXPORT Q_DECL_EXPORT
#else
#  define ADDNBO_EXPORT Q_DECL_IMPORT
#endif

#endif // ADDNBO_GLOBAL_H
