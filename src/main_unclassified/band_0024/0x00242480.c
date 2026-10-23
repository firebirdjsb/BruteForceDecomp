/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E637619E5DED718B8F3226BC24F2707CC41077C1A2183BDDD88DB6F6C59AA309
 * Entry: 0x00242480, Ghidra index: 8031, label: FUN_00242480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242480(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = local_4;
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
