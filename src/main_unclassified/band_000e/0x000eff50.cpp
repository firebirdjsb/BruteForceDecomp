/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7462078B5749784196D67CE6DB092CA2CD626B20B16637CE2AD4B5493E16BB56
 * Entry: 0x000eff50, Ghidra index: 2993, label: FUN_000eff50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000eff50(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_20 [32];
  
  piVar1 = param_1;
  if ((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 4))(), iVar2 == 3)) {
    FUN_0010caa0();
    piVar4 = (int *)0x5;
    do {
      FUN_002ea9a9(auStack_20,0x10,(uintptr_t)0x0040cd7cU,piVar4);
      param_1 = piVar4;
      FUN_0010c660(&param_1);
      piVar4 = (int *)((int)piVar4 + 5);
    } while ((int)piVar4 < 0x3d);
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
    uVar3 = 0;
    while( true ) {
      if (piVar1[0x19] == 0) {
        return 1;
      }
      if ((uint)(piVar1[0x1a] - piVar1[0x19] >> 2) <= uVar3) break;
      if (*(int *)(*(int *)(piVar1[0x19] + uVar3 * 4) + 0x24) == *(int *)(iVar2 + 4)) {
        FUN_0010c7d0();
        return 1;
      }
      uVar3 = uVar3 + 1;
    }
    return 1;
  }
  return 0;
}
