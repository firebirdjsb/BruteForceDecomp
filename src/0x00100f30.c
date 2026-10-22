/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B096BE5A0BCA158A54F85B852A5AFC4AF32653EEC3FED3C922B1FDA072FD65F
 * Entry: 0x00100f30, Ghidra index: 3228, label: FUN_00100f30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00100f30(void)

{
  undefined1 uVar1;
  int unaff_ESI;
  
  uVar1 = 0;
  if (*(int **)(unaff_ESI + 0x94) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x94) + 0x20))();
    if (*(int **)(unaff_ESI + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0xac) + 8))();
    }
  }
  return uVar1;
}
