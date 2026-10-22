/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1F4C414E60A3684A6B6BBAD6252614E6ED35373741E1DCA8E912E0A94EB240D
 * Entry: 0x0029a580, Ghidra index: 9409, label: FUN_0029a580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029a580(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = FUN_0029a5b0();
  while (iVar1 != 0) {
    if (*(int *)(unaff_ESI + 4) == 0x3b) {
      uVar2 = FUN_00296110();
      *(undefined4 *)(unaff_ESI + 4) = uVar2;
    }
    iVar1 = FUN_0029a5b0();
  }
  return;
}
