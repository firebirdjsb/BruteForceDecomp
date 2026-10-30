/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDF938542244091B3EC4FEFA5811604545397899990F00CA870BA238830033C6
 * Entry: 0x002e75c0, Ghidra index: 10510, label: FUN_002e75c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e75c0(char param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  *(char *)(in_ECX + 5) = param_1;
  if (param_1 == '\0') {
    *(undefined1 *)(in_ECX + 6) = 0xff;
    *(undefined1 *)(in_ECX + 7) = 0;
    *(undefined1 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
    piVar2 = (int *)(in_ECX + 0x14);
    iVar3 = 4;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 4) = 0;
        *(undefined1 *)(iVar1 + 5) = 0;
        *(undefined1 *)(iVar1 + 6) = 0xff;
        *(undefined1 *)(iVar1 + 7) = 0xff;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
