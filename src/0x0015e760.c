/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECE99F9B9A709B200E54E3D68CBD0D4D588D49092B13BEC4CE471706CBB7D75B
 * Entry: 0x0015e760, Ghidra index: 4550, label: FUN_0015e760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015e760(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  undefined1 local_30 [36];
  undefined1 local_c [12];
  
  if (in_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_EDI);
  }
  if (*unaff_EDI == 0) {
    iVar1 = FUN_002ea01d(0x30);
    if (iVar1 != 0) {
      FUN_0003d6c0(iVar1,local_30,local_c);
      *unaff_EDI = iVar1;
      return;
    }
    *unaff_EDI = 0;
  }
  return;
}
