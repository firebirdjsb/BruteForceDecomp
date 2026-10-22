/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAB3419D88C58BD148A91D8449639D4CE5D4234FC4212985D27B196883C6FB66
 * Entry: 0x003356c8, Ghidra index: 12432, label: FUN_003356c8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003356c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    while (iVar1 != 0) {
      FUN_00330c53(**(undefined4 **)(param_1 + 0x18));
      iVar1 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 4);
      iVar2 = *(int *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0xc) == 0) {
        if (iVar2 != 0) {
          thunk_FUN_0033e986(iVar2,0x20);
        }
        thunk_FUN_0033e986(iVar1,0x8021);
      }
      else {
        if (iVar2 != 0) {
          FUN_0033ea20(iVar2);
        }
        FUN_0033ea20(iVar1);
      }
      iVar1 = *(int *)(param_1 + 0x18);
    }
    FUN_00335451(param_1);
    FUN_0033554d(param_1);
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00330c53(*(int *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_0033e9ea(*(int *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      thunk_FUN_0033e986(*(int *)(param_1 + 0x3c),0x20);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      thunk_FUN_0033e986(*(int *)(param_1 + 0x44),0x20);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xc;
  }
  return;
}
