/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 630A198000FF4574A8B76875DC2324F24229FD0F918533D1B55F464FA8A62F0A
 * Entry: 0x001f4880, Ghidra index: 7036, label: FUN_001f4880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001f4880(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  float10 fVar5;
  
  piVar2 = param_3;
  iVar1 = param_2;
  cVar3 = FUN_001f4740(unaff_ESI,&param_2,&param_3,param_1,param_2);
  if (cVar3 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(int **)(unaff_ESI + 0x20) * (int)param_3 + param_2) * 0x40 +
            *(int *)(unaff_ESI + 0x18);
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar4;
  }
  if (iVar4 != 0) {
    fVar5 = (float10)FUN_001f3aa0(param_1,iVar1);
    return fVar5;
  }
  return (float10)-3.4028235e+38;
}
