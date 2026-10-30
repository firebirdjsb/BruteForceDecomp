/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 970D8E8BE71B9145AA482D059B573B78D070A771863FF4CA2135103F0F35D499
 * Entry: 0x001ac210, Ghidra index: 5520, label: FUN_001ac210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ac210(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *unaff_ESI;
  undefined4 local_4;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(0x10);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = local_4;
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
