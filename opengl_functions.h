#pragma once
#include <stddef.h>
void (*glAttachShader)(unsigned, unsigned);
void (*glBeginTransformFeedback)(unsigned);
void (*glBindFramebuffer)(unsigned, unsigned);
void (*glBindProgramPipeline)(unsigned);
void (*glBindSamplers)(int, int, unsigned *);
void (*glBindTextures)(int, int, unsigned *);
void (*glBindTransformFeedback)(unsigned, unsigned);
void (*glBlitNamedFramebuffer)(unsigned, unsigned, int, int, int, int, int, int, int, int, unsigned, unsigned);
void (*glClear)(unsigned);
void (*glClearColor)(float, float, float, float);
void (*glClearTexSubImage)(unsigned, int, int, int, int, int, int, int, unsigned, unsigned, void *);
void (*glCompressedTextureSubImage3D)(unsigned, int, int, int, int, int, int, int, unsigned, int, void *);
void (*glCompileShader)(unsigned);
void (*glCreateBuffers)(int, unsigned *);
void (*glCreateFramebuffers)(int, unsigned *);
unsigned (*glCreateProgram)();
void (*glCreateProgramPipelines)(int, unsigned *);
void (*glCreateSamplers)(int, unsigned *);
unsigned (*glCreateShader)(unsigned);
void (*glCreateTextures)(unsigned, int, unsigned *);
void (*glCreateTransformFeedbacks)(int, unsigned *);
void (*glDebugMessageCallback)(void *, void *);
void (*glDeleteBuffers)(int, unsigned *);
void (*glDeleteFramebuffers)(int, unsigned *);
void (*glDeleteProgram)(unsigned);
void (*glDeleteProgramPipelines)(int, unsigned *);
void (*glDeleteSamplers)(int, unsigned *);
void (*glDeleteShader)(unsigned);
void (*glDeleteTextures)(int, unsigned *);
void (*glDeleteTransformFeedbacks)(int, unsigned *);
void (*glDetachShader)(unsigned, unsigned);
void (*glDisable)(unsigned);
void (*glDrawArraysInstanced)(unsigned, int, int, int);
void (*glEnable)(unsigned);
void (*glEndTransformFeedback)();
void (*glFinish)();
void (*glGenTextures)(int, unsigned *);
void (*glGetCompressedTextureSubImage)(unsigned, int, int, int, int, int, int, int, int, void *);
void (*glGetTextureSubImage)(unsigned, int, int, int, int, int, int, int, unsigned, unsigned, int, void *);
void (*glLinkProgram)(unsigned);
void * (*glMapNamedBufferRange)(unsigned, ptrdiff_t, ptrdiff_t, unsigned);
void (*glNamedBufferStorage)(unsigned, ptrdiff_t, void *, unsigned);
void (*glNamedFramebufferDrawBuffer)(unsigned, int);
void (*glNamedFramebufferDrawBuffers)(unsigned, int, int *);
void (*glNamedFramebufferReadBuffer)(unsigned, int);
void (*glNamedFramebufferTextureLayer)(unsigned, int, unsigned, int, int);
void (*glProgramParameteri)(unsigned, unsigned, int);
void (*glProgramUniform1fv)(unsigned, int, int, float *);
void (*glProgramUniform1iv)(unsigned, int, int, int *);
void (*glProgramUniform1uiv)(unsigned, int, int, unsigned *);
void (*glProgramUniform2fv)(unsigned, int, int, float *);
void (*glProgramUniform3fv)(unsigned, int, int, float *);
void (*glProgramUniform4fv)(unsigned, int, int, float *);
void (*glSamplerParameteri)(unsigned, unsigned, int);
void (*glScissor)(int, int, int, int);
void (*glShaderSource)(unsigned, int, char **, int *);
void (*glTextureBufferRange)(unsigned, unsigned, unsigned, ptrdiff_t, ptrdiff_t);
void (*glTextureStorage3D)(unsigned, int, unsigned, int, int, int);
void (*glTextureStorage3DMultisample)(unsigned, int, unsigned, int, int, int, int);
void (*glTextureSubImage3D)(unsigned, int, int, int, int, int, int, int, unsigned, unsigned, void *);
void (*glTextureView)(unsigned, unsigned, unsigned, unsigned, int, int, int, int);
void (*glTransformFeedbackBufferRange)(unsigned, int, unsigned, ptrdiff_t, ptrdiff_t);
void (*glTransformFeedbackVaryings)(unsigned, int, char **, unsigned);
void (*glUseProgramStages)(unsigned, unsigned, unsigned);
void (*glViewport)(int, int, int, int);