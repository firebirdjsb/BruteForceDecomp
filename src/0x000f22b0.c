/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 517DA44A1D949074167999BF85FDCDA72D81BAA0D4BB189D8C74132FA8D5E2DF
 * Entry: 0x000f22b0, Ghidra index: 3017, label: FUN_000f22b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
int FUN_000f22b0(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar1);
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x20) != 0)) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar1 < 8);
  return iVar3;
}
