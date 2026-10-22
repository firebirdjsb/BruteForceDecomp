/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DD36106CD7DEBEDE27CF9D5BD8DCC31E0E849C884A90829C5CAE5812623B3CA
 * Entry: 0x00148ba0, Ghidra index: 4264, label: FUN_00148ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00148ba0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  
  cVar1 = (**(code **)(*in_EAX + 0x20))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*unaff_EBX + 0x5c))();
    if (iVar2 != 0) {
      if (*(undefined4 **)(unaff_ESI + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(unaff_ESI + 0x1c))(1);
        *(undefined4 *)(unaff_ESI + 0x1c) = 0;
      }
      *(int *)(unaff_ESI + 0x1c) = iVar2;
      *(int *)(iVar2 + 0x10) = unaff_ESI;
      return 1;
    }
  }
  return 0;
}
