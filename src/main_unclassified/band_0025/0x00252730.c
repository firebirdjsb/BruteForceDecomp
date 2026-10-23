/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36BF2CD121BDEB4F91671012EC93117CF37D9585B03FE60FA22342D2B22395E8
 * Entry: 0x00252730, Ghidra index: 8379, label: FUN_00252730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00252730(void)

{
  int unaff_ESI;
  
  if (((unaff_ESI != 0) && (*(int *)(unaff_ESI + 0x1c) != 0)) && (*(int *)(unaff_ESI + 0x24) != 0))
  {
    if (*(int *)(*(int *)(unaff_ESI + 0x1c) + 0x14) != 0) {
      FUN_0027f3f0();
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}
