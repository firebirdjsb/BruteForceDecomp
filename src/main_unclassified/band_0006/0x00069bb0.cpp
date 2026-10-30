/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8137363533CFD7F539DA3F7A8E25C9E132735A0B27BEA85A44C2E6091F29AA26
 * Entry: 0x00069bb0, Ghidra index: 1174, label: FUN_00069bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_0024a840(void);
extern void FUN_00050b40(void);

void FUN_00069bb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int in_EAX;
  int *piVar4;
  
  if (in_EAX != param_1) {
    piVar4 = (int *)(in_EAX + 8);
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
      in_EAX = in_EAX + 0x14;
      piVar4 = piVar4 + 5;
    } while (in_EAX != param_1);
  }
  return;
}
