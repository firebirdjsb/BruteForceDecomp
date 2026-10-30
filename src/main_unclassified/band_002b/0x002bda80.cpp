/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CCD1D42A76F092EE2893CF00244AA2E0B72625CED2749665DBC92053ABCB24F
 * Entry: 0x002bda80, Ghidra index: 9956, label: FUN_002bda80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-argument 0x002CCF80 Ghidra callee declaration.
 * Guest input registers and original Xbox ABI are UNVERIFIED. */
extern void FUN_002ccf80(void);
void FUN_002bda80(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x10) + iVar4 * 4);
      if (*(ushort *)(param_1 + 0xc) <= *(ushort *)(param_1 + 0xe)) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0xe) * 4) = iVar1;
      *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
      iVar2 = *(int *)(iVar1 + 0xc);
      *(int *)(iVar1 + 0x170) = param_1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(param_2 + 0xe));
  }
  piVar3 = (int *)(*(int *)(iVar2 + 8) + 0x18);
  if ('\a' < *param_2) {
    piVar3 = (int *)(*(int *)(iVar2 + 8) + 0x1a8);
  }
  iVar2 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    *piVar3 = iVar4;
  }
  else {
    *(int *)(iVar2 + 8) = iVar4;
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = iVar2;
  }
  return;
}
