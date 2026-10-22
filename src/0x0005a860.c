/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8917AFB3E6FC433B052D665CFB019D090161A81927104B474D228307B03282D
 * Entry: 0x0005a860, Ghidra index: 908, label: FUN_0005a860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005a860(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_0005a800();
  if (iVar1 == 1) {
    if ((*(byte *)(unaff_ESI + 0x10) & 8) != 0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    if ((*(byte *)(unaff_ESI + 0x10) & 8) == 0) {
      return 0;
    }
  }
  return 1;
}
