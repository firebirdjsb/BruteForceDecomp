/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 035677B84F9CBAEE207B17F3FA8616BE5F6CFEC9D65C6E7B3F922BE77057F48D
 * Entry: 0x00047a40, Ghidra index: 563, label: FUN_00047a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00047a40(char param_1)

{
  char cVar1;
  int *piVar2;
  char *unaff_ESI;
  
  piVar2 = (int *)FUN_000120f0();
  if ((piVar2 != (int *)0x0) && ((*(byte *)(piVar2[3] + 0x1a9) & 2) != 0)) {
    cVar1 = *unaff_ESI;
    if (cVar1 != param_1) {
      if (cVar1 == '\0') {
        (**(code **)(*piVar2 + 0x15c))(0x13,0);
        *unaff_ESI = '\x01';
        FUN_000124f0(0x3f000000);
        return 1;
      }
      if (cVar1 == '\x01') {
        (**(code **)(*piVar2 + 0x15c))(0x13,0);
        *unaff_ESI = '\0';
        FUN_000124f0(0x3f000000);
        return 1;
      }
    }
  }
  return 0;
}
