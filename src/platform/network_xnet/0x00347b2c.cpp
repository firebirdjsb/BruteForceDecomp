/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E75CD878E279D17E4A0E3BB020DD0EC1A6758033873265CE83EC8EB2F062CE20
 * Entry: 0x00347b2c, Ghidra index: 12875, label: FUN_00347b2c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347b2c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  if (iVar1 == 1) {
    FUN_0034c6bc(param_1);
  }
  return;
}
