/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8597BB6B3F5DD27B28FE4A013275D8D1E8D560E476A70DD02054DDE1DEFEBEC
 * Entry: 0x002bee90, Ghidra index: 9985, label: FUN_002bee90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002bee90(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *in_ECX) {
    uVar2 = param_2;
    do {
      uVar2 = in_ECX[1] & uVar2;
      puVar1 = (uint *)(in_ECX[3] + uVar2 * 0xc);
      iVar3 = iVar3 + 1;
      if (*(int *)(in_ECX[3] + 8 + uVar2 * 0xc) == 0) {
        return 0;
      }
      if (((*puVar1 | 0x80000000) == param_2) && (puVar1[1] == param_1)) {
        return puVar1[2];
      }
      uVar2 = uVar2 + 1;
    } while (iVar3 < *in_ECX);
  }
  return 0;
}
