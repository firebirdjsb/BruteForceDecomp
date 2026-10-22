/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B060E6F6F129B7333CC3D2394FFC4E8323824DEB298C0C02215E5A868E3A32D0
 * Entry: 0x000f2d50, Ghidra index: 3033, label: FUN_000f2d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f2d50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x160))();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar4 = 1;
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x108))(param_1);
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar2 = iVar2 + 8;
    while( true ) {
      iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x154))(iVar2);
      if (iVar3 != 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 4;
      if (3 < iVar5) {
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}
