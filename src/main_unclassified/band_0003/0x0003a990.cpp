/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B203E60E326E91DB66D85643861BCAF52D84D2311ACC3D07F42961875BFF3AC4
 * Entry: 0x0003a990, Ghidra index: 414, label: FUN_0003a990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0015b7c0(void);

float10 FUN_0003a990(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_EDX;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x3f8) + 4 + *(int *)(unaff_EDI + 0x58) * 0xc);
  piVar2 = (int *)FUN_00023010(local_4,in_EDX);
  if ((*piVar2 != *(int *)(iVar1 + 0xc)) &&
     (uVar3 = *piVar2 - *(int *)(iVar1 + 8) >> 2, -1 < (int)uVar3)) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x3f8) + 8 + *(int *)(unaff_EDI + 0x58) * 0xc);
    if ((*(int *)(iVar1 + 4) == 0) ||
       ((uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) <= uVar3)) {
      FUN_0015b7c0(iVar1);
    }
    return (float10)*(float *)(*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) + 4);
  }
  return (float10)-1.0;
}
