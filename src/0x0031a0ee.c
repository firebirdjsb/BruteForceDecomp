/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38BF633C93890E175C18F61BE945F8A7D16B21E7DAB07C9F36A609FEF00078F6
 * Entry: 0x0031a0ee, Ghidra index: 12256, label: FUN_0031a0ee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031a0ee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00319edd(local_14,*(uint *)(in_ECX + 0x164) >> 2,param_1,param_2,param_3);
  puVar1 = (undefined4 *)(in_ECX + 0x1c0);
  iVar2 = 3;
  do {
    puVar1[-1] = local_10;
    *puVar1 = local_c;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00319edd(local_14,*(undefined4 *)(in_ECX + 0x164),param_1,param_2,param_3);
  puVar1 = (undefined4 *)(in_ECX + 0x214);
  iVar2 = 2;
  do {
    puVar1[-1] = local_10;
    *puVar1 = local_c;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = in_ECX + 0x1dc;
  puVar1 = (undefined4 *)(in_ECX + 0xf0);
  local_8 = 4;
  do {
    FUN_00319edd(iVar2,*puVar1,param_1,param_2,param_3);
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 0xc;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}
