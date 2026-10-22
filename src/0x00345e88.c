/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 507655790C68FB310764A0DD56E5A83409F56F22918264CFF41CC7251258AC16
 * Entry: 0x00345e88, Ghidra index: 12825, label: FUN_00345e88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345e88(int param_1,int *param_2,undefined4 param_3)

{
  if (param_2 != (int *)0x0) {
    if (*(int **)(param_1 + 0x30) == param_2) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else if (*(int **)(param_1 + 0x20) == param_2) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_2[1] + 0xc) = param_3;
    KeSetEvent(*param_2,1,0);
    if (*param_2 != param_1 + 0x10) {
      ObfDereferenceObject();
      ExFreePool(param_2);
    }
  }
  return;
}
