/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AFEAF0031EC60BF542376A81680FEC9AE6ACF2DEB1C8A0749B70C80D210E6DB
 * Entry: 0x000653f0, Ghidra index: 1102, label: FUN_000653f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000653f0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_2 == 0x23c350c) {
    piVar1 = *(int **)(param_1 + 0x30);
  }
  else if (param_2 == -0x18dde06b) {
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  else if (param_2 == 0xab180c5) {
    piVar1 = *(int **)(param_1 + 0x38);
  }
  else if (param_2 == 0xa635880) {
    piVar1 = *(int **)(param_1 + 0x34);
  }
  else {
    if (param_2 != 0x681233e) {
      return 0x80070005;
    }
    piVar1 = *(int **)(param_1 + 0x40);
  }
  *param_3 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}
