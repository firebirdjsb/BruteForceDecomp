/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A7D00344C1D370A4B9B90A76EAB49280BE9C8C52E123A450C98873A2DBCFEF1
 * Entry: 0x00315a72, Ghidra index: 12112, label: FUN_00315a72
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00315a72(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00315838(param_1,&param_1);
  if (-1 < iVar1) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + param_2);
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    iVar1 = 0;
  }
  return iVar1;
}
