/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09B2A9EE27BF07E05A68290FAB5344B2BBADDD0B68E8F54BBCB0E287110D43A7
 * Entry: 0x000c8620, Ghidra index: 2466, label: FUN_000c8620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c8620(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  
  iVar1 = 0;
  piVar2 = (int *)(in_EDX + 0x34);
  do {
    if (*piVar2 == unaff_ESI) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x58 + in_EDX) = 0;
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 5);
  return;
}
