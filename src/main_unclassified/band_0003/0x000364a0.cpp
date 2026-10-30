/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62A33AE1333E7FA904C5BDB5889B1CA6C7C823DE98344CC2072C9A1915B23D45
 * Entry: 0x000364a0, Ghidra index: 357, label: FUN_000364a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000364a0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0x213];
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*in_ECX + 0x410))(param_1);
    if (iVar1 == 2) {
      in_ECX[0x213] = 1;
      (**(code **)(*in_ECX + 0x40c))();
      (**(code **)(*in_ECX + 0x418))();
      return 1;
    }
    if (iVar1 == 0) {
      in_ECX[0x213] = 2;
      return 0;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = (**(code **)(*in_ECX + 0x420))(param_1);
    if (iVar1 == 2) {
      in_ECX[0x213] = 2;
      (**(code **)(*in_ECX + 0x41c))();
      (**(code **)(*in_ECX + 0x428))();
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (**(code **)(*in_ECX + 0x430))(param_1);
    if (iVar1 == 2) {
      (**(code **)(*in_ECX + 0x42c))();
      return 2;
    }
  }
  return 1;
}
