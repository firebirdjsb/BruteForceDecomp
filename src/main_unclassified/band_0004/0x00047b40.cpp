/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA4C4DAF828C56808CF5C34F863DD2C08E19439E0E0E820FC493D823C80AEC89
 * Entry: 0x00047b40, Ghidra index: 565, label: FUN_00047b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_00047b40(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
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
        iVar4 = FUN_00040510(0x21);
        if (iVar4 == 1) {
          unaff_ESI[9] = unaff_ESI[9] | 0x82;
          unaff_ESI[2] = 6;
          goto LAB_00047d03;
        }
      }
    }
    else if (((*(byte *)(*(int *)(iVar4 + 0xc) + 0x1a9) & 4) != 0) &&
            ((*(byte *)(*unaff_ESI + 100) & 0x10) != 0)) {
      FUN_000124f0(0);
      unaff_ESI[9] = unaff_ESI[9] & 0xffffff7fU | 2;
      FUN_00040280(0x17);
      unaff_ESI[2] = 6;
      goto LAB_00047d03;
    }
  }
  pfVar5 = (float *)(**(code **)(*(int *)(*unaff_ESI + 0xc) + 8))();
  fVar3 = pfVar5[6];
  fVar1 = pfVar5[3];
  fVar2 = *pfVar5;
  unaff_ESI[2] = 4;
  unaff_ESI[3] = (int)-fVar2;
  unaff_ESI[4] = (int)-fVar1;
  unaff_ESI[5] = (int)-fVar3;
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  unaff_ESI[1] = (int)(((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) + 1.0);
LAB_00047d03:
  fVar3 = (float)unaff_ESI[1];
  if (1.1920929e-07 < fVar3) {
    unaff_ESI[0x12] = (int)fVar3;
    unaff_ESI[0x10] = (int)fVar3;
    *(byte *)(unaff_ESI + 0x11) = *(byte *)(unaff_ESI + 0x11) & 0xf9 | 1;
    unaff_ESI[9] = unaff_ESI[9] | 8;
    return;
  }
  unaff_ESI[9] = unaff_ESI[9] | 8;
  return;
}
