/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0CE657C29E62E26941D1B42E57151E42695D63D0088533CA6E05454FB869788
 * Entry: 0x0014eeb0, Ghidra index: 4390, label: FUN_0014eeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014eeb0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x1c))(*(undefined4 *)(param_1 + 0x7c));
  fVar1 = *(float *)(unaff_retaddr + 0xf8);
  fVar2 = *(float *)(unaff_retaddr + 0xf4);
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  *(char *)(iVar3 + 0x2c) = (char)(int)(*(float *)(unaff_retaddr + 0xf0) * 255.0);
  *(char *)(iVar3 + 0x2d) = (char)(int)(fVar2 * 255.0);
  *(char *)(iVar3 + 0x2e) = (char)(int)(fVar1 * 255.0);
  uVar4 = *(undefined4 *)(unaff_retaddr + 0x74);
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  uVar5 = *(undefined4 *)(unaff_retaddr + 0x70);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(unaff_retaddr + 0x6c);
  *(undefined4 *)(iVar3 + 0x34) = uVar5;
  *(undefined4 *)(iVar3 + 0x38) = uVar4;
  *(undefined4 *)(*(int *)(unaff_retaddr + 0xa0) + 0x40) = *(undefined4 *)(unaff_retaddr + 0x80);
  uVar4 = *(undefined4 *)(unaff_retaddr + 0x88);
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(unaff_retaddr + 0x84);
  *(undefined4 *)(iVar3 + 0x68) = uVar4;
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  piVar6 = *(int **)(*(int *)(unaff_retaddr + 0xc) + 0x28);
  piVar7 = *(int **)(iVar3 + 0x20);
  if ((piVar6 != piVar7) && (piVar7 != piVar6)) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
      *(undefined4 *)(iVar3 + 0x20) = 0;
    }
    *(int **)(iVar3 + 0x20) = piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  *(byte *)(*(int *)(unaff_retaddr + 0xa0) + 0x13) =
       *(byte *)(*(int *)(unaff_retaddr + 0xa0) + 0x13) & 0xfe;
  return;
}
