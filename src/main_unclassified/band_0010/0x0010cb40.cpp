/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98CCC61A268BDAA174D85AC9A049F7372B01632057B6C4FD4AC203591D8191D1
 * Entry: 0x0010cb40, Ghidra index: 3476, label: FUN_0010cb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0010cb40(int *param_1)

{
  undefined1 uVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 100);
  uVar1 = 0;
  if (piVar2 != *(int **)(in_ECX + 0x68)) {
    while (*(int *)(*piVar2 + 0x24) != *param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int **)(in_ECX + 0x68)) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
