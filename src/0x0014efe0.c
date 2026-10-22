/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE449D5B1ABA08E4C6EC327609BA9E212A9160ACC2240E82D446CF62E4F1A6A6
 * Entry: 0x0014efe0, Ghidra index: 4391, label: FUN_0014efe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0014efe0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x1c))(*(undefined4 *)(param_1 + 0x7c));
  fVar1 = *(float *)(unaff_retaddr + 0xf4);
  fVar2 = *(float *)(unaff_retaddr + 0xf0);
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  *(char *)(iVar3 + 0x2e) = (char)(int)(*(float *)(unaff_retaddr + 0xf8) * 255.0);
  *(char *)(iVar3 + 0x2c) = (char)(int)(fVar2 * 255.0);
  *(char *)(iVar3 + 0x2d) = (char)(int)(fVar1 * 255.0);
  fVar1 = *(float *)(unaff_retaddr + 0x68);
  fVar4 = *(float *)(unaff_retaddr + 0x70);
  fVar5 = *(float *)(unaff_retaddr + 0x74);
  fVar2 = *(float *)(unaff_retaddr + 0x5c);
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  *(float *)(iVar3 + 0x30) =
       *(float *)(unaff_retaddr + 0x6c) + *(float *)(unaff_retaddr + 0x50) * 5000.0;
  *(float *)(iVar3 + 0x34) = fVar2 * 5000.0 + fVar4;
  *(float *)(iVar3 + 0x38) = fVar1 * 5000.0 + fVar5;
  *(undefined4 *)(*(int *)(unaff_retaddr + 0xa0) + 0x40) = *(undefined4 *)(unaff_retaddr + 0x80);
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
  iVar3 = *(int *)(unaff_retaddr + 0xa0);
  *(undefined4 *)(iVar3 + 100) = 0x469c4000;
  *(undefined4 *)(iVar3 + 0x68) = 0x46947000;
  *(byte *)(*(int *)(unaff_retaddr + 0xa0) + 0x13) =
       *(byte *)(*(int *)(unaff_retaddr + 0xa0) + 0x13) & 0xfe;
  return;
}
