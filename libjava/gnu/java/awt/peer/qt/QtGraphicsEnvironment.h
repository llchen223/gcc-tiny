
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtGraphicsEnvironment__
#define __gnu_java_awt_peer_qt_QtGraphicsEnvironment__

#pragma interface

#include <java/awt/GraphicsEnvironment.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtGraphicsEnvironment;
              class QtToolkit;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Font;
        class Graphics2D;
        class GraphicsDevice;
      namespace image
      {
          class BufferedImage;
      }
    }
  }
}

class gnu::java::awt::peer::qt::QtGraphicsEnvironment : public ::java::awt::GraphicsEnvironment
{

public:
  QtGraphicsEnvironment(::gnu::java::awt::peer::qt::QtToolkit *);
  virtual JArray< ::java::awt::Font * > * getAllFonts();
  virtual JArray< ::java::lang::String * > * getAvailableFontFamilyNames();
  virtual JArray< ::java::lang::String * > * getAvailableFontFamilyNames(::java::util::Locale *);
  virtual ::java::awt::GraphicsDevice * getDefaultScreenDevice();
  virtual ::java::awt::Graphics2D * createGraphics(::java::awt::image::BufferedImage *);
  virtual JArray< ::java::awt::GraphicsDevice * > * getScreenDevices();
  virtual ::gnu::java::awt::peer::qt::QtToolkit * getToolkit();
public: // actually package-private
  ::gnu::java::awt::peer::qt::QtToolkit * __attribute__((aligned(__alignof__( ::java::awt::GraphicsEnvironment)))) toolkit;
  JArray< ::java::awt::GraphicsDevice * > * screens;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtGraphicsEnvironment__
