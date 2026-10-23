/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F20EF34EDE37EF8EBD97F410A6C2152EBD02D01D42FEBCDE027FDC0D20817F80
 * Entry: 0x000b21f0, Ghidra index: 2140, label: FUN_000b21f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b21f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *in_EAX;
  undefined4 *puVar2;
  
  (**(code **)(*in_EAX + 0x10))();
  if ((undefined4 *)in_EAX[6] == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)in_EAX[6];
  }
  puVar1 = (undefined4 *)in_EAX[6];
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    (**(code **)(*(int *)puVar2[2] + 0x14))(param_1);
  }
  return;
}
