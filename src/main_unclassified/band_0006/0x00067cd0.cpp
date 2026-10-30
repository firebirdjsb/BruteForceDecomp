/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9968AC090E0AE0888EA43C9B3C5FF62D49BD0ADCDB46D431ADD6CC3ADC79067D
 * Entry: 0x00067cd0, Ghidra index: 1143, label: FUN_00067cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"

/* XBE 0x00067CD0..0x00067CDE: one guest DWORD passed to indirect
 * CALL [0x003BC650]; return EAX is unchanged by ADD ESP,4/RET.
 * Original imported target unresolved; platform dispatch remains undefined.
 * ABI_UNVERIFIED: not a host address cast or callable native allocator. */
uint32_t FUN_00067cd0(uint32_t guest_size)
{
  return bf_xbox_guest_import_call1_u32(
      BF_XBOX_ALLOCATOR_IMPORT_SLOT, guest_size);
}
