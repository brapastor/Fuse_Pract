// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_Android_bundle.h>
#include <_root.Fuse_BasicTheme_bundle.h>
#include <_root.Fuse_Controls_bundle.h>
#include <_root.Fuse_Drawing_bundle.h>
#include <_root.Fuse_Drawing_Polygons_bundle.h>
#include <_root.Fuse_Drawing_Primitives_bundle.h>
#include <_root.Fuse_Effects_bundle.h>
#include <_root.Fuse_Elements_bundle.h>
#include <_root.Fuse_Entities_bundle.h>
#include <_root.Fuse_iOS_bundle.h>
#include <_root.Fuse_Reactive_bundle.h>
#include <_root.Fuse_Themes_bundle.h>
#include <_root.Fuse_Video_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.HashableWeakReference.h>
#include <_root.Outracks_Simulator_Client_Uno_bundle.h>
#include <_root.UnoCore_bundle.h>
#include <_root.WeakDictionary-2.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[191];
static uType* TYPES[8];

namespace g{

// /usr/local/share/uno/Packages/Fuse.Android/0.18.8/.upk/meta
// -----------------------------------------------------------

// public static generated class Fuse_Android_bundle :0
// {
// static Fuse_Android_bundle() :0
static void Fuse_Android_bundle__cctor__fn(uType* __type)
{
    Fuse_Android_bundle::Blitter4fbe5e04_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* Fuse_Android_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Android_bundle", options);
    type->fp_cctor_ = Fuse_Android_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "vec4 g(vec2 h, mat4 i){\n"
        "    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = g(c + (a * b), d);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Android_bundle::Blitter4fbe5e04_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitter4fbe5e04", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Android_bundle::Blitter4fbe5e04_;
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.18.8/.upk/meta
// --------------------------------------------------------------

// public static generated class Fuse_BasicTheme_bundle :0
// {
// static Fuse_BasicTheme_bundle() :0
static void Fuse_BasicTheme_bundle__cctor__fn(uType* __type)
{
    Fuse_BasicTheme_bundle::Roboto_Black2ac9e8f4_ = ::g::Uno::BundleFile::New1(::STRINGS[7/*"roboto-blac...*/]);
    Fuse_BasicTheme_bundle::Roboto_BlackItalic51475b44_ = ::g::Uno::BundleFile::New1(::STRINGS[8/*"roboto-blac...*/]);
    Fuse_BasicTheme_bundle::Roboto_Boldc4f53938_ = ::g::Uno::BundleFile::New1(::STRINGS[9/*"roboto-bold...*/]);
    Fuse_BasicTheme_bundle::Roboto_BoldItalic5ede6888_ = ::g::Uno::BundleFile::New1(::STRINGS[10/*"roboto-bold...*/]);
    Fuse_BasicTheme_bundle::Roboto_Italic272b53a3_ = ::g::Uno::BundleFile::New1(::STRINGS[11/*"roboto-ital...*/]);
    Fuse_BasicTheme_bundle::Roboto_Light043f2a8b_ = ::g::Uno::BundleFile::New1(::STRINGS[12/*"roboto-ligh...*/]);
    Fuse_BasicTheme_bundle::Roboto_LightItalic27d4cf9b_ = ::g::Uno::BundleFile::New1(::STRINGS[13/*"roboto-ligh...*/]);
    Fuse_BasicTheme_bundle::Roboto_Mediumf6467e68_ = ::g::Uno::BundleFile::New1(::STRINGS[14/*"roboto-medi...*/]);
    Fuse_BasicTheme_bundle::Roboto_MediumItalic889309b8_ = ::g::Uno::BundleFile::New1(::STRINGS[15/*"roboto-medi...*/]);
    Fuse_BasicTheme_bundle::Roboto_Regular368181d1_ = ::g::Uno::BundleFile::New1(::STRINGS[16/*"roboto-regu...*/]);
    Fuse_BasicTheme_bundle::Roboto_Thin9bed234c_ = ::g::Uno::BundleFile::New1(::STRINGS[17/*"roboto-thin...*/]);
    Fuse_BasicTheme_bundle::Roboto_ThinItalic74bb739c_ = ::g::Uno::BundleFile::New1(::STRINGS[18/*"roboto-thin...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Bold2c6d464d_ = ::g::Uno::BundleFile::New1(::STRINGS[19/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic543b91dd_ = ::g::Uno::BundleFile::New1(::STRINGS[20/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Italic90d46f78_ = ::g::Uno::BundleFile::New1(::STRINGS[21/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Light8bc8c016_ = ::g::Uno::BundleFile::New1(::STRINGS[22/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_LightItalicde1cd0e6_ = ::g::Uno::BundleFile::New1(::STRINGS[23/*"robotoconde...*/]);
    Fuse_BasicTheme_bundle::RobotoCondensed_Regular01fbe09c_ = ::g::Uno::BundleFile::New1(::STRINGS[24/*"robotoconde...*/]);
}

uClassType* Fuse_BasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_BasicTheme_bundle", options);
    type->fp_cctor_ = Fuse_BasicTheme_bundle__cctor__fn;
    ::STRINGS[7] = uString::Const("roboto-black-f048f3ba.ttf");
    ::STRINGS[8] = uString::Const("roboto-blackitalic-97f2588a.ttf");
    ::STRINGS[9] = uString::Const("roboto-bold-3d4cb65a.ttf");
    ::STRINGS[10] = uString::Const("roboto-bolditalic-5f81a32a.ttf");
    ::STRINGS[11] = uString::Const("roboto-italic-44748545.ttf");
    ::STRINGS[12] = uString::Const("roboto-light-c9be3551.ttf");
    ::STRINGS[13] = uString::Const("roboto-lightitalic-6e7fcce1.ttf");
    ::STRINGS[14] = uString::Const("roboto-medium-138fb00a.ttf");
    ::STRINGS[15] = uString::Const("roboto-mediumitalic-4a2e98da.ttf");
    ::STRINGS[16] = uString::Const("roboto-regular-f5456817.ttf");
    ::STRINGS[17] = uString::Const("roboto-thin-1444a06e.ttf");
    ::STRINGS[18] = uString::Const("roboto-thinitalic-755eae3e.ttf");
    ::STRINGS[19] = uString::Const("robotocondensed-bol-d12a7f13.ttf");
    ::STRINGS[20] = uString::Const("robotocondensed-bol-f24a3d23.ttf");
    ::STRINGS[21] = uString::Const("robotocondensed-ita-580303be.ttf");
    ::STRINGS[22] = uString::Const("robotocondensed-lig-b19983b8.ttf");
    ::STRINGS[23] = uString::Const("robotocondensed-lig-34ca7208.ttf");
    ::STRINGS[24] = uString::Const("robotocondensed-reg-5386b8be.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Black2ac9e8f4_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_BlackItalic51475b44_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Boldc4f53938_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_BoldItalic5ede6888_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Italic272b53a3_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Light043f2a8b_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_LightItalic27d4cf9b_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Mediumf6467e68_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_MediumItalic889309b8_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Regular368181d1_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_Thin9bed234c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::Roboto_ThinItalic74bb739c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Bold2c6d464d_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic543b91dd_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Italic90d46f78_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Light8bc8c016_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_LightItalicde1cd0e6_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_BasicTheme_bundle::RobotoCondensed_Regular01fbe09c_, uFieldFlagsStatic);
    type->Reflection.SetFields(18,
        new uField("Roboto_Black2ac9e8f4", 0),
        new uField("Roboto_BlackItalic51475b44", 1),
        new uField("Roboto_Boldc4f53938", 2),
        new uField("Roboto_BoldItalic5ede6888", 3),
        new uField("Roboto_Italic272b53a3", 4),
        new uField("Roboto_Light043f2a8b", 5),
        new uField("Roboto_LightItalic27d4cf9b", 6),
        new uField("Roboto_Mediumf6467e68", 7),
        new uField("Roboto_MediumItalic889309b8", 8),
        new uField("Roboto_Regular368181d1", 9),
        new uField("Roboto_Thin9bed234c", 10),
        new uField("Roboto_ThinItalic74bb739c", 11),
        new uField("RobotoCondensed_Bold2c6d464d", 12),
        new uField("RobotoCondensed_BoldItalic543b91dd", 13),
        new uField("RobotoCondensed_Italic90d46f78", 14),
        new uField("RobotoCondensed_Light8bc8c016", 15),
        new uField("RobotoCondensed_LightItalicde1cd0e6", 16),
        new uField("RobotoCondensed_Regular01fbe09c", 17));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Black2ac9e8f4_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_BlackItalic51475b44_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Boldc4f53938_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_BoldItalic5ede6888_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Italic272b53a3_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Light043f2a8b_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_LightItalic27d4cf9b_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Mediumf6467e68_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_MediumItalic889309b8_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Regular368181d1_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_Thin9bed234c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::Roboto_ThinItalic74bb739c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Bold2c6d464d_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_BoldItalic543b91dd_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Italic90d46f78_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Light8bc8c016_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_LightItalicde1cd0e6_;
uSStrong< ::g::Uno::BundleFile*> Fuse_BasicTheme_bundle::RobotoCondensed_Regular01fbe09c_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.18.8/.upk/meta
// ------------------------------------------------------------

// public static generated class Fuse_Controls_bundle :0
// {
// static Fuse_Controls_bundle() :0
static void Fuse_Controls_bundle__cctor__fn(uType* __type)
{
    Fuse_Controls_bundle::ImageElementDraw8f364120_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[25/*"uniform mat...*/], ::STRINGS[26/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Controls_bundle::SolidRectangleafb52825_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Controls_bundle::SolidRectangleafb52826_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[37/*"uniform mat...*/], ::STRINGS[38/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    Fuse_Controls_bundle::SolidRectangleafb52827_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform mat...*/], ::STRINGS[40/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Controls_bundle::Viewportb83477c3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[41/*"uniform mat...*/], ::STRINGS[42/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/]));
}

uClassType* Fuse_Controls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Controls_bundle", options);
    type->fp_cctor_ = Fuse_Controls_bundle__cctor__fn;
    ::STRINGS[25] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[26] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[29] = uString::Const("uniform mat4 l, c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n"
        "    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform vec4 i;\n"
        "uniform float j, k;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[37] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[38] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[39] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[40] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(l, vec2(k, 0.5));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[41] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = false ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::ImageElementDraw8f364120_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::SolidRectangleafb52825_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::SolidRectangleafb52826_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::SolidRectangleafb52827_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Controls_bundle::Viewportb83477c3_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ImageElementDraw8f364120", 0),
        new uField("SolidRectangleafb52825", 1),
        new uField("SolidRectangleafb52826", 2),
        new uField("SolidRectangleafb52827", 3),
        new uField("Viewportb83477c3", 4));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::ImageElementDraw8f364120_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::SolidRectangleafb52825_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::SolidRectangleafb52826_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::SolidRectangleafb52827_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Controls_bundle::Viewportb83477c3_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/0.18.8/.upk/meta
// -----------------------------------------------------------

// public static generated class Fuse_Drawing_bundle :0
// {
// static Fuse_Drawing_bundle() :0
static void Fuse_Drawing_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_bundle::LinearGradientDrawable066bc6f3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"attribute v...*/], ::STRINGS[44/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* Fuse_Drawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_bundle__cctor__fn;
    ::STRINGS[43] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[44] = uString::Const("uniform float d[b], e;\n"
        "uniform vec4 f[c];\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 h(vec2 i){\n"
        "    float j = d[0] + (e * i.x);\n"
        "    vec4 k = f[0];\n"
        "\n"
        "    for (int l = 0; l < (b - 1); l++)\n"
        "    {\n"
        "        float m = d[l];\n"
        "        float n = d[l + 1];\n"
        "        vec4 o = f[l + 1];\n"
        "        k = mix(k, o, smoothstep(m, n, j));\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h(g);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_bundle::LinearGradientDrawable066bc6f3_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawable066bc6f3", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_bundle::LinearGradientDrawable066bc6f3_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.18.8/.upk/meta
// --------------------------------------------------------------------

// public static generated class Fuse_Drawing_Polygons_bundle :0
// {
// static Fuse_Drawing_Polygons_bundle() :0
static void Fuse_Drawing_Polygons_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_Polygons_bundle::Borderabeb3b3d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[45/*"uniform mat...*/], ::STRINGS[46/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[47/*"m"*/]));
    Fuse_Drawing_Polygons_bundle::Borderabeb3b3e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform mat...*/], ::STRINGS[49/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    Fuse_Drawing_Polygons_bundle::Borderabeb3b3f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform mat...*/], ::STRINGS[51/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[34/*"k"*/]));
    Fuse_Drawing_Polygons_bundle::Borderabeb3b40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform mat...*/], ::STRINGS[53/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform mat...*/], ::STRINGS[55/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform mat...*/], ::STRINGS[38/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform mat...*/], ::STRINGS[58/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[33/*"j"*/]));
}

