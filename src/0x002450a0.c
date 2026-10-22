/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7DD066D83A4450B2E6A9003BD52DE809DB35C60D8FBC58BA4466C2770EB5107
 * Entry: 0x002450a0, Ghidra index: 8079, label: FUN_002450a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002450a0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x2c) {
      FUN_00249a20();
      iVar2 = iVar2 + 0x2c;
    }
    FUN_0024a730(iVar2,*(undefined4 *)(param_1 + 8),param_1,param_3);
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return;
  }
  *param_2 = param_3;
  return;
}
