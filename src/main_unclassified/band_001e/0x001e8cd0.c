/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47A0E48179219C7E567A2825184D658831BF0B0D52395773BF4D302676E30328
 * Entry: 0x001e8cd0, Ghidra index: 6847, label: FUN_001e8cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8cd0(float param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  ushort uVar4;
  byte in_CL;
  ushort uVar5;
  int unaff_ESI;
  int *piVar6;
  
  *(byte *)(unaff_ESI + 0x14) =
       *(byte *)(unaff_ESI + 0x14) ^ (*(byte *)(unaff_ESI + 0x14) ^ in_CL) & 1;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    *(undefined4 *)(unaff_ESI + 4) = 0;
    *(undefined2 *)(unaff_ESI + 0x1c) = 0;
    *(undefined2 *)(unaff_ESI + 0x1e) = 0;
    return;
  }
  fVar2 = param_1 + *(float *)(unaff_ESI + 4);
  uVar5 = 0;
  param_1._0_2_ = 0;
  if (*(undefined4 **)(unaff_ESI + 0xc) == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)**(undefined4 **)(unaff_ESI + 0xc);
  }
  piVar1 = *(int **)(unaff_ESI + 0xc);
  do {
    while( true ) {
      piVar3 = piVar6;
      if (piVar3 == piVar1) {
        *(float *)(unaff_ESI + 4) = fVar2;
        if ((*(byte *)(unaff_ESI + 0x14) & 1) == 0) {
          uVar5 = 0;
          param_1._0_2_ = 0;
        }
        else if ((uVar5 != 0) || (param_1._0_2_ != 0)) {
          *(byte *)(unaff_ESI + 0x14) = *(byte *)(unaff_ESI + 0x14) | 2;
        }
        *(ushort *)(unaff_ESI + 0x1c) = uVar5;
        *(ushort *)(unaff_ESI + 0x1e) = param_1._0_2_;
        return;
      }
      if ((float)piVar3[5] < *(float *)(unaff_ESI + 4) !=
          ((float)piVar3[5] == *(float *)(unaff_ESI + 4))) break;
LAB_001e8d9c:
      piVar6 = (int *)*piVar3;
    }
    uVar4 = FUN_001e8b20(piVar3 + 2,*(undefined4 *)(unaff_ESI + 4));
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = FUN_001e8b90(piVar3 + 2,*(undefined4 *)(unaff_ESI + 4));
    if (param_1._0_2_ < uVar4) {
      param_1._0_2_ = uVar4;
    }
    if ((float)piVar3[4] < fVar2 == ((float)piVar3[4] == fVar2)) goto LAB_001e8d9c;
    piVar6 = (int *)*piVar3;
    if (piVar3 != *(int **)(unaff_ESI + 0xc)) {
      *(int **)piVar3[1] = (int *)*piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar3);
    }
  } while( true );
}
