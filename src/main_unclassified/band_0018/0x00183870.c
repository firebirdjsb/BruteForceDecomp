/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E02D319ABEF6DE14DCF2BA598B224A41807018AFEB44E3A994AAD5A753F38E07
 * Entry: 0x00183870, Ghidra index: 5205, label: FUN_00183870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00183870(int param_1)

{
  int iVar1;
  char extraout_AL;
  char cVar2;
  char extraout_AL_00;
  undefined4 in_EAX;
  undefined3 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  iVar1 = param_1;
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  if (*(char *)(param_1 + 0xa8) != '\0') {
    param_1 = 0;
    FUN_00183820(&param_1);
    uVar3 = extraout_var;
    cVar2 = extraout_AL;
    while (cVar2 != '\0') {
      if (*(int *)(iVar1 + 0x80 + param_1 * 0xc) == 1) {
        FUN_001838e0();
      }
      else {
        FUN_00183a00();
      }
      FUN_00183820(&param_1);
      uVar3 = extraout_var_00;
      cVar2 = extraout_AL_00;
    }
  }
  return CONCAT31(uVar3,1);
}
