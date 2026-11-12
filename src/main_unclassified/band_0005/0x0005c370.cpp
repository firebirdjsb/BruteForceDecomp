/* Brute Force retail Xbox: FUN_0005c370, original entry 0x0005c370.
 * Input x86 body SHA-256: 04B8252F4A8A504453C3CBA5513BA6D7A496176F953B20F68C5228CAD23E22AB
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * Original x86 register/stack inputs are explicit host guest32 models,
 * NOT recovered native C++ prototypes. EFLAGS and other live-out registers,
 * guest mapping, fault timing and Xbox calling convention remain UNVERIFIED.
 * Original memory-access order is preserved for bounded guest32 executions.
 */
#include "bf_xbe_guest32_record_model.h"

static std::uint32_t bf_0005c370_sar2(std::uint32_t bits)
{
    return (bits >> 2) | ((bits & UINT32_C(0x80000000)) ? UINT32_C(0xc0000000) : 0);
}

std::uint32_t FUN_0005c370(std::uint32_t guest_ecx, std::uint32_t guest_eax,
                           std::uint32_t guest_stack_arg0)
{
    const std::uint32_t begin = bf_guest_read_u32(guest_ecx + UINT32_C(4));
    std::uint32_t cursor = begin;
    std::uint32_t count = 0;
    if (begin != 0) {
        const std::uint32_t end = bf_guest_read_u32(guest_ecx + UINT32_C(8));
        count = bf_0005c370_sar2(end - begin);
    }
    std::uint32_t eax = guest_eax;
    if (eax > count) {
        if (begin == 0) eax = 0;
        else {
            const std::uint32_t end = bf_guest_read_u32(guest_ecx + UINT32_C(8));
            eax = bf_0005c370_sar2(end - begin);
        }
    }
    if (eax != 0 && (eax & UINT32_C(0x80000000)) == 0) {
        const std::uint32_t element = bf_guest_read_u32(guest_stack_arg0);
        std::uint32_t i = 0;
        while (i < eax) {
            if (bf_guest_read_u32(cursor) == element)
                return (eax & UINT32_C(0xffffff00)) | UINT32_C(1);
            ++i;
            cursor += UINT32_C(4);
        }
    }
    // Original XOR AL,AL / MOV AL,1 changes only the low EAX byte.
    return eax & UINT32_C(0xffffff00);
}
