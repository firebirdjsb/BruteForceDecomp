/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1CDF82A674A8F1708F09620C4507560C9EAA983F7BDF12A3048BE102AC06816
 * Entry: 0x00140f00, Ghidra index: 4093, label: FUN_00140f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00140f00(undefined4 *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)0x0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)param_1[4];
  }
  puVar5 = puVar3;
  if (puVar3 != (undefined4 *)param_1[4]) {
    do {
      puVar5 = *(undefined4 **)(puVar3[2] + 0x30);
      bVar2 = false;
      piVar4 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar4 = (int *)*puVar5;
      }
      piVar1 = *(int **)(puVar3[2] + 0x30);
      if (piVar4 == piVar1) {
LAB_00140f5d:
        puVar3 = (undefined4 *)*puVar3;
      }
      else {
        do {
          if (bVar2) goto LAB_00140f55;
          if ((*(char *)(piVar4[2] + 0x1c) != '\0') && (*(int *)(piVar4[2] + 0x10) == param_2)) {
            bVar2 = true;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != piVar1);
        if (!bVar2) goto LAB_00140f5d;
LAB_00140f55:
        FUN_0013f6c0(param_2);
      }
      puVar5 = param_1;
    } while (puVar3 != (undefined4 *)param_1[4]);
  }
  return (uint)puVar5 & 0xffffff00;
}
