/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4B355EE3C39721B70CD7AA318BE6E1E00170D8FCD764E71B40908438EBADFE1
 * Entry: 0x00058d40, Ghidra index: 884, label: FUN_00058d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
#include "bf_00058d40_guest_handoff.h"

/* XBE 0x00058D40..0x00058D80, body hash retained above:
 * [ESP+4] and [ESP+8] are two incoming guest DWORDs, RET 8.
 * PUSH 0x10/CALL 0x002EA01D/ADD ESP,4 yields 32-bit guest EAX.
 * On nonzero EAX: store guest DWORD zero at +4,+8,+0xC, in that order.
 * In both paths: store guest EAX at first stack argument's pointed-to DWORD;
 * pass second stack DWORD in ECX and allocation EAX in EDX to 0x001AAA90.
 * This is an original-address source contract, not a Windows heap or
 * generic native pointer adapter. Guest memory and call dispatch remain
 * ABI_UNVERIFIED, intentionally undefined until a guest32 backend exists. */
void FUN_00058d40(uint32_t guest_output_word_va,
                  uint32_t guest_second_stack_word)
{
  const uint32_t allocation_eax = FUN_002ea01d(UINT32_C(0x10));
  if (allocation_eax != 0) {
    bf_00058d40_guest_write_u32(allocation_eax + 4u, 0);
    bf_00058d40_guest_write_u32(allocation_eax + 8u, 0);
    bf_00058d40_guest_write_u32(allocation_eax + 0xcu, 0);
  }
  bf_00058d40_guest_write_u32(guest_output_word_va, allocation_eax);
  bf_00058d40_call_001aaa90(guest_second_stack_word, allocation_eax);
}