uClassType* Fuse_Drawing_Polygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_Polygons_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_Polygons_bundle__cctor__fn;
    ::STRINGS[45] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    l = ((((d * (a.xy / d)) - e) / f) * g) + h;\n"
        "    gl_Position = n(a.xy, c);\n"
        "}\n"
        "");
    ::STRINGS[46] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec4 k;\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = ((b ? vec4(float(0)) : texture2D(m, l)) * i) * k;\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[48] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "uniform float d;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 e;\n"
        "\n"
        "vec4 f(vec2 g, mat4 h){\n"
        "    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    e = vec4((g.xyz * g.w) * d, g.w * d);\n"
        "    gl_Position = f(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[50] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "vec4 l(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    j = m(a.xy / c, g, h);\n"
        "    gl_Position = l(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D k;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(k, vec2(j, 0.5)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f);\n"
        "}\n"
        "");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[52] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 d;\n"
        "\n"
        "vec4 e(vec2 f, mat4 g){\n"
        "    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    d = vec4((f.xyz * f.w) * 1.0, f.w);\n"
        "    gl_Position = e(a.xy, b);\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = d;\n"
        "}\n"
        "");
    ::STRINGS[54] = uString::Const("uniform mat4 c;\n"
        "uniform vec2 d, e, f, g, h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = ((((d * (a / d)) - e) / f) * g) + h;\n"
        "    gl_Position = m(a, c);\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform vec4 i;\n"
        "uniform float j;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = (b ? vec4(float(0)) : texture2D(l, k)) * i;\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n"
        "}\n"
        "");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[56] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "vec4 d(vec2 e, mat4 f){\n"
        "    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d(a, b);\n"
        "}\n"
        "");
    ::STRINGS[38] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[57] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "vec4 k(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "float l(vec2 m, vec2 n, float o){\n"
        "    vec2 p = (m * c) - d;\n"
        "    float q = dot(p, n) / o;\n"
        "    return (q - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = l(a / c, g, h);\n"
        "    gl_Position = k(a, b);\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D j;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = texture2D(j, vec2(i, 0.5));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Borderabeb3b3d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Borderabeb3b3e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Borderabeb3b3f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::Borderabeb3b40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e9_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Borderabeb3b3d", 0),
        new uField("Borderabeb3b3e", 1),
        new uField("Borderabeb3b3f", 2),
        new uField("Borderabeb3b40", 3),
        new uField("PolygonDrawablefeed06e7", 4),
        new uField("PolygonDrawablefeed06e8", 5),
        new uField("PolygonDrawablefeed06e9", 6));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Borderabeb3b3d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Borderabeb3b3e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Borderabeb3b3f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::Borderabeb3b40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Polygons_bundle::PolygonDrawablefeed06e9_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.18.8/.upk/meta
