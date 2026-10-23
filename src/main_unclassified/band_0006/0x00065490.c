/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADEACA60E02DE55F1F2ABC18BA9F3AAA52AA893100B46F02DBB921C163DC5245
 * Entry: 0x00065490, Ghidra index: 1103, label: FUN_00065490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00065490(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 == 0x23c350c) {
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 != param_3) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(int **)(param_1 + 0x30) = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))(param_3);
        return 0;
      }
    }
  }
  else if (param_2 == -0x18dde06b) {
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != param_3) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      *(int **)(param_1 + 0x3c) = param_3;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))(param_3);
        return 0;
      }
    }
  }
  else {
    if (param_2 == 0xab180c5) {
      FUN_0015e4b0();
      return 0;
    }
    if (param_2 == 0xa635880) {
      FUN_0015e4b0();
      return 0;
    }
    if (param_2 != 0x681233e) {
      return 0x80070005;
    }
    FUN_0015e4b0();
  }
  return 0;
}
