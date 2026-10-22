/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 085109316A597292AC5294895224A3882533200F313628DF4DDBCB788A136D36
 * Entry: 0x00094370, Ghidra index: 1811, label: FUN_00094370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IRampSingle_0040e3ec[];
/* WARNING: Removing unreachable block (ram,0x00094399) */
/* WARNING: Removing unreachable block (ram,0x00094403) */

void FUN_00094370(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00238080(s_23_23_IRampSingle_0040e3ec,puVar1);
    (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,4);
    puVar3 = (undefined4 *)(param_1 + 0x50);
    iVar2 = 6;
    do {
      (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,*puVar3,puVar3 + 6);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00238080(s_23_23_IRampSingle_0040e3ec,puVar1);
    (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,4);
    puVar3 = (undefined4 *)(param_1 + 0xa0);
    iVar2 = 6;
    do {
      (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,*puVar3,puVar3 + 6);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