// ----------------------------------------------------------------------

// public static generated class Fuse_Drawing_Primitives_bundle :0
// {
// static Fuse_Drawing_Primitives_bundle() :0
static void Fuse_Drawing_Primitives_bundle__cctor__fn(uType* __type)
{
    Fuse_Drawing_Primitives_bundle::Circle2a09f04b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[60/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[65/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a09f04c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[66/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[65/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a09f04d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[68/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[64/*"r"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a0b4d6b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a0b4d6c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[71/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a0b4d82_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[73/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a16366b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[76/*"s"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a16366c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[76/*"s"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a16366d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[78/*"uniform vec...*/], ::STRINGS[79/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[62/*"p"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a17938b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a17938c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[82/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circle2a17938d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[83/*"uniform vec...*/], ::STRINGS[84/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/]));
    Fuse_Drawing_Primitives_bundle::Circle32dc887c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[65/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circle32dc887d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[64/*"r"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c424a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[90/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[76/*"s"*/], ::STRINGS[91/*"t"*/], ::STRINGS[92/*"w"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c424b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[93/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[76/*"s"*/], ::STRINGS[91/*"t"*/], ::STRINGS[92/*"w"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c424c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[94/*"uniform vec...*/], ::STRINGS[95/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[91/*"t"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c4d90_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform vec...*/], ::STRINGS[97/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c4d91_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform vec...*/], ::STRINGS[98/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c4d92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[99/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Circle7f4c58d6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[100/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[65/*"u"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef0db6dc4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform vec...*/], ::STRINGS[102/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef0db6dc5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform vec...*/], ::STRINGS[103/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Circlef0db6dc6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform vec...*/], ::STRINGS[105/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5eefb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[107/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[64/*"r"*/], ::STRINGS[76/*"s"*/], ::STRINGS[108/*"x"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5eefc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5eefd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[112/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[113/*"v"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5eefe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[115/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5fe03_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[117/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[113/*"v"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5fe04_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[119/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5fe05_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"uniform flo...*/], ::STRINGS[121/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[91/*"t"*/]));
    Fuse_Drawing_Primitives_bundle::Rectangle35a5fe06_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/]));
}

uClassType* Fuse_Drawing_Primitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Drawing_Primitives_bundle", options);
    type->fp_cctor_ = Fuse_Drawing_Primitives_bundle__cctor__fn;
    ::STRINGS[59] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "vec4 v(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * c;\n"
        "    vec2 x = w + d;\n"
        "    s = ((((f * (x / f)) - g) / h) * i) + j;\n"
        "    t = w;\n"
        "    gl_Position = v(x, e);\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[61] = uString::Const("o");
    ::STRINGS[62] = uString::Const("p");
    ::STRINGS[63] = uString::Const("q");
    ::STRINGS[64] = uString::Const("r");
    ::STRINGS[65] = uString::Const("u");
    ::STRINGS[66] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 s(vec2 t, mat4 u){\n"
        "    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * c;\n"
        "    vec2 u = t + d;\n"
        "    p = ((((f * (u / f)) - g) / h) * i) + j;\n"
        "    q = t;\n"
        "    gl_Position = s(u, e);\n"
        "}\n"
        "");
    ::STRINGS[68] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n"
        "    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    n = p;\n"
        "    gl_Position = o(p + c, d);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "vec4 l(vec2 m, mat4 n){\n"
        "    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    k = m;\n"
        "    gl_Position = l(m + c, d);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "vec4 t(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * e) - f;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * b;\n"
        "    vec2 w = v + c;\n"
        "    q = u(w / e, l, m);\n"
        "    r = v;\n"
        "    gl_Position = t(w, d);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("s");
    ::STRINGS[77] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 q(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "float r(vec2 s, vec2 t, float u){\n"
        "    vec2 v = (s * e) - f;\n"
        "    float w = dot(v, t) / u;\n"
        "    return (w - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    n = r(t / e, l, m);\n"
        "    o = s;\n"
        "    gl_Position = q(t, d);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = texture2D(p, vec2(n, 0.5));\n"
        "    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "vec4 n(vec2 o, mat4 p){\n"
        "    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    m = o;\n"
        "    gl_Position = n(o + c, d);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "vec4 k(vec2 l, mat4 m){\n"
        "    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    j = l;\n"
        "    gl_Position = k(l + c, d);\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "vec4 v(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * e) - f;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = a * b;\n"
        "    vec2 y = x + c;\n"
        "    s = w(y / e, n, o);\n"
        "    t = x;\n"
        "    gl_Position = v(y, d);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "vec4 s(vec2 u, mat4 v){\n"
        "    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n"
        "}\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = t(v / e, n, o);\n"
        "    q = u;\n"
        "    gl_Position = s(v, d);\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(r, vec2(p, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "vec4 x(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * c;\n"
        "    vec2 z = y + d;\n"
        "    u = ((((f * (z / f)) - g) / h) * i) + j;\n"
        "    v = y;\n"
        "    gl_Position = x(z, e);\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("t");
    ::STRINGS[92] = uString::Const("w");
    ::STRINGS[93] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "uniform vec2 r, s, t;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform vec2 c, d, f, g, h, i, j;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 v, mat4 w){\n"
        "    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = a * c;\n"
        "    vec2 w = v + d;\n"
        "    r = ((((f * (w / f)) - g) / h) * i) + j;\n"
        "    s = v;\n"
        "    gl_Position = u(w, e);\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform vec4 k;\n"
        "uniform float l, m, n, o, p, q;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n"
        "    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    p = r;\n"
        "    gl_Position = q(r + c, d);\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    o = q;\n"
        "    gl_Position = p(q + c, d);\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "vec4 m(vec2 n, mat4 o){\n"
        "    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    l = n;\n"
        "    gl_Position = m(n + c, d);\n"
        "}\n"
        "");
    ::STRINGS[105] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "vec4 y(vec2 z, mat4 A){\n"
        "    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    t = f[int(c)];\n"
        "    u = ((((i * (z / i)) - j) / k) * l) + m;\n"
        "    v = z;\n"
        "    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = y(z, h);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q, r, s;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n"
        "    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n"
        "    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("x");
    ::STRINGS[109] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "vec4 r(vec2 s, mat4 t){\n"
        "    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = s;\n"
        "    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = r(s, g);\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "vec4 w(vec2 y, mat4 z){\n"
        "    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n"
        "}\n"
        "\n"
        "float x(vec2 y, vec2 z, float A){\n"
        "    vec2 B = (y * h) - i;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = x(y / h, p, q);\n"
        "    t = y;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = w(y, g);\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = texture2D(v, vec2(s, 0.5));\n"
        "    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("v");
    ::STRINGS[114] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "vec4 q(vec2 r, mat4 s){\n"
        "    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = r;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = q(r, g);\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform float f[d];\n"
        "uniform vec2 g, i, j, k, l, m;\n"
        "uniform mat4 h;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "vec4 w(vec2 x, mat4 y){\n"
        "    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n"
        "    r = f[int(c)];\n"
        "    s = ((((i * (x / i)) - j) / k) * l) + m;\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n"
        "    gl_Position = w(x, h);\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform vec4 n;\n"
        "uniform float o, p, q;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n"
        "    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "vec4 p(vec2 q, mat4 r){\n"
        "    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = q;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = p(q, g);\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "vec4 u(vec2 w, mat4 x){\n"
        "    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n"
        "}\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * h) - i;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = v(w / h, n, o);\n"
        "    r = w;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = u(w, g);\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(t, vec2(q, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "vec4 o(vec2 p, mat4 q){\n"
        "    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = p;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = o(p, g);\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a09f04b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a09f04c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a09f04d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a0b4d6b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a0b4d6c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a0b4d82_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a16366b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a16366c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a16366d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a17938b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a17938c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle2a17938d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle32dc887c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle32dc887d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c424a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c424b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c424c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c4d90_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c4d91_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c4d92_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circle7f4c58d6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef0db6dc4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef0db6dc5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Circlef0db6dc6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5eefb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5eefc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5eefd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5eefe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5fe03_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5fe04_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5fe05_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Drawing_Primitives_bundle::Rectangle35a5fe06_, uFieldFlagsStatic);
    type->Reflection.SetFields(32,
        new uField("Circle2a09f04b", 0),
        new uField("Circle2a09f04c", 1),
        new uField("Circle2a09f04d", 2),
        new uField("Circle2a0b4d6b", 3),
        new uField("Circle2a0b4d6c", 4),
        new uField("Circle2a0b4d82", 5),
        new uField("Circle2a16366b", 6),
        new uField("Circle2a16366c", 7),
        new uField("Circle2a16366d", 8),
        new uField("Circle2a17938b", 9),
        new uField("Circle2a17938c", 10),
        new uField("Circle2a17938d", 11),
        new uField("Circle32dc887c", 12),
        new uField("Circle32dc887d", 13),
        new uField("Circle7f4c424a", 14),
        new uField("Circle7f4c424b", 15),
        new uField("Circle7f4c424c", 16),
        new uField("Circle7f4c4d90", 17),
        new uField("Circle7f4c4d91", 18),
        new uField("Circle7f4c4d92", 19),
        new uField("Circle7f4c58d6", 20),
        new uField("Circlef0db6dc4", 21),
        new uField("Circlef0db6dc5", 22),
        new uField("Circlef0db6dc6", 23),
        new uField("Rectangle35a5eefb", 24),
        new uField("Rectangle35a5eefc", 25),
        new uField("Rectangle35a5eefd", 26),
        new uField("Rectangle35a5eefe", 27),
        new uField("Rectangle35a5fe03", 28),
        new uField("Rectangle35a5fe04", 29),
        new uField("Rectangle35a5fe05", 30),
        new uField("Rectangle35a5fe06", 31));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a09f04b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a09f04c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a09f04d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a0b4d6b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a0b4d6c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a0b4d82_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a16366b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a16366c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a16366d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a17938b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a17938c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle2a17938d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle32dc887c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle32dc887d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c424a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c424b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c424c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c4d90_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c4d91_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c4d92_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circle7f4c58d6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef0db6dc4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef0db6dc5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Circlef0db6dc6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5eefb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5eefc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5eefd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5eefe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5fe03_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5fe04_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5fe05_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Drawing_Primitives_bundle::Rectangle35a5fe06_;
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.18.8/.upk/meta
// -----------------------------------------------------------

// public static generated class Fuse_Effects_bundle :0
// {
// static Fuse_Effects_bundle() :0
static void Fuse_Effects_bundle__cctor__fn(uType* __type)
{
    Fuse_Effects_bundle::Blitter1ef54105_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform mat...*/], ::STRINGS[125/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Effects_bundle::Blurec489e30_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform mat...*/], ::STRINGS[127/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[27/*"e"*/]));
    Fuse_Effects_bundle::Desaturatec68ecebc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[129/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    Fuse_Effects_bundle::EffectHelpers19f0dc38_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"attribute v...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Effects_bundle::EffectHelpers36c238d5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform vec...*/], ::STRINGS[133/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[47/*"m"*/]));
    Fuse_Effects_bundle::EffectHelpers4273de51_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[134/*"uniform vec...*/], ::STRINGS[135/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[91/*"t"*/]));
    Fuse_Effects_bundle::EffectHelpersde6318b0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"attribute v...*/], ::STRINGS[137/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Effects_bundle::Halftoneb6f474d8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform mat...*/], ::STRINGS[139/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[63/*"q"*/]));
    Fuse_Effects_bundle::Mask76ebab4c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform mat...*/], ::STRINGS[141/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Effects_bundle::Mask76ebab4d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform mat...*/], ::STRINGS[142/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Effects_bundle::Mask76ebab4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform mat...*/], ::STRINGS[143/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/]));
}

uClassType* Fuse_Effects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Effects_bundle", options);
    type->fp_cctor_ = Fuse_Effects_bundle__cctor__fn;
    ::STRINGS[124] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[126] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = texture2D(e, d);\n"
        "    gl_FragColor = vec4(f.xyz / f.w, f.w);\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / g.w, g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[132] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[133] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[134] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[91] = uString::Const("t");
    ::STRINGS[136] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[138] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[63] = uString::Const("q");
    ::STRINGS[140] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    d = h;\n"
        "    e = vec2(h.x, float(1) - h.y);\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).w);\n"
        "}\n"
        "");
    ::STRINGS[142] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform sampler2D f, g;\n"
        "\n"
        "varying vec2 d, e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(f, d);\n"
        "    vec4 i = vec4(h.xyz / h.w, h.w);\n"
        "    vec4 j = texture2D(g, e);\n"
        "    gl_FragColor = vec4(i.xyz * j.xyz, i.w * j.w);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Blitter1ef54105_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Blurec489e30_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Desaturatec68ecebc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpers19f0dc38_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpers36c238d5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpers4273de51_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::EffectHelpersde6318b0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Halftoneb6f474d8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Mask76ebab4c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Mask76ebab4d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Effects_bundle::Mask76ebab4e_, uFieldFlagsStatic);
    type->Reflection.SetFields(11,
        new uField("Blitter1ef54105", 0),
        new uField("Blurec489e30", 1),
        new uField("Desaturatec68ecebc", 2),
        new uField("EffectHelpers19f0dc38", 3),
        new uField("EffectHelpers36c238d5", 4),
        new uField("EffectHelpers4273de51", 5),
        new uField("EffectHelpersde6318b0", 6),
        new uField("Halftoneb6f474d8", 7),
        new uField("Mask76ebab4c", 8),
        new uField("Mask76ebab4d", 9),
        new uField("Mask76ebab4e", 10));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Blitter1ef54105_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Blurec489e30_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Desaturatec68ecebc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpers19f0dc38_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpers36c238d5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpers4273de51_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::EffectHelpersde6318b0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Halftoneb6f474d8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Mask76ebab4c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Mask76ebab4d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Effects_bundle::Mask76ebab4e_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.18.8/.upk/meta
// ------------------------------------------------------------

// public static generated class Fuse_Elements_bundle :0
// {
// static Fuse_Elements_bundle() :0
static void Fuse_Elements_bundle__cctor__fn(uType* __type)
{
    Fuse_Elements_bundle::CacheHelper09c90965_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[144/*"uniform vec...*/], ::STRINGS[145/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[31/*"g"*/]));
    Fuse_Elements_bundle::ElementBatch47d0cb7a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[147/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    Fuse_Elements_bundle::Scale9Rectangle3a507581_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[148/*"uniform flo...*/], ::STRINGS[149/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[64/*"r"*/]));
}

uClassType* Fuse_Elements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Elements_bundle", options);
    type->fp_cctor_ = Fuse_Elements_bundle__cctor__fn;
    ::STRINGS[144] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[145] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[146] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[147] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[148] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[61] = uString::Const("o");
    ::STRINGS[62] = uString::Const("p");
    ::STRINGS[64] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::CacheHelper09c90965_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::ElementBatch47d0cb7a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Elements_bundle::Scale9Rectangle3a507581_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("CacheHelper09c90965", 0),
        new uField("ElementBatch47d0cb7a", 1),
        new uField("Scale9Rectangle3a507581", 2));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::CacheHelper09c90965_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::ElementBatch47d0cb7a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Elements_bundle::Scale9Rectangle3a507581_;
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.18.8/.upk/meta
// ------------------------------------------------------------

// public static generated class Fuse_Entities_bundle :0
// {
// static Fuse_Entities_bundle() :0
static void Fuse_Entities_bundle__cctor__fn(uType* __type)
{
    Fuse_Entities_bundle::Blur17c40e2b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[150/*"uniform vec...*/], ::STRINGS[151/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[28/*"h"*/]));
    Fuse_Entities_bundle::FindEdges6e47be68_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform vec...*/], ::STRINGS[153/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[36/*"n"*/]));
    Fuse_Entities_bundle::MeshBatchingEngine2a0b934a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform mat...*/], ::STRINGS[155/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[63/*"q"*/], ::STRINGS[92/*"w"*/], ::STRINGS[108/*"x"*/], ::STRINGS[156/*"y"*/]));
    Fuse_Entities_bundle::MeshBatchingEngine6eb677fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[157/*"uniform mat...*/], ::STRINGS[158/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[62/*"p"*/], ::STRINGS[113/*"v"*/], ::STRINGS[92/*"w"*/], ::STRINGS[108/*"x"*/]));
    Fuse_Entities_bundle::MeshRenderer3c229be4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[159/*"uniform mat...*/], ::STRINGS[160/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    Fuse_Entities_bundle::MeshRendererf517efea_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[161/*"uniform mat...*/], ::STRINGS[162/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/]));
    Fuse_Entities_bundle::RenderToTexture36aca600_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[163/*"attribute v...*/], ::STRINGS[131/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
}

uClassType* Fuse_Entities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Entities_bundle", options);
    type->fp_cctor_ = Fuse_Entities_bundle__cctor__fn;
    ::STRINGS[150] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 j = (i.xy * 0.5) + 0.5;\n"
        "    d = j + b;\n"
        "    e = j - b;\n"
        "    f = j + c;\n"
        "    g = j - c;\n"
        "    gl_Position = vec4(i, float(1));\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 d, e, f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[152] = uString::Const("uniform vec2 b, c, d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2(a.x, 1.0 - a.y);\n"
        "    vec2 p = vec2(o.x, 1.0 - o.y);\n"
        "    i = p + b;\n"
        "    j = p + c;\n"
        "    k = p + d;\n"
        "    l = p + e;\n"
        "    m = p;\n"
        "    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n"
        "}\n"
        "");
    ::STRINGS[153] = uString::Const("uniform float f;\n"
        "uniform vec4 g, h;\n"
        "\n"
        "uniform sampler2D n;\n"
        "\n"
        "varying vec2 i, j, k, l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 o = texture2D(n, m).xyz;\n"
        "    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n"
        "    gl_FragColor = (g * (1.0 - p)) + (h * p);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[154] = uString::Const("uniform mat4 i[16], q, m[16];\n"
        "uniform vec2 j, k;\n"
        "\n"
        "attribute vec3 a, e;\n"
        "attribute float b;\n"
        "attribute vec2 c;\n"
        "attribute vec4 d;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "mat3 z(mat3 A){\n"
        "    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n"
        "    r = A * d.xyz;\n"
        "    s = A * (cross(d.xyz, e) * d.w);\n"
        "    t = A * e;\n"
        "    u = (c * j) + k;\n"
        "    v = (i[int(b)] * vec4(a, 1.)).xyz;\n"
        "    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[155] = uString::Const("uniform vec3 l, n, o;\n"
        "uniform float p;\n"
        "\n"
        "uniform sampler2D w, x, y;\n"
        "\n"
        "varying vec3 r, s, t, v;\n"
        "varying vec2 u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n"
        "    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[61] = uString::Const("o");
    ::STRINGS[62] = uString::Const("p");
    ::STRINGS[63] = uString::Const("q");
    ::STRINGS[92] = uString::Const("w");
    ::STRINGS[108] = uString::Const("x");
    ::STRINGS[156] = uString::Const("y");
    ::STRINGS[157] = uString::Const("uniform mat4 o, l, p;\n"
        "uniform vec2 h, i;\n"
        "\n"
        "attribute vec3 a, d;\n"
        "attribute vec2 b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n"
        "    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n"
        "    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n"
        "    t = (b * h) + i;\n"
        "    u = (l * vec4(a, 1.)).xyz;\n"
        "    gl_Position = o * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[158] = uString::Const("uniform vec3 j, k, m;\n"
        "uniform float n;\n"
        "\n"
        "uniform sampler2D v, w, x;\n"
        "\n"
        "varying vec3 q, r, s, u;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n"
        "    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n"
        "    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n"
        "    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("v");
    ::STRINGS[159] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = c * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[160] = uString::Const("uniform vec4 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b;\n"
        "}\n"
        "");
    ::STRINGS[161] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec3 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 1.);\n"
        "}\n"
        "");
    ::STRINGS[162] = uString::Const("void main()\n"
        "{\n"
        "    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[163] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::Blur17c40e2b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::FindEdges6e47be68_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshBatchingEngine2a0b934a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshBatchingEngine6eb677fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshRenderer3c229be4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::MeshRendererf517efea_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Entities_bundle::RenderToTexture36aca600_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Blur17c40e2b", 0),
        new uField("FindEdges6e47be68", 1),
        new uField("MeshBatchingEngine2a0b934a", 2),
        new uField("MeshBatchingEngine6eb677fe", 3),
        new uField("MeshRenderer3c229be4", 4),
        new uField("MeshRendererf517efea", 5),
        new uField("RenderToTexture36aca600", 6));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::Blur17c40e2b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::FindEdges6e47be68_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshBatchingEngine2a0b934a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshBatchingEngine6eb677fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshRenderer3c229be4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::MeshRendererf517efea_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Entities_bundle::RenderToTexture36aca600_;
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.18.8/.upk/meta
// -------------------------------------------------------

// public static generated class Fuse_iOS_bundle :0
// {
// static Fuse_iOS_bundle() :0
static void Fuse_iOS_bundle__cctor__fn(uType* __type)
{
    Fuse_iOS_bundle::Blittera700cac2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[164/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

uClassType* Fuse_iOS_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_iOS_bundle", options);
    type->fp_cctor_ = Fuse_iOS_bundle__cctor__fn;
    ::STRINGS[164] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "vec4 g(vec2 h, mat4 i){\n"
        "    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = g(c + (a * b), d);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_iOS_bundle::Blittera700cac2_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blittera700cac2", 0));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_iOS_bundle::Blittera700cac2_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.18.8/.upk/meta
// ------------------------------------------------------------

// public static generated class Fuse_Reactive_bundle :0
// {
// static Fuse_Reactive_bundle() :0
static void Fuse_Reactive_bundle__cctor__fn(uType* __type)
{
    Fuse_Reactive_bundle::es6_promise65d3556f_ = ::g::Uno::BundleFile::New1(::STRINGS[165/*"es6-promise...*/]);
    Fuse_Reactive_bundle::EventTargetfe7a4c5f_ = ::g::Uno::BundleFile::New1(::STRINGS[166/*"eventtarget...*/]);
    Fuse_Reactive_bundle::fetch84884530_ = ::g::Uno::BundleFile::New1(::STRINGS[167/*"fetch-90f6b...*/]);
    Fuse_Reactive_bundle::Fetchd49d9262_ = ::g::Uno::BundleFile::New1(::STRINGS[168/*"fetch-82c6f...*/]);
    Fuse_Reactive_bundle::FetchJson30fe5cda_ = ::g::Uno::BundleFile::New1(::STRINGS[169/*"fetchjson-7...*/]);
    Fuse_Reactive_bundle::Filee3230ba0_ = ::g::Uno::BundleFile::New1(::STRINGS[170/*"file-870ea4...*/]);
    Fuse_Reactive_bundle::FuseJSd72d48e0_ = ::g::Uno::BundleFile::New1(::STRINGS[171/*"fusejs-2118...*/]);
    Fuse_Reactive_bundle::localStorage4cad5b2c_ = ::g::Uno::BundleFile::New1(::STRINGS[172/*"localstorag...*/]);
    Fuse_Reactive_bundle::Observable3217a5e7_ = ::g::Uno::BundleFile::New1(::STRINGS[173/*"observable-...*/]);
    Fuse_Reactive_bundle::SubscriberProxy63f08776_ = ::g::Uno::BundleFile::New1(::STRINGS[174/*"subscriberp...*/]);
    Fuse_Reactive_bundle::Window8dee166c_ = ::g::Uno::BundleFile::New1(::STRINGS[175/*"window-4234...*/]);
    Fuse_Reactive_bundle::WindowBase64a775d7dd_ = ::g::Uno::BundleFile::New1(::STRINGS[176/*"windowbase6...*/]);
    Fuse_Reactive_bundle::WindowTimers1953cefe_ = ::g::Uno::BundleFile::New1(::STRINGS[177/*"windowtimer...*/]);
    Fuse_Reactive_bundle::XMLHttpRequest66fcfd0c_ = ::g::Uno::BundleFile::New1(::STRINGS[178/*"xmlhttprequ...*/]);
}

uClassType* Fuse_Reactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Reactive_bundle", options);
    type->fp_cctor_ = Fuse_Reactive_bundle__cctor__fn;
    ::STRINGS[165] = uString::Const("es6-promise-50b2740f.js");
    ::STRINGS[166] = uString::Const("eventtarget-bf1b1eff.js");
    ::STRINGS[167] = uString::Const("fetch-90f6b0d0.js");
    ::STRINGS[168] = uString::Const("fetch-82c6fd02.js");
    ::STRINGS[169] = uString::Const("fetchjson-75a1217a.js");
    ::STRINGS[170] = uString::Const("file-870ea4a8.js");
    ::STRINGS[171] = uString::Const("fusejs-211815e8.js");
    ::STRINGS[172] = uString::Const("localstorage-d30dc034.js");
    ::STRINGS[173] = uString::Const("observable-b4b458ef.js");
    ::STRINGS[174] = uString::Const("subscriberproxy-705ef316.js");
    ::STRINGS[175] = uString::Const("window-42340274.js");
    ::STRINGS[176] = uString::Const("windowbase64-2dd63ce5.js");
    ::STRINGS[177] = uString::Const("windowtimers-9fb43406.js");
    ::STRINGS[178] = uString::Const("xmlhttprequest-33b4b514.js");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::es6_promise65d3556f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::EventTargetfe7a4c5f_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::fetch84884530_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::Fetchd49d9262_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::FetchJson30fe5cda_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::Filee3230ba0_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::FuseJSd72d48e0_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::localStorage4cad5b2c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::Observable3217a5e7_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::SubscriberProxy63f08776_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::Window8dee166c_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::WindowBase64a775d7dd_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::WindowTimers1953cefe_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Reactive_bundle::XMLHttpRequest66fcfd0c_, uFieldFlagsStatic);
    type->Reflection.SetFields(14,
        new uField("es6_promise65d3556f", 0),
        new uField("EventTargetfe7a4c5f", 1),
        new uField("fetch84884530", 2),
        new uField("Fetchd49d9262", 3),
        new uField("FetchJson30fe5cda", 4),
        new uField("Filee3230ba0", 5),
        new uField("FuseJSd72d48e0", 6),
        new uField("localStorage4cad5b2c", 7),
        new uField("Observable3217a5e7", 8),
        new uField("SubscriberProxy63f08776", 9),
        new uField("Window8dee166c", 10),
        new uField("WindowBase64a775d7dd", 11),
        new uField("WindowTimers1953cefe", 12),
        new uField("XMLHttpRequest66fcfd0c", 13));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::es6_promise65d3556f_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::EventTargetfe7a4c5f_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::fetch84884530_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::Fetchd49d9262_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::FetchJson30fe5cda_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::Filee3230ba0_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::FuseJSd72d48e0_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::localStorage4cad5b2c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::Observable3217a5e7_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::SubscriberProxy63f08776_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::Window8dee166c_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::WindowBase64a775d7dd_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::WindowTimers1953cefe_;
uSStrong< ::g::Uno::BundleFile*> Fuse_Reactive_bundle::XMLHttpRequest66fcfd0c_;
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.18.8/.upk/meta
// ----------------------------------------------------------

// public static generated class Fuse_Themes_bundle :0
// {
// static Fuse_Themes_bundle() :0
static void Fuse_Themes_bundle__cctor__fn(uType* __type)
{
    Fuse_Themes_bundle::Roboto_Regular02d3dc60_ = ::g::Uno::BundleFile::New1(::STRINGS[16/*"roboto-regu...*/]);
}

uClassType* Fuse_Themes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Themes_bundle", options);
    type->fp_cctor_ = Fuse_Themes_bundle__cctor__fn;
    ::STRINGS[16] = uString::Const("roboto-regular-f5456817.ttf");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Fuse_Themes_bundle::Roboto_Regular02d3dc60_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Roboto_Regular02d3dc60", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Fuse_Themes_bundle::Roboto_Regular02d3dc60_;
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.18.8/.upk/meta
// ---------------------------------------------------------

// public static generated class Fuse_Video_bundle :0
// {
// static Fuse_Video_bundle() :0
static void Fuse_Video_bundle__cctor__fn(uType* __type)
{
    Fuse_Video_bundle::Scale9Rectangle6dee3bb8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[179/*"uniform flo...*/], ::STRINGS[180/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[31/*"g"*/], ::STRINGS[28/*"h"*/], ::STRINGS[32/*"i"*/], ::STRINGS[33/*"j"*/], ::STRINGS[34/*"k"*/], ::STRINGS[35/*"l"*/], ::STRINGS[47/*"m"*/], ::STRINGS[36/*"n"*/], ::STRINGS[61/*"o"*/], ::STRINGS[63/*"q"*/]));
    Fuse_Video_bundle::VideoDrawElement2ead3e8c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[181/*"uniform mat...*/], ::STRINGS[182/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[28/*"h"*/]));
}

