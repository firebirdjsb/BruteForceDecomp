/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 163A44C6B2A1501E9F26AFEED063FFF132D88C37F7ABBBFF7AC2BAA1C003A8E7
 * Entry: 0x0024a730, Ghidra index: 8215, label: FUN_0024a730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a730(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  int *piVar5;
  
  if (param_1 != param_2) {
    piVar5 = (int *)(param_1 + 0x1c);
    do {
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        iVar2 = piVar5[1];
        uVar4 = FUN_0024a840(&param_2,&param_2);
        FUN_00050b40(iVar1,iVar2,piVar5 + -1,uVar4);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar5);
      }
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar3 = (int *)piVar5[-6];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        piVar5[-6] = 0;
      }
      param_1 = param_1 + 0x2c;
      piVar5 = piVar5 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
