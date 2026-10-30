/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C6D22E6314F4FC82837BF74C1FD902AB733AC47040486CF824F4F7129A31AB6
 * Entry: 0x000e3ad0, Ghidra index: 2825, label: FUN_000e3ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3ad0(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar2 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if (cVar2 != '\0') {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
  }
  FUN_000e3c70(param_1,param_2,param_4,param_5);
  return;
}
