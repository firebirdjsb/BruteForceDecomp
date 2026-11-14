#include "bf_0029_cpuid_dispatch.h"

#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <map>
#include <stdexcept>
#include <vector>

struct memory_state {
    std::map<std::uint32_t, std::uint32_t> words;
    std::vector<std::uint32_t> directions;
    std::vector<std::uint32_t> addresses;
    std::vector<std::uint32_t> values;
};

static memory_state *active_memory;

std::uint32_t bf_guest_read_u32(std::uint32_t guest_va)
{
    const auto found = active_memory->words.find(guest_va);
    if (found == active_memory->words.end())
        throw std::runtime_error("unmapped test guest DWORD read");
    active_memory->directions.push_back(0u);
    active_memory->addresses.push_back(guest_va);
    active_memory->values.push_back(found->second);
    return found->second;
}

void bf_guest_write_u32(std::uint32_t guest_va, std::uint32_t value)
{
    active_memory->directions.push_back(1u);
    active_memory->addresses.push_back(guest_va);
    active_memory->values.push_back(value);
    active_memory->words[guest_va] = value;
}

struct cpuid_fixture {
    std::uint32_t leaf = 0;
    std::uint32_t incoming_ecx = 0;
    std::uint32_t output_edx = 0;
};

static void execute_cpuid(void *opaque, std::uint32_t leaf,
                          std::uint32_t incoming_ecx,
                          bf_0029_cpuid_registers &outputs)
{
    cpuid_fixture *fixture = static_cast<cpuid_fixture *>(opaque);
    fixture->leaf = leaf;
    fixture->incoming_ecx = incoming_ecx;
    outputs.eax = UINT32_C(0x000006fb);
    outputs.ebx = UINT32_C(0x00000800);
    outputs.ecx = UINT32_C(0x13579bdf);
    outputs.edx = fixture->output_edx;
}

static std::uint32_t parse_hex(const char *text)
{
    return static_cast<std::uint32_t>(std::strtoul(text, nullptr, 16));
}

int main(int argc, char **argv)
{
    if (argc != 7) return 2;
    const bool second = parse_hex(argv[1]) != 0u;
    const std::uint32_t table_address = parse_hex(argv[2]);
    const std::uint32_t index = parse_hex(argv[3]);
    const std::uint32_t cpuid_edx = parse_hex(argv[4]);
    const std::uint32_t table_value = parse_hex(argv[5]);
    const std::uint32_t output_address = parse_hex(argv[6]);

    constexpr std::uint32_t stack = UINT32_C(0x00701000);
    constexpr std::uint32_t stop = UINT32_C(0x00800000);
    memory_state memory;
    memory.words[stack] = stop;
    memory.words[stack + 4u] = output_address;
    memory.words[stack + 8u] = index;
    memory.words[table_address] = table_value;
    active_memory = &memory;

    bf_guest32_constructor_state guest = {
        UINT32_C(0xaaaaaaaa), UINT32_C(0xb16b00b5),
        UINT32_C(0xc001d00d), UINT32_C(0xeeeeeeee),
        UINT32_C(0x51515151), UINT32_C(0xd1d1d1d1),
        UINT32_C(0xe2e2e2e2), stack, 0u,
        UINT32_C(0x00000202), 0u
    };
    cpuid_fixture fixture{0u, 0u, cpuid_edx};
    const bf_0029_cpuid_backend backend{&fixture, execute_cpuid};
    if (second) FUN_0029e480(guest, backend);
    else FUN_0029d6c0(guest, backend);

    std::cout << guest.eax << ' ' << guest.ebx << ' ' << guest.ecx << ' '
              << guest.edx << ' ' << guest.esi << ' ' << guest.edi << ' '
              << guest.ebp << ' ' << guest.esp << ' ' << guest.eip << ' '
              << guest.eflags << ' ' << guest.eflags_defined << ' '
              << fixture.leaf << ' ' << fixture.incoming_ecx << ' '
              << memory.addresses.size();
    for (std::size_t i = 0; i < memory.addresses.size(); ++i)
        std::cout << ' ' << memory.directions[i] << ' '
                  << memory.addresses[i] << ' ' << memory.values[i];
    std::cout << '\n';
    return 0;
}
