/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC914C03B021AFFB67ADC9FF7F416C20FB9BB14463C3E90130DE24FB8870C53F
 * Entry: 0x0023a1c0, Ghidra index: 7898, label: FUN_0023a1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
undefined4 FUN_0023a1c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int *piVar4;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18 [6];
  
  puStack_20 = (undefined1 *)&local_1c;
  puStack_24 = local_18;
  uStack_28 = 0xc0000000;
  uStack_2c = param_1;
  local_1c = 0;
  local_18[0] = 0xe0c43d05;
  piStack_30 = DAT_004432f8;
  iVar1 = (**(code **)(*DAT_004432f8 + 0xc))();
  if ((-1 < iVar1) && (iVar1 = FUN_0023a0c0(&uStack_28,&uStack_2c), -1 < iVar1)) {
    piVar4 = (int *)0x0;
    local_18[0] = uStack_2c;
    (**(code **)(*piStack_30 + 0x1c))(piStack_30,0,0);
    ppiVar3 = &piStack_30;
    uVar2 = (**(code **)(*piVar4 + 0x14))(piVar4,ppiVar3,0x10,0);
    (*(code *)(*ppiVar3)[3])(ppiVar3);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    return uVar2;
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))(piStack_30);
  }
  return 0x80004005;
}
