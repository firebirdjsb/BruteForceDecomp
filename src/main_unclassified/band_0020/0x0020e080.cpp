/* Brute Force original Xbox - explicit guest32 and x87 operation model.
 * Input x86 body SHA-256: C2C47719ABF4375300CA16B4EEB11AAADC637921A514A2624CFA825154BC83D6
 * Entry: 0x0020e080, Ghidra index: 7399, label: FUN_0020e080
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_x87_rotation_initializers.h"

bool FUN_0020e080(bf_guest32_constructor_state& guest, const bf_x87_rotation_operations& x87)
{
    using namespace bf_x87_rotation;
    constexpr std::array<initializer_store, 9> stores{{
        {pointer_register::edx, initializer_value::cosine, true},
        {pointer_register::eax, initializer_value::negative_sine},
        {pointer_register::ecx, initializer_value::clear_eax_and_store},
        {pointer_register::edx, initializer_value::sine, true},
        {pointer_register::ecx, initializer_value::cosine},
        {pointer_register::edx, initializer_value::zero},
        {pointer_register::ecx, initializer_value::zero},
        {pointer_register::edx, initializer_value::zero},
        {pointer_register::eax, initializer_value::one}
    }};
    return initialize(guest, x87, 0x0020e080u, stores);
}
