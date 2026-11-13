#include "bf_xbe_guest32_record_model.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

uint32_t D3D8LTCG__D3DDevice_SetVertexData4f_16(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t FUN_0036dcc0(uint32_t);
uint32_t FUN_0036fb10(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_CullMode(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_FrontFace(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_Dxt1NoiseEnable(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetRenderState_YuvEnable(uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetTextureState_TexCoordIndex_4(uint32_t, uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetTextureState_BumpEnv_8(uint32_t, uint32_t, uint32_t);
uint32_t FUN_00371190(uint32_t, uint32_t);

static constexpr uint32_t GLOBAL_BASE = 0x0037b000u;
static constexpr uint32_t GLOBAL_SIZE = 0x4000u;
static constexpr uint32_t GUEST_BASE = 0x00420000u;
static constexpr uint32_t GUEST_SIZE = 0x3000u;
static std::array<uint32_t, GLOBAL_SIZE / 4u> globals;
static std::array<uint32_t, GUEST_SIZE / 4u> guest;
static std::array<uint32_t, 0x1000u / 4u> table;
static uint32_t refill_result;
static uint32_t refill_count;
static uint32_t refill_half;
static uint32_t refill_full;

static uint32_t& word(uint32_t address)
{
    if ((address & 3u) != 0u)
        std::abort();
    if (address - GLOBAL_BASE < GLOBAL_SIZE)
        return globals[(address - GLOBAL_BASE) / 4u];
    if (address - GUEST_BASE < GUEST_SIZE)
        return guest[(address - GUEST_BASE) / 4u];
    if (address - 0x003b7000u < 0x1000u)
        return table[(address - 0x003b7000u) / 4u];
    std::abort();
}

uint32_t bf_guest_read_u32(uint32_t address) { return word(address); }
void bf_guest_write_u32(uint32_t address, uint32_t value) { word(address) = value; }

uint8_t bf_guest_read_u8(uint32_t address)
{
    return static_cast<uint8_t>(word(address & ~3u) >> ((address & 3u) * 8u));
}

void bf_guest_write_u8(uint32_t address, uint8_t value)
{
    const uint32_t shift = (address & 3u) * 8u;
    uint32_t& destination = word(address & ~3u);
    destination = (destination & ~(0xffu << shift)) | (uint32_t(value) << shift);
}

// Test-only oracle: record the guest DWORDs passed to the refill edge and
// return the test cursor. It does not model the retail refill routine.
uint32_t D3D8LTCG__D3D_MakeRequestedSpace_8(int half, int full)
{
    ++refill_count;
    refill_half = static_cast<uint32_t>(half);
    refill_full = static_cast<uint32_t>(full);
    return refill_result;
}

int main()
{
#ifdef _WIN32
    _setmode(_fileno(stdin), _O_BINARY);
    _setmode(_fileno(stdout), _O_BINARY);
#endif
    std::array<uint32_t, 7> input{};
    if (std::fread(input.data(), sizeof(uint32_t), input.size(), stdin) != input.size() ||
        std::fread(globals.data(), sizeof(uint32_t), globals.size(), stdin) != globals.size() ||
        std::fread(guest.data(), sizeof(uint32_t), guest.size(), stdin) != guest.size() ||
        std::fread(table.data(), sizeof(uint32_t), table.size(), stdin) != table.size())
        return 1;

    refill_result = input[6];
    uint32_t result;
    switch (input[0]) {
    case 0x0036ccf0u:
        result = D3D8LTCG__D3DDevice_SetVertexData4f_16(input[1], input[2], input[3], input[4], input[5]);
        break;
    case 0x0036dcc0u:
        result = FUN_0036dcc0(input[1]);
        break;
    case 0x0036fb10u:
        result = FUN_0036fb10(input[2]);
        break;
    case 0x00370260u:
        result = D3D8LTCG__D3DDevice_SetRenderState_CullMode(input[2]);
        break;
    case 0x003702e0u:
        result = D3D8LTCG__D3DDevice_SetRenderState_FrontFace(input[2]);
        break;
    case 0x00370600u:
        result = D3D8LTCG__D3DDevice_SetRenderState_Dxt1NoiseEnable(input[2]);
        break;
    case 0x00370680u:
        result = D3D8LTCG__D3DDevice_SetRenderState_YuvEnable(input[2]);
        break;
    case 0x00370b40u:
        result = D3D8LTCG__D3DDevice_SetTextureState_TexCoordIndex_4(input[1], input[2]);
        break;
    case 0x00370c50u:
        result = D3D8LTCG__D3DDevice_SetTextureState_BumpEnv_8(input[1], input[2], input[3]);
        break;
    case 0x00371190u:
        result = FUN_00371190(input[2], input[1]);
        break;
    default:
        std::abort();
    }

    const std::array<uint32_t, 4> output = {result, refill_count, refill_half, refill_full};
    return std::fwrite(output.data(), sizeof(uint32_t), output.size(), stdout) == output.size() &&
           std::fwrite(globals.data(), sizeof(uint32_t), globals.size(), stdout) == globals.size() &&
           std::fwrite(guest.data(), sizeof(uint32_t), guest.size(), stdout) == guest.size() &&
           std::fwrite(table.data(), sizeof(uint32_t), table.size(), stdout) == table.size() ? 0 : 1;
}
