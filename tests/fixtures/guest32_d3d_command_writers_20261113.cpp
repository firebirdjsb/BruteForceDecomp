#include "bf_xbe_guest32_record_model.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

uint32_t D3D8LTCG__D3DDevice_SetRenderState_ShadowFunc(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_FogColor(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_CullMode(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_NormalizeNormals(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_StencilEnable(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_StencilFail(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_TextureFactor(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_OcclusionCullEnable(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_StencilCullEnable(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_LogicOp(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_VertexBlend(uint32_t);

static std::array<uint32_t, 0x3000 / 4> globals;
static std::array<uint32_t, 0x3000 / 4> guest;
static std::array<uint32_t, 3> refill_args;
static uint32_t refill_result;

static uint32_t& word(uint32_t address)
{
    const uint32_t global_offset = address - 0x0037d000u;
    const uint32_t guest_offset = address - 0x00420000u;
    if (address % 4 != 0u)
        std::abort();
    if (global_offset < 0x3000u)
        return globals[global_offset / 4u];
    if (guest_offset < 0x3000u)
        return guest[guest_offset / 4u];
    std::abort();
}

uint32_t bf_guest_read_u32(uint32_t address) { return word(address); }
void bf_guest_write_u32(uint32_t address, uint32_t value) { word(address) = value; }

// Record the exact pushed DWORDs and return the fixture's guest cursor.
uint32_t D3D8LTCG__D3D_MakeRequestedSpace_8(int half, int full)
{
    ++refill_args[0];
    refill_args[1] = static_cast<uint32_t>(half);
    refill_args[2] = static_cast<uint32_t>(full);
    return refill_result;
}

int main()
{
#ifdef _WIN32
    _setmode(_fileno(stdin), _O_BINARY);
    _setmode(_fileno(stdout), _O_BINARY);
#endif
    std::array<uint32_t, 3> input{};
    if (std::fread(input.data(), 4, input.size(), stdin) != input.size() ||
        std::fread(globals.data(), 4, globals.size(), stdin) != globals.size() ||
        std::fread(guest.data(), 4, guest.size(), stdin) != guest.size())
        return 1;
    refill_result = input[2];
    uint32_t result;
    switch (input[0]) {
    case 0x003701c0u: result = D3D8LTCG__D3DDevice_SetRenderState_ShadowFunc(input[1]); break;
    case 0x00370200u: result = D3D8LTCG__D3DDevice_SetRenderState_FogColor(input[1]); break;
    case 0x00370260u: result = D3D8LTCG__D3DDevice_SetRenderState_CullMode(input[1]); break;
    case 0x00370330u: result = D3D8LTCG__D3DDevice_SetRenderState_NormalizeNormals(input[1]); break;
    case 0x00370420u: result = D3D8LTCG__D3DDevice_SetRenderState_StencilEnable(input[1]); break;
    case 0x003704b0u: result = D3D8LTCG__D3DDevice_SetRenderState_StencilFail(input[1]); break;
    case 0x00370530u: result = D3D8LTCG__D3DDevice_SetRenderState_TextureFactor(input[1]); break;
    case 0x003706c0u: result = D3D8LTCG__D3DDevice_SetRenderState_OcclusionCullEnable(input[1]); break;
    case 0x00370730u: result = D3D8LTCG__D3DDevice_SetRenderState_StencilCullEnable(input[1]); break;
    case 0x00370990u: result = D3D8LTCG__D3DDevice_SetRenderState_LogicOp(input[1]); break;
    case 0x00370a90u: result = D3D8LTCG__D3DDevice_SetRenderState_VertexBlend(input[1]); break;
    default: std::abort();
    }
    return std::fwrite(&result, 4, 1, stdout) == 1 &&
           std::fwrite(refill_args.data(), 4, refill_args.size(), stdout) == refill_args.size() &&
           std::fwrite(globals.data(), 4, globals.size(), stdout) == globals.size() &&
           std::fwrite(guest.data(), 4, guest.size(), stdout) == guest.size() ? 0 : 1;
}