uClassType* Fuse_Video_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse_Video_bundle", options);
    type->fp_cctor_ = Fuse_Video_bundle__cctor__fn;
    ::STRINGS[179] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[180] = uString::Const("uniform sampler2D q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[31] = uString::Const("g");
    ::STRINGS[28] = uString::Const("h");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[33] = uString::Const("j");
    ::STRINGS[34] = uString::Const("k");
    ::STRINGS[35] = uString::Const("l");
    ::STRINGS[47] = uString::Const("m");
    ::STRINGS[36] = uString::Const("n");
    ::STRINGS[61] = uString::Const("o");
    ::STRINGS[63] = uString::Const("q");
    ::STRINGS[181] = uString::Const("uniform mat4 f, c;\n"
        "uniform vec2 d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 i = (a * d) + e;\n"
        "    g = b ? vec2(i.x, 1.0 - i.y) : vec2(i.x, i.y);\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[182] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Video_bundle::Scale9Rectangle6dee3bb8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::Fuse_Video_bundle::VideoDrawElement2ead3e8c_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangle6dee3bb8", 0),
        new uField("VideoDrawElement2ead3e8c", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Video_bundle::Scale9Rectangle6dee3bb8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Fuse_Video_bundle::VideoDrawElement2ead3e8c_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.18.8/.upk/meta
// -------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpersbba46184_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[183/*"uniform vec...*/], ::STRINGS[184/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/]));
    FuseCore_bundle::OpenSans_Light34a53346_ = ::g::Uno::BundleFile::New1(::STRINGS[185/*"opensans-li...*/]);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    ::STRINGS[183] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[184] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[185] = uString::Const("opensans-light-eaf1b13e.ttf");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpersbba46184_, uFieldFlagsStatic,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::OpenSans_Light34a53346_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("DrawHelpersbba46184", 0),
        new uField("OpenSans_Light34a53346", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpersbba46184_;
uSStrong< ::g::Uno::BundleFile*> FuseCore_bundle::OpenSans_Light34a53346_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno(13)
// ---------------------------------------------------------------------------

// public sealed class HashableWeakReference :13
// {
uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("HashableWeakReference", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    ::TYPES[1] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof()), offsetof(::g::HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, HashableWeakReference_typeof(), 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof())),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :16
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :35
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, HashableWeakReference_typeof()) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, HashableWeakReference_typeof()))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :26
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :16
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :21
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :16
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :21
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :16
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.upk/meta
// ---------------------------------------------------------------------------

