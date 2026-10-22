/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71818589F68669970799C968B89C566132F94D16814BCB5E28DEAA8410D96C3C
 * Entry: 0x00115000, Ghidra index: 3575, label: FUN_00115000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00115000(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int unaff_ESI;
  
  if ((*(int *)(in_ECX + 0x500) == 0) || ((*(byte *)(in_ECX + 0x7d8) & 1) == 0)) {
    piVar2 = *(int **)(in_ECX + 0x4d8);
    if (piVar2 != *(int **)(in_ECX + 0x4dc)) {
      do {
        if (*(int *)(*piVar2 + 8) == unaff_ESI) {
          return *(undefined4 *)(*piVar2 + 0xc);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int **)(in_ECX + 0x4dc));
      return 0xffffffff;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
    if (*(undefined4 **)(in_ECX + 0x4f8) != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x4f8);
    }
    for (; puVar1 != *(undefined4 **)(in_ECX + 0x4f8); puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[3] == unaff_ESI) {
        return puVar1[2];
      }
    }
  }
  return 0xffffffff;
}
