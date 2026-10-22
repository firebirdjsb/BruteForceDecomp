/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED3D337EAF6662610EEF5D59A499528E17B5D9D483D5815D0F16422F54F52224
 * Entry: 0x0006ef00, Ghidra index: 1256, label: FUN_0006ef00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0006ef00(void)

{
  undefined4 *puVar1;
  int in_EDX;
  int unaff_ESI;
  
  if (*(undefined4 **)(in_EDX + 0x1348) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)**(undefined4 **)(in_EDX + 0x1348);
  }
  while( true ) {
    if (puVar1 == *(undefined4 **)(in_EDX + 0x1348)) {
      return 0;
    }
    if (*(int *)(puVar1[2] + 0xe0) == unaff_ESI) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}
