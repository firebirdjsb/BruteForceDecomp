/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E4E149147FA5757D23D8B1E4D861AA1F767CE0EAE854F59B0026385F75C38AC
 * Entry: 0x001fb810, Ghidra index: 7116, label: FUN_001fb810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_001fb810(void)

{
  byte bVar1;
  undefined1 uVar2;
  int in_ECX;
  int in_EDX;
  
  uVar2 = 1;
  if (*(char *)(in_ECX + 1) != '\0') {
    if (in_EDX == 0) {
      bVar1 = *(byte *)(in_ECX + 4);
    }
    else {
      if (*(char *)(in_ECX + 4) == '\0') {
        if ((*(byte *)(*(int *)(in_EDX + 0xc) + 0x1a8) & 1) == 0) {
          return 1;
        }
        return 0;
      }
      bVar1 = *(byte *)(*(int *)(in_EDX + 0xc) + 0x1a8) & 1;
    }
    if (bVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
