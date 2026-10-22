/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8606A089BDB001EDD88EB3C1869AD8A5E40119D07C222208669082485940E46
 * Entry: 0x001ac8a0, Ghidra index: 5527, label: FUN_001ac8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ac8a0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (in_EAX != 0) {
    if (*unaff_EDI == 0) {
      uVar1 = FUN_001b1570();
      iVar2 = FUN_002ea01d(0x130);
      if (iVar2 != 0) {
        iVar2 = FUN_001b5cd0(iVar2,uVar1);
        *unaff_EDI = iVar2;
        FUN_000e12a0();
        return;
      }
      *unaff_EDI = 0;
      FUN_000e12a0();
    }
    return;
  }
  iVar2 = *unaff_EDI;
  if (iVar2 != 0) {
    FUN_000e12a0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  *unaff_EDI = 0;
  return;
}
