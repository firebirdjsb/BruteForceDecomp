/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00AA7749AFB5FA60946261D533669F51E2F5D4EED475700CE347211B9161B052
 * Entry: 0x001ace50, Ghidra index: 5533, label: FUN_001ace50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ace50(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 local_8;
  undefined4 local_4;
  
  if (in_EAX == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*unaff_ESI);
  }
  if (*unaff_ESI == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_8;
      puVar1[1] = local_4;
      *unaff_ESI = (int)puVar1;
      return;
    }
    *unaff_ESI = 0;
  }
  return;
}
