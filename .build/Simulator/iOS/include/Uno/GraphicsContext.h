// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Source/Uno/GraphicsContext.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <XliGL.h>
#include <Uno/XliInterop.h>

extern ::Xli::GLContext *uXliGLContextPtr;

struct uGraphicsContext
{
    static uGraphicsContext GetInstance()
    {
        return uGraphicsContext(uXliGLContextPtr);
    }

    uGraphicsContext()
    {
        this->context = NULL;
    }

    GLuint GetBackbufferGLHandle()
    {
#if XLI_PLATFORM_IOS
        return 1;
#else
        return 0;
#endif
    }

    ::g::Uno::Int2 GetBackbufferSize()
    {
        return uInt2FromXliVector2i(context->GetDrawableSize());
    }

private:
    uGraphicsContext(Xli::GLContext *context)
    {
        this->context = context;
    }

    ::Xli::GLContext *context;
};
