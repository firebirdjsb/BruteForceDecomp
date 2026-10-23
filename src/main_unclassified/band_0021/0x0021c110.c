/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07D1135F9AE3FDC20A8E9508B0F1A48ED54B407F12E530272E6026E3DE9FB458
 * Entry: 0x0021c110, Ghidra index: 7521, label: FUN_0021c110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IFxAppearance_00402ddc[];
undefined4 FUN_0021c110(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (undefined1 *)&local_4;
  piVar3 = *(int **)(param_1 + 4);
  local_4 = 0;
  iVar1 = (**(code **)*piVar3)(piVar3,s_23_23_IFxAppearance_00402ddc);
  if (-1 < iVar1) {
    piVar2 = (int *)(**(code **)(*piVar3 + 0x74))(piVar3,&puStack_8);
    if (*piVar2 == 0x111035aa) {
      (**(code **)(*piVar3 + 0xd4))(piVar3,0);
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}
