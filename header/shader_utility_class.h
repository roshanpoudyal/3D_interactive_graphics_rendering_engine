/* ********************************************************************************************************
    * Header only shader utility class for our OpenGL SDK.
    * This shader utility class reads shaders from disk, compiles and links them, checks for errors.
    * This shader utility class is meant for ease of use and separate shader files from C++ source.
***********************************************************************************************************/
#ifndef SHADER_UTILITY_H
#define SHADER_UTILITY_H

#include <glad/glad.h> // include glad to get all the required OpenGL headers

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class ShaderUtility
{
public :
    // this shader utility class holds the id of the shader program
    unsigned int shader_program_ID;

    // this constructor reads and builds the shader immediately
    ShaderUtility(const GLchar* vertex_shader_path, const GLchar* fragment_shader_path)
    {
        // get vertex/fragment shader source code from file path
        std::string vertex_shader_code_stream;
        std::string fragment_shader_code_stream;
        std::ifstream vertex_shader_file;
        std::ifstream fragment_shader_file;

        // ensure ifstream objects can throw exceptions
        vertex_shader_file.exceptions(std::ifstream::failbit | std::fstream::badbit);
        fragment_shader_file.exceptions(std::ifstream::failbit | std::fstream::badbit);

        // now we try to open files
        try
        {
            // open files
            vertex_shader_file.open(vertex_shader_path);
            fragment_shader_file.open(fragment_shader_path);
            std::stringstream vertex_shader_stream, fragment_shader_stream;
            // read shader files buffer contents into streams
            vertex_shader_stream << vertex_shader_file.rdbuf();
            fragment_shader_stream << fragment_shader_file.rdbuf();
            // close file handlers
            vertex_shader_file.close();
            fragment_shader_file.close();
            // convert the file stream into string
            vertex_shader_code_stream = vertex_shader_stream.str();
            fragment_shader_code_stream = fragment_shader_stream.str();

        }
        catch (std::ifstream::failure file_read_error)
        {
            std::cout << "ERROR::SHADER::COULD_NOT_READ_FILE" << std::endl;
        }

        const char* vertex_shader_code = vertex_shader_code_stream.c_str();
        const char* fragment_shader_code = fragment_shader_code_stream.c_str();

        // now we compile the shaders
        unsigned int vertex_shader, fragment_shader;
        // compile vertex shader
        vertex_shader = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vertex_shader, 1, &vertex_shader_code, NULL);
        glCompileShader(vertex_shader);
        checkCompileErrors(vertex_shader, "VERTEX");
        // compile fragment Shader
        fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
        glShaderSource(fragment_shader, 1, &fragment_shader_code, NULL);
        glCompileShader(fragment_shader);
        checkCompileErrors(fragment_shader, "FRAGMENT");
        // wholesome shader Program combining all other shaders
        shader_program_ID = glCreateProgram();
        glAttachShader(shader_program_ID, vertex_shader);
        glAttachShader(shader_program_ID, fragment_shader);
        glLinkProgram(shader_program_ID);
        checkCompileErrors(shader_program_ID, "PROGRAM");
        // delete the shaders as they're linked into our program now and no longer necessary
        glDeleteShader(vertex_shader);
        glDeleteShader(fragment_shader);
    }

    // use/activate the shader
    void use()
    {
        glUseProgram(shader_program_ID);
    }

    // uniform utility functions
    void setBool(const std::string &uniform_variable_name, bool value) const
    {
        glUniform1i(glGetUniformLocation(shader_program_ID, uniform_variable_name.c_str()), (int)value);
    }

    void setInt(const std::string &uniform_variable_name, int value) const
    {
         glUniform1i(glGetUniformLocation(shader_program_ID, uniform_variable_name.c_str()), value);
    }

    void setFloat(const std::string &uniform_variable_name, float value) const
    {
        glUniform1f(glGetUniformLocation(shader_program_ID, uniform_variable_name.c_str()), value);
    }

private:
    // utility function for checking shader compilation/linking errors.
    // ------------------------------------------------------------------------
    void checkCompileErrors(unsigned int shader, std::string type)
    {
        int success;
        char infoLog[1024];
        if (type != "PROGRAM")
        {
            glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
            if (!success)
            {
                glGetShaderInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
        else
        {
            glGetProgramiv(shader, GL_LINK_STATUS, &success);
            if (!success)
            {
                glGetProgramInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::PROGRAM_LINKING_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
    }
};

#endif