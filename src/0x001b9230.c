/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA7075585D7FDF30F072BAA95B287168F38E49F0673EF3FEF2266CEB3FDC7A7C
 * Entry: 0x001b9230, Ghidra index: 5710, label: FUN_001b9230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b9230(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_4) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = param_3;
    for (; param_4 != iVar1; param_4 = param_4 + 0x40) {
      FUN_001d1c00();
      iVar2 = iVar2 + 0x40;
    }
    FUN_000e2c40(*(undefined4 *)(param_1 + 8),param_1,param_3);
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return;
  }
  *param_2 = param_3;
  return;
}
