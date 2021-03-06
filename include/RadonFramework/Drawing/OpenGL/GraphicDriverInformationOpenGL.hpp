#ifndef RF_GRAPHICDRIVERINFORMATIONOPENGL_HPP
#define RF_GRAPHICDRIVERINFORMATIONOPENGL_HPP

#include <RadonFramework/Core/Types/String.hpp>
#include <RadonFramework/Core/Types/Float32.hpp>
#include <RadonFramework/Core/Types/Float64.hpp>
#include <RadonFramework/Collections/Array.hpp>
#include <RadonFramework/Drawing/OpenGL/OpenGLCapabilities.hpp>
#include <RadonFramework/Drawing/OpenGL/OpenGLCapabilitiesType.hpp>

namespace RadonFramework::Drawing {

class OpenGLCapability
{
public:
    OpenGLCapability();
    OpenGLCapability(const OpenGLCapability& Copy);
    OpenGLCapability(OpenGLCapabilitiesType::Type Type,
        const RF_Type::String& Name, RF_Type::UInt32 ElementCount = 1);
    ~OpenGLCapability();
    OpenGLCapability& operator =(const OpenGLCapability& Other);
    const RF_Type::Int32 GLInt(const RF_Type::UInt32 Index=0)const;
    const RF_Type::Bool GLBoolean(const RF_Type::UInt32 Index=0)const;
    const RF_Type::Float32 GLFloat(const RF_Type::UInt32 Index=0)const;
    const RF_Type::String& GLString(const RF_Type::UInt32 Index=0)const;
    const RF_Type::Float64 GLDouble(const RF_Type::UInt32 Index=0)const;
    const RF_Type::Int64 GLInt64(const RF_Type::UInt32 Index=0)const;
    RF_Type::String ToString()const;
    const RF_Type::String& Name()const;
    void* Ptr();
protected:
    void* m_Data;
    OpenGLCapabilitiesType::Type m_Type;
    RF_Type::UInt32 m_ElementCount;
    RF_Type::String m_Name;
};

struct GraphicDriverCapabilitiesOpenGL
{
    RF_Type::Bool IsAvaiable[OpenGLCapabilities::MAX];
    OpenGLCapability Value[OpenGLCapabilities::MAX];
    GraphicDriverCapabilitiesOpenGL();
    GraphicDriverCapabilitiesOpenGL(const GraphicDriverCapabilitiesOpenGL& Copy);
};

class GraphicDriverInformationOpenGL
{
public:
    GraphicDriverInformationOpenGL(
        RF_Collect::Array<RF_Type::String>& Extensions,
        GraphicDriverCapabilitiesOpenGL& Capabilities);

    const GraphicDriverCapabilitiesOpenGL& Capabilities()const;

    const RF_Collect::Array<RF_Type::String>& Extensions()const;
protected:
    GraphicDriverCapabilitiesOpenGL m_Capabilities;
    RF_Collect::Array<RF_Type::String> m_Extensions;
};

}

#ifndef RF_SHORTHAND_NAMESPACE_DRAW
#define RF_SHORTHAND_NAMESPACE_DRAW
namespace RF_Draw = RadonFramework::Drawing;
#endif

#endif // RF_GRAPHICDRIVERINFORMATIONOPENGL_HPP
