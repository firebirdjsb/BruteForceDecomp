/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 774826AD97CC3F878601A2EC2F40BFC778435A208A64AC17C0B61137134C848B
 * Entry: 0x002dca20, Ghidra index: 10305, label: FUN_002dca20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dca20(int param_1,float param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(short *)(param_3 + 2) != 0) {
    do {
      iVar6 = (int)*(short *)(*(int *)(*(int *)(*(int *)(param_3 + 4) + local_4 * 4) + 0x40) + 0x48)
      ;
      if (-1 < iVar6) {
        pfVar2 = *(float **)(*(int *)(unaff_EBX + 0x28) + iVar6 * 4);
        if (pfVar2[0x1a] != param_2) {
          fVar3 = 1.0;
        }
        else {
          fVar3 = -1.0;
        }
        uVar4 = (uint)(pfVar2[0x1a] != param_2);
        if (pfVar2[uVar4 + 0x1a] != 0.0) {
          pfVar5 = pfVar2 + (uVar4 + 0xb) * 4;
          pfVar1 = (float *)(*(int *)(unaff_EBX + 0xc) +
                            (*(int *)(unaff_EBX + 8) * iVar6 + param_1) * 4);
          *pfVar1 = (*pfVar5 * *unaff_EDI + pfVar5[1] * unaff_EDI[1] + pfVar5[2] * unaff_EDI[2] +
                    *pfVar2 * *unaff_ESI + pfVar2[1] * unaff_ESI[1] + pfVar2[2] * unaff_ESI[2]) *
                    fVar3 + *pfVar1;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < (int)(uint)*(ushort *)(param_3 + 2));
  }
  return;
}
