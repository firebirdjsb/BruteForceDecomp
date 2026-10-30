/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 242EB406E37F4FBE047B868248E8B4A4557A1E31B931F102ED35A19730A8032B
 * Entry: 0x00373b60, Ghidra index: 13415, label: FUN_00373b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037b728;
extern uint32_t DAT_0037b790;
uint FUN_00373b60(int param_1)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (((byte)(&DAT_0037b790)[in_EAX] & 0x3c) * param_1 >> 3) + 0x3f & 0xffffffc0;
  uVar2 = 0;
  do {
    if (uVar1 <= (uint)(&DAT_0037b728)[uVar2]) {
      return (&DAT_0037b728)[uVar2];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x1a);
  return uVar1;
}
