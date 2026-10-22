/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34727F18EB6FD7C67B9F405E49E268DB6E619DA4E5FF6AA771877F1408B52A04
 * Entry: 0x0008acb0, Ghidra index: 1667, label: FUN_0008acb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008acb0(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = FUN_0008ada0(unaff_EDI,*(undefined4 *)(unaff_EDI + 0x10));
  if (iVar1 == 0) {
    iVar1 = FUN_0008ac00(unaff_EDI);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_0008a000();
  return iVar1;
}
