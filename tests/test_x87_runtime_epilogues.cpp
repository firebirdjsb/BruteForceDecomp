#include "bf_x87_runtime_epilogues.h"

#include <array>
#include <cassert>
#include <initializer_list>
#include <utility>

namespace {

constexpr uint32_t entry_flags = 0x0ed7;
constexpr uint32_t entry_edx = 0x11223344;
constexpr uint32_t return_va = 0x00554720;

enum operation { read_word, read_dword, write_word, exchange, pop_x87, load_control };

struct event {
    operation op;
    uint32_t address;
};

struct fixture {
    uint32_t base;
    bf_x87_runtime_state state{entry_edx, base, 0, entry_flags, 0xffffffffu};
    std::array<uint8_t, 8> stack{};
    std::array<uint32_t, 3> x87{0x12345678, 0xabcdef01, 0x7badbeef};
    uint16_t control = 0x037f;
    unsigned depth = 3;
    std::array<event, 4> events{};
    unsigned count = 0;
    unsigned fail_at = 0;

    bool visit(operation op, uint32_t address)
    {
        assert(count < events.size());
        events[count++] = {op, address};
        return count != fail_at;
    }

    uint32_t get(uint32_t address, unsigned width) const
    {
        const uint32_t offset = address - base; // guest DWORD wrap
        assert(offset <= stack.size() - width);
        uint32_t value = 0;
        for (unsigned byte = 0; byte < width; ++byte) {
            value |= uint32_t{stack[offset + byte]} << (8 * byte);
        }
        return value;
    }

    void put(uint32_t address, unsigned width, uint32_t value)
    {
        const uint32_t offset = address - base;
        assert(offset <= stack.size() - width);
        for (unsigned byte = 0; byte < width; ++byte) {
            stack[offset + byte] = static_cast<uint8_t>(value >> (8 * byte));
        }
    }

