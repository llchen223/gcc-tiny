
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_IdentityHashMap$IdentityIterator__
#define __java_util_IdentityHashMap$IdentityIterator__

#pragma interface

#include <java/lang/Object.h>

class java::util::IdentityHashMap$IdentityIterator : public ::java::lang::Object
{

public: // actually package-private
  IdentityHashMap$IdentityIterator(::java::util::IdentityHashMap *, jint);
public:
  virtual jboolean hasNext();
  virtual ::java::lang::Object * next();
  virtual void remove();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) type;
  jint knownMod;
  jint count;
  jint loc;
  ::java::util::IdentityHashMap * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_IdentityHashMap$IdentityIterator__
