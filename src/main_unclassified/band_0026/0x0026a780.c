/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E3F69E58906705FB693DA7FF568ED43F814CCF0BFEAC043799486D1E7FED2FA
 * Entry: 0x0026a780, Ghidra index: 8750, label: FUN_0026a780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0026a780(float *param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  float *pfVar5;
  int local_51c;
  float local_518 [324];
  int local_8;
  uint local_4;
  
  local_51c = *(int *)(param_2 + 0x510);
  uVar1 = *(uint *)(param_2 + 0x514);
  local_8 = local_51c;
  local_4 = uVar1;
  if (local_51c != 0) {
    pfVar5 = local_518;
    do {
      uVar4 = 0;
      if (uVar1 != 0) {
        pfVar2 = pfVar5;
        do {
          iVar3 = uVar4 * 4;
          uVar4 = uVar4 + 1;
          *pfVar2 = *(float *)(unaff_EBX + iVar3) *
                    *(float *)((param_2 - (int)local_518) + (int)pfVar2);
          pfVar2 = pfVar2 + 1;
        } while (uVar4 < uVar1);
      }
      pfVar5 = pfVar5 + 0x12;
      local_51c = local_51c + -1;
    } while (local_51c != 0);
  }
  pfVar5 = local_518;
  for (iVar3 = 0x146; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
