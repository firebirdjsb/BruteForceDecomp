/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: E0E604CFAFD570E5CF46E0E0E3223EF9F90F1C9FE60DBDEB08DEB81C55134133
 * Entry: 0x00039380, Ghidra index: 396, label: FUN_00039380
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_initializers.h"

bool FUN_00039380(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using namespace bf_x87_rotation;
    constexpr std::array<initializer_store, 9> stores{{
        {pointer_register::edx, initializer_value::cosine, true},
        {pointer_register::ecx, initializer_value::clear_eax_and_store},
        {pointer_register::edx, initializer_value::sine, true},
        {pointer_register::ecx, initializer_value::zero},
        {pointer_register::edx, initializer_value::one},
        {pointer_register::ecx, initializer_value::zero},
        {pointer_register::edx, initializer_value::negative_sine, true},
        {pointer_register::ecx, initializer_value::zero},
        {pointer_register::edx, initializer_value::cosine, true}
    }};
    return initialize(guest, x87, 0x00039380u, stores);
}
