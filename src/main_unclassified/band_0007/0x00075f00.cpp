/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A02296E8FE28009F6EE7EE1F05E6252D99AD69E1887796C73B7D0B1238DFECEB
 * Entry: 0x00075f00, Ghidra index: 1358, label: FUN_00075f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00075f00(uint *param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar2[1] + 0x29) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x29) == '\0');
  }
  return puVar2;
}
