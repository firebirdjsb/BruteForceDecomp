/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A68F11AEC695509A1C8896D4A06DDD01AC18BC07541F17B5B64AAFC897B74222
 * Entry: 0x001ebd30, Ghidra index: 6899, label: FUN_001ebd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_001ebd30(void)

{
  byte *pbVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  do {
    pbVar1 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar2);
    if (((*pbVar1 & 1) != 0) && (*(int *)(pbVar1 + 8) == unaff_EBX)) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return 0 < iVar3;
}
