/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27B41FFEDDEA494A32F07481D10BF0B0881F534021D4F637E62DD9C23C4BC156
 * Entry: 0x0005c1c0, Ghidra index: 946, label: FUN_0005c1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005c1c0(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  float unaff_retaddr;
  
  if (((*(int **)(unaff_ESI + 0x1c) != (int *)0x0) &&
      (cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x1c) + 4))(param_1), cVar2 == '\0')) &&
     (*(undefined4 **)(unaff_ESI + 0x1c) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x1c))(1);
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x24) + 0xbec) + 0x7c))();
  if ((iVar3 != 0) && (uVar4 = 0, *(int *)(unaff_ESI + 4) != 0)) {
    do {
      if (uVar4 < *(uint *)(unaff_ESI + 4)) {
        iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar4 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x18) != 0) {
        if (uVar4 < *(uint *)(unaff_ESI + 4)) {
          iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar4 * 4);
        }
        else {
          iVar3 = 0;
        }
        *(float *)(iVar3 + 0x1c) = unaff_retaddr + *(float *)(iVar3 + 0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(unaff_ESI + 4));
  }
  fVar1 = *(float *)(unaff_ESI + 0x18) - unaff_retaddr;
  *(float *)(unaff_ESI + 0x18) = fVar1;
  if (fVar1 < -40.0) {
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    FUN_0005c930(unaff_ESI,0);
  }
  return;
}
