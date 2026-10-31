/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F3E0690B00E2BFA565C7AA7958633264D2F149B8B15C613780307B82FDD8234
 * Entry: 0x00344e30, Ghidra index: 12754, label: FUN_00344e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern undefined4 FUN_0034470a(int param_1,uint param_2);
extern bool FUN_003447d5(undefined4 param_1,int param_2);
undefined4 FUN_00344e30(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar3 = FUN_0034470a(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = (undefined1)((uint)param_3 >> 8);
  if ((param_3 < -0x8000) || (0x7fff < param_3)) {
    uVar2 = (undefined1)((uint)param_3 >> 0x10);
    if ((param_3 < -0x800000) || (0x7fffff < param_3)) {
      iVar3 = FUN_003447d5(param_1,4);
      if (iVar3 == 0) {
        return 0;
      }
      **(undefined1 **)(param_1 + 0x24) = (char)((uint)param_3 >> 0x18);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      **(undefined1 **)(param_1 + 0x24) = uVar2;
    }
    else {
      iVar3 = FUN_003447d5(param_1,3);
      if (iVar3 == 0) {
        return 0;
      }
      **(undefined1 **)(param_1 + 0x24) = uVar2;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    **(undefined1 **)(param_1 + 0x24) = uVar4;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    if ((param_3 < -0x80) || (0x7f < param_3)) {
      iVar3 = FUN_003447d5(param_1,2);
      if (iVar3 != 0) {
        piVar1 = (int *)(param_1 + 0x24);
        *(undefined1 *)*piVar1 = uVar4;
        *piVar1 = *piVar1 + 1;
        *(char *)*piVar1 = (char)param_3;
        *piVar1 = *piVar1 + 1;
        return 1;
      }
      return 0;
    }
    iVar3 = FUN_003447d5(param_1,1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  **(undefined1 **)(param_1 + 0x24) = (char)param_3;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return 1;
}
