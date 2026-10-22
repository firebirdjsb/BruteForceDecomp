/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDA9A4B6F7E38E2E06442F43C6B7F15054A7F7B21CD49D3AABFDAAEC4A2E7A67
 * Entry: 0x00348242, Ghidra index: 12891, label: FUN_00348242
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348242(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0034cc6e();
  if (iVar1 != 0) {
    iVar1 = FUN_0034cc6e();
    if ((iVar1 != 0) &&
       ((*(uint *)(in_ECX + 0x26c) & *(uint *)(in_ECX + 0x268)) ==
        (*(uint *)(in_ECX + 0x26c) & param_3))) {
      iVar1 = FUN_00348090(param_1);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x18) == param_2) {
          FUN_00348127(param_1,0xffffffff,param_3,2,1);
        }
        else {
          FUN_00347b2c(iVar1);
        }
      }
    }
  }
  return;
}
