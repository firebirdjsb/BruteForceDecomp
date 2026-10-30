/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3C1DA26EF6B522810FCB05A47D22FEC3972FFFC8B3FB0763F02981230063D1A
 * Entry: 0x00242ce0, Ghidra index: 8041, label: FUN_00242ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242ce0(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      iVar1 = FUN_002ea01d(0x10);
      if (iVar1 != 0) {
        iVar1 = FUN_00247ac0(iVar1);
        *unaff_ESI = iVar1;
        FUN_002440e0();
        return;
      }
      *unaff_ESI = 0;
      FUN_002440e0();
    }
    return;
  }
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_002440e0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_ESI = 0;
  return;
}
