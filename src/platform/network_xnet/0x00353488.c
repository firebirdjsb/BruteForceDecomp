/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 902217472262551BCB61F61F7513DFC9101468620901D13AD276FEFDA138D327
 * Entry: 0x00353488, Ghidra index: 13086, label: FUN_00353488
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00353488(int param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if (*(byte *)(param_1 + 0x7c) < 2) {
    KeRaiseIrqlToDpcLevel();
    iVar1 = *(int *)(param_1 + 0x40);
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if ((int)param_2 < 1) {
        param_2 = 1;
      }
      else if ((int)(uint)*(byte *)(in_ECX + 0x2d) < (int)param_2) {
        param_2 = (uint)*(byte *)(in_ECX + 0x2d);
      }
      *(char *)(param_1 + 0x7e) = (char)param_2;
      FUN_0035343c(param_1,param_2);
      iVar1 = 0;
    }
    KfLowerIrql();
  }
  else {
    iVar1 = -0x7ff8d8b8;
  }
  return iVar1;
}
