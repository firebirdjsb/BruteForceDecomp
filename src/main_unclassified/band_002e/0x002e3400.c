/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B574A36665C6509B940098FC597DAFB443253D555519C669E876CF772506F76
 * Entry: 0x002e3400, Ghidra index: 10399, label: FUN_002e3400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3400(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar3 = param_1;
    do {
      puVar3 = puVar3 + 1;
      if (*puVar3 == *in_ECX) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  if ((uVar2 == uVar1) && (uVar1 < 0x40)) {
    param_1[uVar2 + 1] = *in_ECX;
    *param_1 = *param_1 + 1;
  }
  return;
}
