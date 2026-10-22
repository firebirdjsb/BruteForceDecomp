/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E77DB247F5DC84D8FF86374ACF3BABB28BB7B449A6A044020DA5029B4C66AFF
 * Entry: 0x000f6850, Ghidra index: 3081, label: FUN_000f6850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000f6850(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 auStack_4 [4];
  
  cVar1 = (**(code **)(**(int **)(unaff_ESI + 0xbec) + 0x30))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0xbec) + 0x10))(auStack_4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
      return *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x644);
    }
  }
  return 0;
}
