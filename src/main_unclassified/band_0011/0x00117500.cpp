/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BBDFC09C1CB3CA668150702819F167C7918D71704AA21FBBF6DF505FE709EF3
 * Entry: 0x00117500, Ghidra index: 3598, label: FUN_00117500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00117500(void)

{
  int iVar1;
  char cVar2;
  int in_EDX;
  int extraout_EDX;
  
  if (*(int *)(in_EDX + 0x214) == 0) {
    cVar2 = FUN_00126a40();
    if ((((((cVar2 != '\0') || (iVar1 = *(int *)(extraout_EDX + 0x1f8), iVar1 == 0x14)) ||
          (iVar1 == 0x18)) || ((iVar1 == 0x15 || (iVar1 == 0x16)))) || (iVar1 == 8)) &&
       (((*(int *)(extraout_EDX + 0x7a8) == 0 && (*(int *)(extraout_EDX + 0x1f8) != 6)) &&
        (*(int *)(extraout_EDX + 0x1f8) != 7)))) {
      cVar2 = (**(code **)(*(int *)(*(int *)(extraout_EDX + 0x2e8) + 0x110) + 0x20))();
      if (cVar2 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}
