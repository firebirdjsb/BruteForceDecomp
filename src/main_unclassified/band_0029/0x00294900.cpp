/* Brute Force original Xbox: FUN_00294900, entry 0x00294900.
 * Input x86 body SHA-256: 8DB2457CA5AB11D1E8B6711BA9041D23B7CF8967AEF3D47DAF1BF08B3410BF68
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Host parameters explicitly model observed incoming 32-bit guest registers
 * and/or stack words. They are NOT recovered original C++ prototypes.
 * Original call/ret stack ABI, preserved registers, EFLAGS, guest mapping,
 * faults and all caller linkage are not established by these bounded models.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_00294900(std::uint32_t guest_ecx)
{
    std::uint32_t slot = guest_ecx;
    while (slot != 0) {
        std::uint32_t node = bf_guest_read_u32(slot);
        if (node != 0) {
            for (;;) {
                if (bf_guest_read_u32(node + UINT32_C(4)) != 0)
                    break;
                node = bf_guest_read_u32(node);
                bf_guest_write_u32(slot, node);
                if (node == 0)
                    break;
            }
        }
        // Original MOV ECX,EAX follows TEST EAX; exit on zero.
        slot = node;
    }
}
