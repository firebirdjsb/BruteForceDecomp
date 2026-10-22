/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 622AC7AD2D276AA06BDEBA754B08DA89431AE718E6A2FA1A825C6937C5A6E189
 * Entry: 0x00076870, Ghidra index: 1380, label: FUN_00076870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00076870(undefined4 param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  
  (**(code **)(*param_2 + 0x10))();
  piVar3 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2,&stack0x00000000);
  if (&stack0x00000000 == (undefined1 *)0x1077c68b) {
    bVar2 = *(byte *)(param_2 + 0xc) & 0xfd;
  }
  else {
    if (&stack0x00000000 != (undefined1 *)0xedbd6b03) {
      iVar1 = param_2[0xb];
      if ((iVar1 != 0) && (iVar1 != 0)) {
        param_2[0xb] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          param_2[10] = 0;
        }
      }
      goto LAB_000768de;
    }
    bVar2 = *(byte *)(param_2 + 0xc) & 0xfe;
  }
  *(byte *)(param_2 + 0xc) = bVar2;
LAB_000768de:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}
