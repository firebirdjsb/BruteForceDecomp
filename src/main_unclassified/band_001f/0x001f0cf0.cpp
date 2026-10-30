/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CC4BED033DB6638740F4419DBA1252800DEBC8119DB6C82DF6659E3DB68D6CC
 * Entry: 0x001f0cf0, Ghidra index: 6981, label: FUN_001f0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f0cf0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  if (unaff_ESI[1] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[1]);
  }
  iVar1 = thunk_FUN_002ea01d(in_EAX << 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0001fe40(iVar1,0x10,in_EAX,(uintptr_t)0x001f0ca0U);
  }
  unaff_ESI[1] = iVar1;
  iVar1 = thunk_FUN_002ea01d(param_1 * in_EAX);
  iVar2 = 0;
  *unaff_ESI = iVar1;
  unaff_ESI[5] = param_1;
  unaff_ESI[4] = in_EAX;
  unaff_ESI[3] = 0;
  unaff_ESI[2] = 0;
  if (0 < in_EAX) {
    iVar3 = 0;
    do {
      *(int *)(iVar3 + unaff_ESI[1]) = iVar1;
      iVar1 = iVar1 + unaff_ESI[5];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < unaff_ESI[4]);
  }
  return;
}
