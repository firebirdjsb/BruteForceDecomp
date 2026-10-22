/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75B9F67F8D41814C8ABA57822D66EE8D3EC9FAF3979877368E5D5ABB68555AD9
 * Entry: 0x00141000, Ghidra index: 4095, label: FUN_00141000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141000(void)

{
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 8) = 0;
  if (*(undefined4 **)(unaff_ESI + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 4))(1);
    *(undefined4 *)(unaff_ESI + 4) = 0;
  }
  return;
}