// public static generated class Outracks_Simulator_Client_Uno_bundle :0
// {
// static Outracks_Simulator_Client_Uno_bundle() :0
static void Outracks_Simulator_Client_Uno_bundle__cctor__fn(uType* __type)
{
    Outracks_Simulator_Client_Uno_bundle::fightb073b460_ = ::g::Uno::BundleFile::New1(::STRINGS[186/*"fight-af32b...*/]);
}

uClassType* Outracks_Simulator_Client_Uno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks_Simulator_Client_Uno_bundle", options);
    type->fp_cctor_ = Outracks_Simulator_Client_Uno_bundle__cctor__fn;
    ::STRINGS[186] = uString::Const("fight-af32bb4b.png");
    type->SetFields(0,
        ::g::Uno::BundleFile_typeof(), (uintptr_t)&::g::Outracks_Simulator_Client_Uno_bundle::fightb073b460_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fightb073b460", 0));
    return type;
}

uSStrong< ::g::Uno::BundleFile*> Outracks_Simulator_Client_Uno_bundle::fightb073b460_;
// }

// /usr/local/share/uno/Packages/UnoCore/0.19.6/.upk/meta
// ------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShader06541a00_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[187/*"uniform mat...*/], ::STRINGS[188/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[27/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[32/*"i"*/]));
    UnoCore_bundle::SpriteFontShaderf730f5ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[189/*"uniform mat...*/], ::STRINGS[190/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[31/*"g"*/]));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    ::STRINGS[187] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[188] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[27] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[32] = uString::Const("i");
    ::STRINGS[189] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[190] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShader06541a00_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShaderf730f5ae_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShader06541a00", 0),
        new uField("SpriteFontShaderf730f5ae", 1));
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShader06541a00_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShaderf730f5ae_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno(50)
// ---------------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :50
// {
uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("WeakDictionary`2", options);
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[4] = ::g::HashableWeakReference_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[6] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[7] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[3/*Uno.Collections.Dictionary`2*/]->MakeType(::TYPES[4/*HashableWeakReference*/], type->T(1)),
        ::TYPES[5/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[6/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[4/*HashableWeakReference*/], type->T(1))),
        ::TYPES[6/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[4/*HashableWeakReference*/], type->T(1)));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1)), offsetof(::g::WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1))), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
    return type;
}

// public generated WeakDictionary() :50
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() :54
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :59
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static HashableWeakReference GetKey(TKey obj) :75
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    return *__retval = ::g::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[7/*Uno.WeakReference<object>*/], uBoxPtr(__types[0], obj))), void();
}

// public TValue get_Item(TKey key) :71
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ::g::HashableWeakReference* ret5;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret5), ret5), &ret4), ret4)), void();
}

// public void set_Item(TKey key, TValue value) :72
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    ::g::HashableWeakReference* ret6;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), value);
}

// public generated WeakDictionary New() :50
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool TryGetValue(TKey key, TValue& value) :64
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    bool ret2;
    ::g::HashableWeakReference* ret3;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret3), ret3), value, &ret2), ret2), void();
}

// public generated WeakDictionary() [instance] :50
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
        __type->T(1),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() [instance] :54
uObject* WeakDictionary::AsEnumerable()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>>*/),
        __type->Precalced(2/*Uno.Collections.KeyValuePair<HashableWeakReference, TValue>*/),
        __type->T(1),
    };
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :59
void WeakDictionary::Clear()
{
    uPtr(_dictionary)->Clear();
}

// public generated WeakDictionary New() [static] :50
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

} // ::g
