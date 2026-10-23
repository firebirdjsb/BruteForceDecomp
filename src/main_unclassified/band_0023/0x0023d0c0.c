/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36F65AC416711D60F22E770D1CA7ACA2CEB10EA9BD52F2DF20452F02A91CB8EC
 * Entry: 0x0023d0c0, Ghidra index: 7950, label: FUN_0023d0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023d0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int in_ECX;
  int local_4;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x20) + 4);
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x20) + 0x70);
  if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0))
     && ((uVar2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xc) &&
         (iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4 + uVar2 * 0xc), iVar1 != 0)))) {
    FUN_0023cf80();
    *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_ECX + 0x28);
    local_4 = iVar1;
    FUN_0023c1d0(&local_4,param_4,param_1,param_3,1);
  }
  return 4;
}
