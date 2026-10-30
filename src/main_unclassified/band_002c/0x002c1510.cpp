/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8DD3AD05585DFF17CC9BD95A8150F582FE1E97893008DFAE16A54EF1ECAD11B
 * Entry: 0x002c1510, Ghidra index: 10029, label: FUN_002c1510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443de8;
void FUN_002c1510(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  (*(code *)(&DAT_00443de8)
            [(int)*(short *)(((*(uint *)(iVar1 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x32 + iVar1) +
             *(short *)((*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c + 0x32 + iVar1) * 4])();
  return;
}
