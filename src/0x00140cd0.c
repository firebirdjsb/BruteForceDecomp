/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2FCDB1B0072C14A24654F2EF6EA6ADB2C1ADEB909795090FB38341CD610199E
 * Entry: 0x00140cd0, Ghidra index: 4090, label: FUN_00140cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00140cd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_2;
  iVar1 = param_2[0x13];
  iVar3 = 0;
  if ((int *)param_2[6] != (int *)0x0) {
    iVar3 = *(int *)param_2[6];
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    if (*(float *)(iVar1 + 0x4c) != 0.0) {
      FUN_00126460(*(undefined4 *)(iVar1 + 0x4c));
    }
    if ((*(byte *)(iVar1 + 0x48) & 1) != 0) {
      FUN_00140f80(param_1,puVar2[2]);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    iVar3 = FUN_000ff730(param_1 + 0xc,iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    return 1;
  }
  (**(code **)*param_2)(1);
  return 0;
}
