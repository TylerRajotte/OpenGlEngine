#ifndef Shader_H
#define Shader_H

#include "renderer.h"

class Shader{
    public:
        void CompileShaders();
        bool ReadFile(const char* pFileName, std::string& outFile);
        void AddShader(GLuint* ShaderProgram, const char* pShaderText, GLenum ShaderType);
    private:
        const char* pVSFileName = "Shaders/shader.vs";
        const char* pFSFileName = "Shaders/shader.fs";
};

#endif