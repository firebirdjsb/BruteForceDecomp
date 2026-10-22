/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 815347DF55F98B039F3D3AA9F9994C7BAFE7081910C9394C106941E813CA6C7B
 * Entry: 0x001b0aa0, Ghidra index: 5590, label: FUN_001b0aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b0aa0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = local_c;
        puVar1[1] = local_8;
        puVar1[2] = 0;
        *unaff_ESI = (int)puVar1;
        return;
      }
      *unaff_ESI = 0;
    }
    return;
  }
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  *unaff_ESI = 0;
  return;
}
