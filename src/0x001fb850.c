/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80A288AF436BEA7C39F504CC2210E7FE87811C8514FDD76786D7F6C4EA2C6657
 * Entry: 0x001fb850, Ghidra index: 7117, label: FUN_001fb850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_001fb850(void)

{
  byte bVar1;
  undefined1 uVar2;
  char *in_ECX;
  int in_EDX;
  
  uVar2 = 1;
  if (*in_ECX != '\0') {
    if (in_EDX == 0) {
      bVar1 = in_ECX[4];
    }
    else {
      if (in_ECX[4] != '\0') {
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
