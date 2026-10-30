/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11D825015F900612E25D387E4863F9DF49113D5DD9C340CDC45A11B46C0AF7D4
 * Entry: 0x00355a89, Ghidra index: 13125, label: FUN_00355a89
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355a89(int param_1)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_8;
  
  piVar2 = (int *)(in_ECX + 0x2a4);
  local_8 = 0x40;
  do {
    if (*piVar2 != 0) {
      if (param_1 == 0) {
        FUN_0034c9cf(in_ECX);
      }
      else {
        FUN_0034c9ec(in_ECX);
      }
    }
    piVar2 = piVar2 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(in_ECX + 0x294) = 0;
  *(undefined4 **)(in_ECX + 0x298) = (undefined4 *)(in_ECX + 0x29c);
  puVar3 = (undefined4 *)(in_ECX + 0x29c);
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0034c35a(in_ECX + 0x89c,0xffffffff);
  return;
}
