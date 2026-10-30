/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3008125F53F1FAB2EACA6B8511F8F53F2310BFD92FDB1177FCAC93F71215ADC
 * Entry: 0x000518b0, Ghidra index: 750, label: FUN_000518b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000518b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int in_EAX;
  
  while( true ) {
    if (in_EAX == param_1) {
      return;
    }
    iVar1 = *(int *)(in_EAX + 4);
    if (iVar1 != 0) break;
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0;
    in_EAX = in_EAX + 0x10;
  }
  uVar2 = *(undefined4 *)(in_EAX + 8);
  uVar3 = FUN_0024a840(&param_1,&param_1);
  FUN_00050b40(iVar1,uVar2,in_EAX,uVar3);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
}
