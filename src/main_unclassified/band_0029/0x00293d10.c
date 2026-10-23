/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A198B4284982908ABACD3FA14AD1AA6A4D3874E4E91BD37877AB9B0E082B031C
 * Entry: 0x00293d10, Ghidra index: 9270, label: FUN_00293d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00293d10(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  
  while (in_EAX != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*in_EAX;
    *(int *)(DAT_00469888 + 0x78) =
         *(int *)(DAT_00469888 + 0x78) +
         (-1 - ((int)(in_EAX[3] + ((int)in_EAX[3] >> 0x1f & 0xfU)) >> 4));
    FUN_00294b90(in_EAX[2],0);
    FUN_00294b90(in_EAX,0);
    in_EAX = puVar1;
  }
  return;
}
