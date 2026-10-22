/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54E84B91A8D6D5AAD52DF7B5C9445097D632C140DC5BB7E919C77E7871813C79
 * Entry: 0x001e3260, Ghidra index: 6765, label: FUN_001e3260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e3260(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  uint in_stack_00000020;
  
  iVar3 = in_EAX;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar3 = iVar1 + 2;
    if (unaff_EBX <= iVar3) break;
    iVar2 = iVar3 * 0x1c + param_1;
    if (*(uint *)(iVar2 + -4) < 0x10) {
      iVar2 = iVar2 + -0x18;
    }
    else {
      iVar2 = *(int *)(iVar2 + -0x18);
    }
    iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar3 * 0x1c + -8 + param_1));
    if (iVar2 < 0) {
      iVar3 = iVar1 + 1;
    }
    FUN_0001f4f0(iVar3 * 0x1c + param_1,0,0xffffffff);
  }
  if (iVar3 == unaff_EBX) {
    FUN_0001f4f0(unaff_EBX * 0x1c + -0x1c + param_1,0,0xffffffff);
  }
  FUN_0001f4f0(&param_2,0,0xffffffff);
  FUN_001e34b0(param_1,in_EAX);
  if (in_stack_00000020 < 0x10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_3);
}
