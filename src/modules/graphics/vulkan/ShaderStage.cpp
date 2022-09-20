/**
 * Copyright (c) 2006-2022 LOVE Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 **/

#include "ShaderStage.h"
#include "Graphics.h"

#include "libraries/glslang/glslang/Public/ShaderLang.h"
#include "libraries/glslang/SPIRV/GlslangToSpv.h"

#include <fstream>
#include <cstdio>

namespace love
{
namespace graphics
{
namespace vulkan
{

ShaderStage::ShaderStage(love::graphics::Graphics *gfx, ShaderStageType stage, const std::string &glsl, bool gles, const std::string &cachekey)
	: love::graphics::ShaderStage(gfx, stage, glsl, gles, cachekey)
{
	// the compilation is done in Shader.
}

ptrdiff_t ShaderStage::getHandle() const
{
	return 0;
}

} // love
} // graphics
} // vulkan