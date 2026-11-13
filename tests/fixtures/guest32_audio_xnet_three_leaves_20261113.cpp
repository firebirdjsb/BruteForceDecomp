#include "bf_xbe_guest32_audio_xnet_leaves.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <unordered_map>
#include <vector>

struct Event {
    char operation;
    uint32_t address;
    uint32_t value;
    bool operator==(const Event& other) const {
        return operation == other.operation && address == other.address && value == other.value;
    }
};

static std::unordered_map<uint32_t, uint8_t> memory;
static std::vector<Event> events;

static void expect(bool value, const char* message)
{
    if (!value) {
        std::fprintf(stderr, "FAIL: %s\n", message);
        std::exit(1);
    }
}

static uint8_t peek8(uint32_t address)
{
    const auto found = memory.find(address);
    return found == memory.end() ? 0u : found->second;
}

static uint16_t peek16(uint32_t address)
{
    return static_cast<uint16_t>(peek8(address)) |
           static_cast<uint16_t>(static_cast<uint16_t>(peek8(address + 1u)) << 8);
}

static uint32_t peek32(uint32_t address)
{
    return static_cast<uint32_t>(peek8(address)) |
           (static_cast<uint32_t>(peek8(address + 1u)) << 8) |
           (static_cast<uint32_t>(peek8(address + 2u)) << 16) |
           (static_cast<uint32_t>(peek8(address + 3u)) << 24);
}

static void seed8(uint32_t address, uint8_t value) { memory[address] = value; }

static void seed16(uint32_t address, uint16_t value)
{
    seed8(address, static_cast<uint8_t>(value));
    seed8(address + 1u, static_cast<uint8_t>(value >> 8));
}

static void seed32(uint32_t address, uint32_t value)
{
    for (unsigned i = 0; i != 4; ++i)
        seed8(address + i, static_cast<uint8_t>(value >> (8u * i)));
}

uint8_t bf_guest_read_u8(uint32_t address)
{
    const uint8_t value = peek8(address);
    events.push_back({'B', address, value});
    return value;
}

uint16_t bf_guest_read_u16(uint32_t address)
{
    const uint16_t value = peek16(address);
    events.push_back({'H', address, value});
    return value;
}

uint32_t bf_guest_read_u32(uint32_t address)
{
    const uint32_t value = peek32(address);
    events.push_back({'R', address, value});
    return value;
}

void bf_guest_write_u8(uint32_t address, uint8_t value)
{
    events.push_back({'b', address, value});
    seed8(address, value);
}

void bf_guest_write_u16(uint32_t address, uint16_t value)
{
    events.push_back({'h', address, value});
    seed16(address, value);
}

void bf_guest_write_u32(uint32_t address, uint32_t value)
{
    events.push_back({'W', address, value});
    seed32(address, value);
}

static void check_events(const char* label, const std::vector<Event>& expected)
{
    expect(events == expected, label);
}

int main()
{
    constexpr uint32_t base = 0x00420000u;

    // 00315838: successful 32-byte-stride address and out-of-range no-store path.
    memory.clear(); events.clear();
    const uint32_t ecx158 = base + 0x100u, table158 = base + 0x2000u;
    const uint32_t out158 = base + 0x3000u;
    seed32(ecx158 + 0x20u, table158); seed32(table158, 3u);
    expect(FUN_00315838(ecx158, 2u, out158) == 0u, "15838 success EAX");
    expect(peek32(out158) == table158 + 72u, "15838 success output address");
    check_events("15838 success access order", {
        {'R', ecx158 + 0x20u, table158}, {'R', table158, 3u},
        {'W', out158, table158 + 72u}});

    memory.clear(); events.clear();
    seed32(ecx158 + 0x20u, table158); seed32(table158, 3u); seed32(out158, 0xA5A55A5Au);
    expect(FUN_00315838(ecx158, 3u, out158) == 0x88780032u, "15838 failure EAX");
    expect(peek32(out158) == 0xA5A55A5Au, "15838 failure leaves output untouched");
    check_events("15838 failure access order", {
        {'R', ecx158 + 0x20u, table158}, {'R', table158, 3u}});

    // 0031685c: WORD input, initial DWORD output, byte ORs, then optional DWORD OR.
    const uint32_t ecx168 = base + 0x400u, out168 = base + 0x500u;
    const uint32_t head168 = ecx168 + 0xb8u;
    memory.clear(); events.clear(); seed16(ecx168 + 0x12u, 0x2403u);
    seed32(head168, head168);  // Circular/empty list gives linked=false.
    expect(DSOUND__CMcpxStream_GetStatus(ecx168, out168) == 0u, "1685c EAX");
    expect(peek32(out168) == 0x000E0000u, "1685c final DWORD after byte flags");
    check_events("1685c status flag access order", {
        {'H', ecx168 + 0x12u, 0x2403u}, {'R', head168, head168}, {'W', out168, 0u},
        {'B', out168 + 2u, 0u}, {'b', out168 + 2u, 8u},
        {'B', out168 + 2u, 8u}, {'b', out168 + 2u, 10u},
        {'R', out168, 0x000A0000u}, {'W', out168, 0x000E0000u}});
    expect(peek8(out168 + 3u) == 0u, "1685c neighboring output byte preserved");

    memory.clear(); events.clear(); seed16(ecx168 + 0x12u, 0x8001u);
    seed32(head168, 0u);
    expect(DSOUND__CMcpxStream_GetStatus(ecx168, out168) == 0u, "1685c alternate EAX");
    expect(peek32(out168) == 0x00010001u, "1685c alternate status byte OR");
    check_events("1685c alternate path", {
        {'H', ecx168 + 0x12u, 0x8001u}, {'R', head168, 0u}, {'W', out168, 1u},
        {'B', out168 + 2u, 0u}, {'b', out168 + 2u, 1u}});

    // 00353125: null insertion point chooses ECX sentinel, insertion order exact.
    memory.clear(); events.clear();
    const uint32_t ecx531 = base + 0x900u, sentinel531 = ecx531 + 0x24u;
    const uint32_t node531 = base + 0xA00u;
    seed32(sentinel531, base + 0xB00u);
    expect(FUN_00353125(ecx531, node531, 0u) == sentinel531, "53125 sentinel EAX");
    check_events("53125 sentinel access order", {
        {'R', sentinel531, base + 0xB00u}, {'W', node531, base + 0xB00u},
        {'W', node531 + 4u, sentinel531}, {'R', sentinel531, base + 0xB00u},
        {'W', base + 0xB04u, node531}, {'W', sentinel531, node531}});

    // Aliased node and insertion link proves the body reloads the link after stores.
    memory.clear(); events.clear();
    const uint32_t aliased = base + 0xC00u;
    seed32(aliased, base + 0xD00u);
    expect(FUN_00353125(ecx531, aliased, aliased) == aliased, "53125 alias EAX");
    check_events("53125 aliased access order", {
        {'R', aliased, base + 0xD00u}, {'W', aliased, base + 0xD00u},
        {'W', aliased + 4u, aliased}, {'R', aliased, base + 0xD00u},
        {'W', base + 0xD04u, aliased}, {'W', aliased, aliased}});

    std::puts("PASS three guest32 leaves: access widths/order, EAX, partial writes, aliases");
    return 0;
}
