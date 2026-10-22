/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E3236734B7178D76B90E9A8935F91B650BE04B9ACEF02EC0C83B97256F6CCEB
 * Entry: 0x00314d7d, Ghidra index: 12092, label: FUN_00314d7d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7a4;
void FUN_00314d7d(uint param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (((param_1 & 0x400) != 0) &&
     (((DAT_0032f7a4 == 0 || (DAT_0032f7a4 == 1)) || (2 < DAT_0032f7a4)))) {
    iVar1 = *in_ECX;
    in_ECX[1] = (int)(*(float *)(iVar1 + 0x2c) * *(float *)(iVar1 + 0x24) -
                     *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x20));
    in_ECX[2] = (int)(*(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x1c) -
                     *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x24));
    in_ECX[3] = (int)(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x20) -
                     *(float *)(iVar1 + 0x2c) * *(float *)(iVar1 + 0x1c));
  }
  return;
}
