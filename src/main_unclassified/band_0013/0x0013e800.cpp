/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: 793B11E56D85B39E3F2B6CB3BA69F9CE2C25892A0B0CDC7FEB2F0053C62DBFB6
 * Entry: 0x0013e800, Ghidra index: 4029, label: FUN_0013e800
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_initializers.h"

bool FUN_0013e800(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using namespace bf_x87_rotation;
    constexpr std::array<initializer_store, 9> stores{{
        {pointer_register::edx, initializer_value::one},
        {pointer_register::ecx, initializer_value::clear_eax_and_store},
        {pointer_register::edx, initializer_value::zero},
        {pointer_register::ecx, initializer_value::zero},
        {pointer_register::edx, initializer_value::cosine, true},
        {pointer_register::ecx, initializer_value::negative_sine},
        {pointer_register::edx, initializer_value::zero},
        {pointer_register::eax, initializer_value::sine, true},
        {pointer_register::ecx, initializer_value::cosine}
    }};
    return initialize(guest, x87, 0x0013e800u, stores);
}
