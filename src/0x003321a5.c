/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 607C4B84076E1992A8C25AD6B941DF3E57967033B71A9610C91B8975B7671C63
 * Entry: 0x003321a5, Ghidra index: 12401, label: FUN_003321a5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003321a5(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00330c53(param_1 + 0x34);
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0x4c);
  if (iVar1 != -1) {
    FUN_003450fe(iVar1);
  }
  if (*(int *)(param_1 + 0x664) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x664) + 0xa8);
    if (iVar1 != 0) {
      FUN_0033ea20(iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x664) + 0xac);
    if (iVar1 != 0) {
      FUN_0033ea20(iVar1);
    }
    FUN_0033ea20(*(undefined4 *)(param_1 + 0x664));
  }
  FUN_003476db(param_1 + 0x20,0,0xffffffff);
  FUN_0033ea20(param_1);
  return;
}