    void check_trace(std::initializer_list<event> expected) const
    {
        assert(count == expected.size());
        unsigned index = 0;
        for (const auto &item : expected) {
            assert(events[index].op == item.op && events[index].address == item.address);
            ++index;
        }
    }
};

bool read16(void *context, uint32_t address, uint16_t &value)
{
    auto &f = *static_cast<fixture *>(context);
    if (!f.visit(read_word, address)) {
        return false;
    }
    value = static_cast<uint16_t>(f.get(address, 2));
    return true;
}

bool read32(void *context, uint32_t address, uint32_t &value)
{
    auto &f = *static_cast<fixture *>(context);
    if (!f.visit(read_dword, address)) {
        return false;
    }
    value = f.get(address, 4);
    return true;
}

bool write16(void *context, uint32_t address, uint16_t value)
{
    auto &f = *static_cast<fixture *>(context);
    if (!f.visit(write_word, address)) {
        return false;
    }
    f.put(address, 2, value);
    return true;
}

bool fxch(void *context, uint32_t pc)
{
    auto &f = *static_cast<fixture *>(context);
    if (!f.visit(exchange, pc)) {
        return false;
    }
    std::swap(f.x87[0], f.x87[1]);
    return true;
}

bool fstp(void *context, uint32_t pc)
{
    auto &f = *static_cast<fixture *>(context);
    if (!f.visit(pop_x87, pc)) {
        return false;
    }
    --f.depth;
    f.x87[0] = f.x87[1];
    f.x87[1] = f.x87[2];
    return true;
}

bool fldcw(void *context, uint32_t pc, uint32_t address)
{
    auto &f = *static_cast<fixture *>(context);
    assert(f.state.eip == pc);
    if (!f.visit(load_control, address)) {
        return false;
    }
    f.control = static_cast<uint16_t>(f.get(address, 2));
    return true;
}

using routine = decltype(&FUN_002f04d0);

bool run(routine function, fixture &f)
{
    return function(f.state, {&f, read16, read32, write16}, {&f, fxch, fstp, fldcw});
}

void test_x87_pop()
{
    constexpr uint32_t base = 0xfffffffcu;
    fixture f{base};
    f.put(base, 4, return_va);
    assert(run(FUN_002f04d0, f));
    f.check_trace({{exchange, 0x2f04d0}, {pop_x87, 0x2f04d2}, {read_dword, base}});
    assert(f.depth == 2 && f.x87[0] == 0x12345678 && f.x87[1] == 0x7badbeef);
    assert(f.state.eip == return_va && f.state.esp == 0);
    assert(f.state.edx == entry_edx && f.state.eflags == entry_flags);
    assert(f.state.eflags_defined == 0xffffffffu && f.control == 0x037f);
    assert(f.get(base, 4) == return_va);

    constexpr uint32_t stops[] = {0x2f04d0, 0x2f04d2, 0x2f04d4};
    for (unsigned fault = 1; fault <= 3; ++fault) {
        fixture blocked{base};
        blocked.fail_at = fault;
        assert(!run(FUN_002f04d0, blocked));
        assert(blocked.count == fault && blocked.state.eip == stops[fault - 1]);
        assert(blocked.state.esp == base && blocked.depth == (fault == 3 ? 2u : 3u));
        assert(blocked.x87[0] == (fault == 2 ? 0xabcdef01u : 0x12345678u));
    }
}

void test_control_prepare()
{
    constexpr uint32_t base = 0xfffffffau;
    for (uint32_t precision = 0; precision < 4; ++precision) {
        fixture f{base};
        const uint32_t input = 0xbadcecc5u | (precision << 8);
        const uint32_t control = 0x7fu | (precision << 8);
        f.put(base, 4, return_va);
        f.put(base + 4u, 4, input);
        assert(run(FUN_002f060d, f));
        f.check_trace({{read_dword, base + 4u}, {write_word, 0}, {load_control, 0}, {read_dword, base}});
        assert(f.control == control && f.state.edx == control);
        assert(f.get(base + 4u, 4) == ((control << 16) | (input & 0xffffu)));
        assert(f.get(base, 4) == return_va && f.state.eip == return_va && f.state.esp == base + 4u);
        assert(f.state.eflags == (entry_flags & ~0x8c5u) && f.state.eflags_defined == 0xffffffefu);
    }

    constexpr uint32_t stops[] = {0x2f060d, 0x2f061a, 0x2f061f, 0x2f0623};
    for (unsigned fault = 1; fault <= 4; ++fault) {
        fixture blocked{base};
        blocked.put(base + 4u, 4, 0xcafe1234);
        blocked.fail_at = fault;
        assert(!run(FUN_002f060d, blocked));
        assert(blocked.count == fault && blocked.state.eip == stops[fault - 1]);
        assert(blocked.state.esp == base && blocked.state.edx == (fault == 1 ? entry_edx : 0x027fu));
        assert(blocked.get(base + 4u, 4) == (fault < 3 ? 0xcafe1234u : 0x027f1234u));
        assert(blocked.control == (fault < 4 ? 0x037f : 0x027f));
    }
}

uint32_t cmp_reference(uint32_t word)
{
    // Derive x86 arithmetic flags with independent integer comparisons.
    const int signed_word = word >= 0x8000 ? static_cast<int>(word) - 65536 : static_cast<int>(word);
    const int signed_difference = signed_word - 639;
    const unsigned wrapped = (word + 65536u - 639u) % 65536u;
    unsigned low_byte_ones = 0;
    for (unsigned bit = 0; bit < 8; ++bit) {
        low_byte_ones += (wrapped >> bit) % 2u;
    }
    return (word < 639 ? 1u : 0u) + (low_byte_ones % 2 == 0 ? 4u : 0u) +
           (word % 16 != 15 ? 16u : 0u) + (word == 639 ? 64u : 0u) +
           (wrapped >= 32768 ? 128u : 0u) +
           (signed_difference < -32768 || signed_difference > 32767 ? 2048u : 0u);
}

void test_control_restore()
{
    constexpr uint32_t base = 0xfffffffcu;
    for (uint32_t control = 0; control < 65536u; ++control) {
        fixture f{base};
        f.state.eflags_defined = 0;
        const uint32_t saved = 0xbeef0000u | control;
        f.put(base, 4, saved);
        f.put(0, 4, return_va);
        assert(run(FUN_002f0696, f));
        if (control == 0x027f) {
            f.check_trace({{read_word, base}, {read_dword, base}, {read_dword, 0}});
            assert(f.control == 0x037f);
        } else {
            f.check_trace({{read_word, base}, {load_control, base}, {read_dword, base}, {read_dword, 0}});
            assert(f.control == control);
        }
        assert(f.state.edx == saved && f.state.eip == return_va && f.state.esp == 4);
        assert(f.state.eflags == ((entry_flags & ~0x8d5u) | cmp_reference(control)));
        assert(f.state.eflags_defined == 0x8d5 && f.get(base, 4) == saved);
    }

    constexpr uint32_t stops[] = {0x2f0696, 0x2f069e, 0x2f06a1, 0x2f06a2};
    for (unsigned fault = 1; fault <= 4; ++fault) {
        fixture blocked{base};
        blocked.put(base, 4, 0xaaaabbbb);
        blocked.fail_at = fault;
        assert(!run(FUN_002f0696, blocked));
        assert(blocked.count == fault && blocked.state.eip == stops[fault - 1]);
        assert(blocked.state.esp == (fault == 4 ? 0 : base));
        assert(blocked.state.edx == (fault == 4 ? 0xaaaabbbbu : entry_edx));
        assert(blocked.control == (fault < 3 ? 0x037f : 0xbbbb));
    }
}

} // namespace

int main()
{
    test_x87_pop();
    test_control_prepare();
    test_control_restore();
}
