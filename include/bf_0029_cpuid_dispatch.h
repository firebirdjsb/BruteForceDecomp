#ifndef BF_0029_CPUID_DISPATCH_H
#define BF_0029_CPUID_DISPATCH_H

#include "bf_xbe_guest32_constructors.h"

/* Backend for the original CPUID instruction. It receives leaf EAX and the
 * incoming ECX value, then supplies EAX/EBX/ECX/EDX outputs in guest state.
 * It must not use host CPUID as a substitute for the selected guest CPU.
 */
struct bf_0029_cpuid_backend {
    void *context;
    void (*execute)(void *, std::uint32_t leaf, std::uint32_t incoming_ecx,
                    struct bf_0029_cpuid_registers &outputs);
};

struct bf_0029_cpuid_registers {
    std::uint32_t eax, ebx, ecx, edx;
};

inline void bf_0029_execute_cpuid_dispatch(
    bf_guest32_constructor_state &guest,
    const bf_0029_cpuid_backend &cpuid,
    std::uint32_t entry,
    std::uint32_t table_feature_set,
    std::uint32_t table_feature_clear)
{
    using namespace bf_guest32_constructor;

    push(guest, entry + 0x00u, guest.ebx);
    push(guest, entry + 0x01u, guest.esi);
    guest.esi = read32(guest, entry + 0x02u, guest.esp + 0x10u);
    push(guest, entry + 0x06u, guest.edi);
    guest.edi = read32(guest, entry + 0x07u, guest.esp + 0x10u);

    write32(guest, entry + 0x0bu, guest.edi + 4u, guest.esi);
    guest.eax = 1u;
    guest.eip = entry + 0x13u;
    if (!cpuid.execute) return;
    bf_0029_cpuid_registers outputs{};
    cpuid.execute(cpuid.context, guest.eax, guest.ecx, outputs);
    guest.eax = outputs.eax;
    guest.ebx = outputs.ebx;
    guest.ecx = outputs.ecx;
    guest.edx = outputs.edx;

    // [ESP+0x14] aliases the second incoming stack argument at entry ESP+8.
    write32(guest, entry + 0x15u, guest.esp + 0x14u, guest.edx);
    const std::uint32_t feature_word =
        read32(guest, entry + 0x19u, guest.esp + 0x14u);
    logic_flags(guest, feature_word & 0x02000000u);

    const bool feature_set = (guest.eflags & zero) == 0;
    guest.eip = feature_set ? entry + 0x23u : entry + 0x35u;
    const std::uint32_t table_base =
        feature_set ? table_feature_set : table_feature_clear;
    const std::uint32_t table_address =
        table_base + guest.esi * 4u;
    if (feature_set) {
        guest.eax = read32(guest, entry + 0x23u, table_address);
        write32(guest, entry + 0x2au, guest.edi + 0x20u, guest.eax);
    } else {
        guest.ecx = read32(guest, entry + 0x35u, table_address);
        write32(guest, entry + 0x3cu, guest.edi + 0x20u, guest.ecx);
    }

    const std::uint32_t pop_edi = feature_set ? entry + 0x2du : entry + 0x3fu;
    const std::uint32_t pop_esi = feature_set ? entry + 0x2eu : entry + 0x40u;
    const std::uint32_t xor_eax = feature_set ? entry + 0x2fu : entry + 0x41u;
    const std::uint32_t pop_ebx = feature_set ? entry + 0x31u : entry + 0x43u;
    const std::uint32_t ret_8 = feature_set ? entry + 0x32u : entry + 0x44u;

    guest.edi = pop(guest, pop_edi);
    guest.esi = pop(guest, pop_esi);
    guest.eax = 0u;
    guest.eip = xor_eax;
    logic_flags(guest, guest.eax);
    guest.ebx = pop(guest, pop_ebx);
    ret(guest, ret_8);
    guest.esp += 8u;
}

/* These signatures describe emulator entry-state models, not Xbox C++ ABI
 * prototypes. Guest memory reads/writes route through the shared constructor
 * helpers and their backend. */
void FUN_0029d6c0(bf_guest32_constructor_state &guest,
                  const bf_0029_cpuid_backend &cpuid);
void FUN_0029e480(bf_guest32_constructor_state &guest,
                  const bf_0029_cpuid_backend &cpuid);

#endif
