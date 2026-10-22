/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F549CA5760B7EF786E300FE14DCAD4E779F00F7E35D81250B59636154F215A9
 * Entry: 0x001516c0, Ghidra index: 4415, label: FUN_001516c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699bc;
void FUN_001516c0(int param_1)

{
  char cVar1;
  int in_EAX;
  float *pfVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(short *)(in_EAX + 0xc) == 2) {
    FUN_00150930();
    FUN_00150930();
    FUN_00150930();
    if (*(int *)(param_1 + 4) == 1) {
      cVar1 = FUN_00167c40();
    }
    else {
      if (*(int *)(param_1 + 4) != 0) {
        return;
      }
      cVar1 = FUN_00167a80();
    }
    if (cVar1 != '\0') {
      if (*(int *)(DAT_004699b0 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(DAT_004699b0 + 8) - *(int *)(DAT_004699b0 + 4)) / 0x54;
      }
      if (DAT_004699bc == iVar3) {
        FUN_00153eb0();
      }
      iVar3 = DAT_004699bc * 0x54;
      DAT_004699bc = DAT_004699bc + 1;
      pfVar2 = (float *)(iVar3 + *(int *)(DAT_004699b0 + 4));
      pfVar2[0x13] = *(float *)(param_1 + 0x9c);
      pfVar2[0x14] = (float)(in_EAX + 0x10);
      *pfVar2 = local_20;
      pfVar2[1] = local_1c;
      pfVar2[2] = local_18;
      pfVar2[3] = local_30;
      pfVar2[4] = local_2c;
      pfVar2[5] = local_28;
      pfVar2[6] = local_10;
      pfVar2[7] = local_c;
      pfVar2[8] = local_8;
      if (*(int *)(param_1 + 4) == 0) {
        pfVar2[0xb] = (local_c - local_1c) * (local_30 - local_20) -
                      (local_2c - local_1c) * (local_10 - local_20);
        pfVar2[10] = (local_28 - local_18) * (local_10 - local_20) -
                     (local_8 - local_18) * (local_30 - local_20);
        pfVar2[9] = (local_8 - local_18) * (local_2c - local_1c) -
                    (local_c - local_1c) * (local_28 - local_18);
        FUN_0001fd40();
        pfVar2[0xc] = pfVar2[9];
        pfVar2[0xd] = pfVar2[10];
        pfVar2[0xe] = pfVar2[0xb];
      }
    }
  }
  return;
}
