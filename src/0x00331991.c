/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05B6DD0D0D65C7A655DFB6ED303EC7DFD987BB572B6896C28DBB5EA7DF971067
 * Entry: 0x00331991, Ghidra index: 12397, label: FUN_00331991
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00331991(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00330c53(param_1 + 0x3c);
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0x4c);
  if (iVar1 != -1) {
    FUN_003450fe(iVar1);
  }
  if (*(int *)(param_1 + 0x66c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x66c) + 0xac);
    if (iVar1 != 0) {
      FUN_0033ea20(iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x66c) + 0xa8);
    if (iVar1 != 0) {
      FUN_0033ea20(iVar1);
    }
    FUN_0033ea20(*(undefined4 *)(param_1 + 0x66c));
  }
  FUN_003476db(param_1 + 0x20,0,0xffffffff);
  FUN_0033ea20(param_1);
  return;
}
