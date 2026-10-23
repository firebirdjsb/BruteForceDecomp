/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B19FBBC4C156F46F60EFE921D35D4B9F8F462289FF1638010E3D31B2E03130E1
 * Entry: 0x00076430, Ghidra index: 1372, label: FUN_00076430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076430(int param_1)

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
      in_EAX = in_EAX + 0x24;
      piVar4 = piVar4 + 9;
    } while (in_EAX != param_1);
  }
  return;
}
