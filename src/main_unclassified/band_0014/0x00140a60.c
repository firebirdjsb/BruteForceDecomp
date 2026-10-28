/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E62F93A64226307B9C623DC0D55C30EC31D85EC4BABEB87A3D6CCB5874DC174E
 * Entry: 0x00140a60, Ghidra index: 4089, label: FUN_00140a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040c9dc;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

static float bf_00140a60_f32(uint32_t bits)
{
  float value;
  memcpy(&value, &bits, sizeof(value));
  return value;
}

int FUN_00140a60(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float guest_slot_28;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 guest_sum;
  int unaff_retaddr;
  int iStack_8;
  
  iVar9 = 0;
  if ((((*(int *)(param_1 + 0x24) == 0) &&
       ((*(byte *)(*(int *)(param_1 + 0x18) + 0xc50) & 0x10) == 0)) && (param_2 != (int *)0x0)) &&
     (((*(byte *)((int)param_2 + 0x26) & 8) != 0 && (cVar6 = FUN_001263e0(), cVar6 != '\0')))) {
    iVar7 = FUN_001353c0();
    piVar3 = *(int **)(param_2[2] + 0xbec);
    iVar8 = (**(code **)(*param_2 + 0x40))();
    fVar10 = (float10)(**(code **)(*piVar3 + 0x24))(iVar8 + 0x24);
    if ((((iVar7 != 0) &&
         (((*(byte *)(iVar7 + 0x48) & 0x10) == 0 ||
          (cVar6 = FUN_001409a0(unaff_retaddr,(float)fVar10), cVar6 == '\0')))) &&
        (cVar6 = FUN_001372c0(param_2), cVar6 != '\0')) && (cVar6 = FUN_001374c0(), cVar6 != '\0'))
    {
      iStack_8 = *(int *)(iVar7 + 8);
      cVar6 = FUN_001409c0(unaff_retaddr,(float)fVar10);
      if ((cVar6 != '\0') && ((*(byte *)(iVar7 + 0x48) & 8) != 0)) {
        iStack_8 = iStack_8 + -1;
      }
      if (iStack_8 != 0) {
        fVar10 = (float10)FUN_00141020(unaff_retaddr,10);
        fVar11 = (float10)FUN_00141020(unaff_retaddr,iStack_8);
        fVar1 = (float)fVar11;
        /* 0x140b6c reuses [ESP+0x28] as one binary32 word after the
         * incoming pointer's lifetime. It is not a host pointer conversion. */
        guest_slot_28 = bf_00140a60_f32(UINT32_C(0x7f7fffff));
        fVar4 = (float)fVar10 - fVar1;
        fVar2 = *(float *)(iVar7 + 0x50);
        /* FLD/FADD/FCOM compare the unspilled sum; FSTP m32fp rounds only
         * on selection. AH&0x41 branches exclude unordered comparisons. */
        if (fVar1 > 0.0f) {
          guest_sum = (float10)bf_00140a60_f32(_DAT_0040c9dc) + (float10)fVar1;
          if (guest_sum <= (float10)fVar2) {
            guest_slot_28 = (float)guest_sum;
            goto guest_slot_28_ready;
          }
        }
        if (fVar1 <= fVar2) {
          guest_slot_28 = fVar1;
          goto guest_slot_28_ready;
        }
        if (fVar4 > 0.0f) {
          guest_sum = (float10)bf_00140a60_f32(_DAT_0040c9dc) + (float10)fVar4;
          if (guest_sum <= (float10)fVar2) {
            guest_slot_28 = (float)guest_sum;
            goto guest_slot_28_ready;
          }
        }
        if (fVar4 <= fVar2) {
          guest_slot_28 = fVar4;
        }
guest_slot_28_ready:
        /* ABI_UNVERIFIED: float10 is a host approximation of x87 state;
         * entry/virtual-call register contracts are not repaired here. */
        if ((guest_slot_28 <= fVar2) &&
           (cVar6 = FUN_00140a40(iStack_8), cVar6 != '\0')) {
          FUN_00141000();
          iVar9 = FUN_002ea01d(0x50);
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_0013feb0();
          }
          FUN_0013ffc0(iVar9);
          FUN_001400d0(iVar9,iVar7,param_1,1,0);
          FUN_00140040();
          *(int *)(iVar9 + 8) = iStack_8;
          *(byte *)(iVar9 + 0xc) =
               ((*(byte *)(iVar7 + 0x48) >> 2 & 1) << 2 | *(byte *)(iVar7 + 0x48) & 2) << 1 |
               *(byte *)(iVar9 + 0xc) & 0xf3;
          if (0.0f < guest_slot_28) {
            *(int *)(unaff_retaddr + 4) = iVar9;
            /* 0x140ca2/0x140cab copy exactly four raw bytes to object+8. */
            memcpy((void *)(uintptr_t)((uint32_t)unaff_retaddr + UINT32_C(8)),
                   &guest_slot_28, sizeof(guest_slot_28));
            return iVar9;
          }
          FUN_00140cd0(unaff_retaddr,iVar9,0);
        }
      }
    }
  }
  return iVar9;
}
