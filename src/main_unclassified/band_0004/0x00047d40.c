/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 801E4720C6C317F5DEE464A12FB5D611D020244D4839EFD61A0E3C82BF44E93A
 * Entry: 0x00047d40, Ghidra index: 566, label: FUN_00047d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_00047d40(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *unaff_ESI;
  
  iVar4 = FUN_000120f0();
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  if (((*(byte *)(*unaff_ESI + 100) & 0x10) != 0) &&
     (0.3 < (float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0)) {
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    if ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0 <= 0.3) {
      if ((((*(byte *)(*(int *)(iVar4 + 0xc) + 0x1a9) & 8) != 0) &&
          ((*(byte *)(*unaff_ESI + 100) & 0x40) == 0)) &&
         ((*(byte *)(*unaff_ESI + 100) & 0x10) != 0)) {
        FUN_000124f0(0);
        iVar4 = FUN_00040510(0x22);
        if (iVar4 == 1) {
          unaff_ESI[9] = unaff_ESI[9] | 0x84;
          unaff_ESI[2] = 6;
          goto LAB_00047edd;
        }
      }
    }
    else if (((*(byte *)(*(int *)(iVar4 + 0xc) + 0x1a9) & 4) != 0) &&
            ((*(byte *)(*unaff_ESI + 100) & 0x10) != 0)) {
      FUN_000124f0(0);
      unaff_ESI[9] = unaff_ESI[9] & 0xffffff7fU | 4;
      FUN_00040280(0x18);
      unaff_ESI[2] = 6;
      goto LAB_00047edd;
    }
  }
  piVar5 = (int *)(**(code **)(*(int *)(*unaff_ESI + 0xc) + 8))();
  iVar4 = piVar5[6];
  iVar1 = piVar5[3];
  iVar2 = *piVar5;
  unaff_ESI[2] = 4;
  unaff_ESI[3] = iVar2;
  unaff_ESI[5] = iVar4;
  unaff_ESI[4] = iVar1;
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  unaff_ESI[1] = (int)(((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) + 1.0);
LAB_00047edd:
  fVar3 = (float)unaff_ESI[1];
  if (1.1920929e-07 < fVar3) {
    unaff_ESI[0x12] = (int)fVar3;
    unaff_ESI[0x10] = (int)fVar3;
    *(byte *)(unaff_ESI + 0x11) = *(byte *)(unaff_ESI + 0x11) & 0xf9 | 1;
    unaff_ESI[9] = unaff_ESI[9] | 0x10;
    return;
  }
  unaff_ESI[9] = unaff_ESI[9] | 0x10;
  return;
}
