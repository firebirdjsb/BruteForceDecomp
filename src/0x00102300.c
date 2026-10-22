/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 932D47C2B7FF30163C71B601C28A23DA26E259C6514D69D3554DB3F87CCB613A
 * Entry: 0x00102300, Ghidra index: 3266, label: FUN_00102300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_00102300(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_EDI;
  undefined1 uVar5;
  undefined1 local_10 [16];
  
  uVar4 = *(undefined4 *)(unaff_EDI + 4);
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1b0))(local_10,param_1,param_2);
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 == -0xb9a5ed3) {
    FUN_00102250();
    return 0;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar1 = *piVar2;
  uVar3 = FUN_001e97c0(uVar4,*(undefined4 *)(unaff_EDI + 0x60),0);
  uVar5 = (undefined1)((uint)uVar4 >> 0x18);
  uVar4 = FUN_001e97c0(uVar3);
  (**(code **)(iVar1 + 0x34))(&stack0xffffffe8,uVar4);
  return uVar5;
}
