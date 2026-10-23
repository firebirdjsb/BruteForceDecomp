/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76A03DF33CF9A29E305ABDD479C402F6E76941777EBDD62CA0FCE8CBF7981ABB
 * Entry: 0x00253f50, Ghidra index: 8404, label: FUN_00253f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00253f50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,param_3);
    cVar1 = (**(code **)(*(int *)param_1[4] + 0x1c))((int *)param_1[4],&stack0xfffffffc);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x2c))(param_1,param_3,piVar2);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return;
}
