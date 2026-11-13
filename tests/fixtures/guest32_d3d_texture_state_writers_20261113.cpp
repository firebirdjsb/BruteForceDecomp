#include "bf_xbe_guest32_record_model.h"

#include <array>
#include <cstdio>
#include <cstdlib>
#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#endif

uint32_t D3D8LTCG__D3DDevice_SetTextureState_BorderColor_0(uint32_t, uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetTextureState_ColorKeyColor_0(uint32_t, uint32_t);
uint32_t D3D8LTCG__D3DDevice_SetVertexDataColor(uint32_t, uint32_t);

static constexpr uint32_t GLOBAL_BASE = 0x0037b000u;
static constexpr uint32_t GLOBAL_SIZE = 0x4000u;
static constexpr uint32_t GUEST_BASE = 0x00420000u;
static constexpr uint32_t GUEST_SIZE = 0x3000u;
static std::array<uint32_t, GLOBAL_SIZE / 4u> globals;
static std::array<uint32_t, GUEST_SIZE / 4u> guest;
static uint32_t refill_result;
static uint32_t refill_count;
static uint32_t refill_half;
static uint32_t refill_full;

static uint32_t& word(uint32_t address)
{
    if ((address & 3u) != 0u)
        std::abort();
    if (address >= GLOBAL_BASE && address - GLOBAL_BASE < GLOBAL_SIZE)
        return globals[(address - GLOBAL_BASE) / 4u];
    if (address >= GUEST_BASE && address - GUEST_BASE < GUEST_SIZE)
        return guest[(address - GUEST_BASE) / 4u];
    std::abort();
}

uint32_t bf_guest_read_u32(uint32_t address) { return word(address); }
void bf_guest_write_u32(uint32_t address, uint32_t value) { word(address) = value; }

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
    std::array<uint32_t, 4> input{};
    if (std::fread(input.data(), sizeof(uint32_t), input.size(), stdin) != input.size() ||
        std::fread(globals.data(), sizeof(uint32_t), globals.size(), stdin) != globals.size() ||
        std::fread(guest.data(), sizeof(uint32_t), guest.size(), stdin) != guest.size())
        return 1;

    refill_result = input[3];
    uint32_t result;
    switch (input[0]) {
    case 0x0036cd50u:
        result = D3D8LTCG__D3DDevice_SetVertexDataColor(input[1], input[2]);
        break;
    case 0x00370cc0u:
        result = D3D8LTCG__D3DDevice_SetTextureState_BorderColor_0(input[1], input[2]);
        break;
    case 0x00370d10u:
        result = D3D8LTCG__D3DDevice_SetTextureState_ColorKeyColor_0(input[1], input[2]);
        break;
    default:
        std::abort();
    }

    const std::array<uint32_t, 4> output = {result, refill_count, refill_half, refill_full};
    return std::fwrite(output.data(), sizeof(uint32_t), output.size(), stdout) == output.size() &&
           std::fwrite(globals.data(), sizeof(uint32_t), globals.size(), stdout) == globals.size() &&
           std::fwrite(guest.data(), sizeof(uint32_t), guest.size(), stdout) == guest.size() ? 0 : 1;
}
