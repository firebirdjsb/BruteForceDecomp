/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20D62E9FABF8825B20544E8D3E9137D599169C54596AE174646BDC3D7F64E78B
 * Entry: 0x000a7770, Ghidra index: 1989, label: FUN_000a7770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000a7770(uint *param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int iVar5;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  piVar4 = *(int **)(in_ECX + 8);
  while( true ) {
    if (piVar4 == *(int **)(in_ECX + 0xc)) {
      return 0;
    }
    local_8[0] = *(undefined4 **)(*piVar4 + 0x10c);
    iVar5 = 0;
    local_c = local_8[0];
    if (*(char *)((int)local_8[0][1] + 0x19) == '\0') {
      puVar1 = (undefined4 *)local_8[0][1];
      do {
        if ((uint)puVar1[3] < *param_1) {
          puVar2 = (undefined4 *)puVar1[2];
        }
        else {
          puVar2 = (undefined4 *)*puVar1;
          local_c = puVar1;
        }
        puVar1 = puVar2;
      } while (*(char *)((int)puVar2 + 0x19) == '\0');
    }
    if ((local_c == local_8[0]) || (*param_1 < (uint)local_c[3])) {
      ppuVar3 = local_8;
    }
    else {
      ppuVar3 = &local_c;
    }
    if (*ppuVar3 != *(undefined4 **)(*piVar4 + 0x10c)) {
      iVar5 = (*ppuVar3)[4];
    }
    if (iVar5 != 0) break;
    piVar4 = piVar4 + 1;
  }
  return iVar5;
}
