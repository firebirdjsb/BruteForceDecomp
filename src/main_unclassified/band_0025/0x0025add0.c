/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD17B405B9E2AFFA00825368D9436A15EC1B257E818E7BE5DAC46A64EC87B99A
 * Entry: 0x0025add0, Ghidra index: 8530, label: FUN_0025add0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0025add0(uint *param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (*(char *)((int)puVar1[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*param_1 < (uint)puVar2[3]) {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar1;
}
