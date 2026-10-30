/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC3CD4BDE8AEBA0D8198F60A83840A93EACAABB3F5F78E5D1B4C7538C489D5D5
 * Entry: 0x0006e450, Ghidra index: 1238, label: FUN_0006e450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0006ad00(void);
extern void FUN_0006c840(int param_1);

undefined4 FUN_0006e450(float param_1)

{
  int iVar1;
  int unaff_EDI;
  float10 fVar2;
  
  if ((*(byte *)(unaff_EDI + 0x4c) & 1) == 0) {
    *(byte *)(unaff_EDI + 0x4c) = *(byte *)(unaff_EDI + 0x4c) & 0xdf;
    *(float *)(unaff_EDI + 200) = param_1;
  }
  iVar1 = *(int *)(unaff_EDI + 0x50);
  *(float *)(iVar1 + 0x14) = (float)((float10)param_1 * (float10)0.5);
  fVar2 = (float10)fptan((float10)param_1 * (float10)0.5 * (float10)0.017453292);
  *(float *)(iVar1 + 0x24) = (float)fVar2;
  FUN_0006ad00();
  *(float *)(iVar1 + 0x2c) = *(float *)(iVar1 + 0x24) / *(float *)(iVar1 + 0x28);
  FUN_0006c840(unaff_EDI);
  return 0;
}
