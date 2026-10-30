/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66E4D5194A86E65046C14E09B9779D619B2B726C458BF3982DCBAEE6FF7D6A5C
 * Entry: 0x003357da, Ghidra index: 12434, label: FUN_003357da
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003357da(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0xc) {
    if ((iVar1 == 5) || (iVar1 == 6)) {
      *(undefined4 *)(param_1 + 0x10) = 8;
    }
    do {
      iVar1 = FUN_00330c3e(param_1);
    } while (iVar1 == 0);
  }
  FUN_003476af(*(undefined4 *)(param_1 + 0x14),0);
  FUN_003356c8(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x12ec + in_ECX) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x1310 + in_ECX);
  if (iVar1 != 0) {
    FUN_0033e9ea(iVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x1310 + in_ECX) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) * 0xb8 + 0x1318 + in_ECX) = 0;
  thunk_FUN_0033e986(param_1,0x1f);
  return;
}
