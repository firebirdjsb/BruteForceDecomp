/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 615BCE8AF4630C29AEADD79E947A8C2D08B9497911AEB1660A22491378ED65F2
 * Entry: 0x0017bf40, Ghidra index: 5036, label: FUN_0017bf40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0017bf40(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  int *piVar6;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  piVar6 = *(int **)(in_ECX + 8);
  puVar2 = (undefined4 *)0x0;
  if (piVar6 != *(int **)(in_ECX + 0xc)) {
    while( true ) {
      iVar1 = *piVar6;
      local_8[0] = *(undefined4 **)(iVar1 + 0x138);
      puVar2 = (undefined4 *)0x0;
      local_c = local_8[0];
      if (*(char *)((int)local_8[0][1] + 0x81) == '\0') {
        puVar3 = (undefined4 *)local_8[0][1];
        do {
          if ((uint)puVar3[3] < *param_1) {
            puVar4 = (undefined4 *)puVar3[2];
          }
          else {
            puVar4 = (undefined4 *)*puVar3;
            local_c = puVar3;
          }
          puVar3 = puVar4;
        } while (*(char *)((int)puVar4 + 0x81) == '\0');
      }
      if ((local_c == local_8[0]) || (*param_1 < (uint)local_c[3])) {
        ppuVar5 = local_8;
      }
      else {
        ppuVar5 = &local_c;
      }
      if (*ppuVar5 != *(undefined4 **)(iVar1 + 0x138)) {
        puVar2 = *ppuVar5 + 4;
      }
      if (puVar2 != (undefined4 *)0x0) break;
      piVar6 = piVar6 + 1;
      if (piVar6 == *(int **)(in_ECX + 0xc)) {
        return (undefined4 *)0x0;
      }
    }
    if (puVar2[1] != 1) {
      *param_2 = 0;
      return puVar2;
    }
    *param_2 = *(undefined4 *)(iVar1 + 0x15c);
  }
  return puVar2;
}
