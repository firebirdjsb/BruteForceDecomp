/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44585FD6A8BB2C4161210FDD46E2DDF0AFA8DDD2B2223BF56E9D67997454DEEB
 * Entry: 0x00147390, Ghidra index: 4235, label: FUN_00147390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00147390(int *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 != '\0') {
    iVar1 = param_1[8];
    *(byte *)(iVar1 + 0x1bc) = *(byte *)(iVar1 + 0x1bc) | 2;
    *(undefined1 *)(iVar1 + 0x79) = 0;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0xc) + 0x15c) + 0x10))(iVar1);
    if (*(int *)(param_1[8] + 0x1c8) != param_1[0x75]) {
      FUN_0008f6a0(param_1[0x75]);
    }
  }
  return;
}
