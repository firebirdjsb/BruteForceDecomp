/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E24C4D421B24213D753DBB1DD70EC7D4B651F4CE0E5D3FAB7758367288DB3E3
 * Entry: 0x0021d760, Ghidra index: 7540, label: FUN_0021d760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IFxAppearance_00402ddc[];
undefined4 FUN_0021d760(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0;
  iVar1 = (**(code **)*piVar2)(piVar2,s_23_23_IFxAppearance_00402ddc,&local_4);
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0xcc))(piVar2,&LAB_0021d670,local_4);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}
