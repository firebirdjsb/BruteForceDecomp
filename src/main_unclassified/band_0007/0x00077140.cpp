/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BB35C64079F747039CC4FE371E6AA6DDACA16E0DD6FBE36EAC8B8DB1202CA53
 * Entry: 0x00077140, Ghidra index: 1391, label: FUN_00077140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00077860(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_00077350(int param_1,undefined4 param_2);

void FUN_00077140(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_00077860(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_00077350(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
