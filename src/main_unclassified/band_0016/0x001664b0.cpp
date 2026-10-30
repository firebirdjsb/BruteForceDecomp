/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44CCAF35353636DF62DB82941AC88CAD9A7952D51FEB51B1A80D67E0A10ECB51
 * Entry: 0x001664b0, Ghidra index: 4715, label: FUN_001664b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001664b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EDX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  puVar3 = (undefined4 *)(param_1 + 4);
  iVar2 = param_1 - (int)in_EDX;
  local_4 = 6;
  do {
    *(undefined4 *)((int)in_EDX + iVar2) = *in_EDX;
    iVar4 = 4;
    puVar1 = puVar3;
    do {
      *puVar1 = *(undefined4 *)((int)in_EDX + (4 - (int)puVar3) + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    in_EDX = in_EDX + 5;
    puVar3 = puVar3 + 5;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return param_1;
}
