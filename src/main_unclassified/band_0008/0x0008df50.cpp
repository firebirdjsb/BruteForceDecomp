/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A45DFB5F85389994304C8E09A46D1E5FFF21EF33F7EFF4A2476BCCF6667D8546
 * Entry: 0x0008df50, Ghidra index: 1725, label: FUN_0008df50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0008e620(undefined4 param_1,undefined4 param_2,int *param_3);
extern void FUN_0008e950(undefined4 param_1,undefined4 param_2,float param_3,int *param_4);

void FUN_0008df50(float param_1)

{
  char in_AL;
  int iVar1;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_EBX;
  int unaff_ESI;
  float10 fVar2;
  
  if (in_AL == '\0') {
    fVar2 = (float10)FUN_0008e620(unaff_ESI,unaff_EBX,unaff_ESI + 4);
    FUN_0008e950(unaff_ESI,unaff_EBX,(float)(fVar2 + (float10)param_1),extraout_EDX);
  }
  if (in_ECX != 0) {
    iVar1 = FUN_0008e590(unaff_ESI);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_0008e620(unaff_ESI,unaff_EBX,iVar1);
      FUN_0008e950(unaff_ESI,unaff_EBX,(float)(fVar2 + (float10)param_1),extraout_EDX_00);
    }
  }
  return;
}
