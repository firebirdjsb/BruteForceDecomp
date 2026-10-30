/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDF1667A062B49351FE114DC57C0957B8311AE24BC29DE8821B1D562B67CB171
 * Entry: 0x00069c20, Ghidra index: 1175, label: FUN_00069c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069c20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int in_EAX;
  int *piVar4;
  
  if (in_EAX != param_1) {
    piVar4 = (int *)(in_EAX + 0xc);
    do {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        iVar2 = piVar4[1];
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,iVar2,piVar4 + -1,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      in_EAX = in_EAX + 0x18;
      piVar4 = piVar4 + 6;
    } while (in_EAX != param_1);
  }
  return;
}
