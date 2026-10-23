/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1E98C21B3429C78D52646CDAEF885445FD8AD0137D352DB57B12E3AFFDD1E39
 * Entry: 0x000f93c0, Ghidra index: 3123, label: FUN_000f93c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000f93c0(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int local_14 [5];
  
  iVar3 = 0;
  local_14[0] = 0;
  local_14[4] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  iVar4 = 1;
  do {
    pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar4);
    if ((((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) && ((*pbVar2 & 0x20) != 0)) &&
       ((iVar1 = *(int *)(pbVar2 + 0x98), -1 < iVar1 && (iVar1 < 5)))) {
      local_14[iVar1] = local_14[iVar1] + 1;
      iVar3 = local_14[4];
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  bVar5 = local_14[0] != 0;
  if (local_14[1] != 0) {
    bVar5 = bVar5 + 1;
  }
  if (local_14[2] != 0) {
    bVar5 = bVar5 + 1;
  }
  if (local_14[3] != 0) {
    bVar5 = bVar5 + 1;
  }
  if ((iVar3 == 0) && (bVar5 < 2)) {
    return 0;
  }
  return 1;
}
