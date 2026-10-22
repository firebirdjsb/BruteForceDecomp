/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D38BE28C8F1C54121E0A23DE09FC843ABD22B718B7C6E67BFB072C1DD342C19
 * Entry: 0x00292690, Ghidra index: 9253, label: FUN_00292690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
undefined4 FUN_00292690(void)

{
  uint uVar1;
  byte *pbVar2;
  int *unaff_EDI;
  float10 fVar3;
  int local_4;
  
  if (*unaff_EDI != -2) {
    return 1;
  }
  pbVar2 = (byte *)(unaff_EDI[2] + 0x28);
  local_4 = 1;
  while( true ) {
    if (DAT_003b6c30 < 2) {
      uVar1 = (byte)PTR_DAT_003b6c3c[(uint)*pbVar2 * 2] & 8;
    }
    else {
      uVar1 = FUN_002eba73(*pbVar2,8);
    }
    if (uVar1 == 0) break;
    pbVar2 = pbVar2 + 1;
  }
  if (*pbVar2 == 0x2d) {
    local_4 = -1;
  }
  else if (*pbVar2 != 0x2b) goto LAB_002926f5;
  pbVar2 = pbVar2 + 1;
LAB_002926f5:
  if (DAT_003b6c30 < 2) {
    uVar1 = (byte)PTR_DAT_003b6c3c[(uint)*pbVar2 * 2] & 4;
  }
  else {
    uVar1 = FUN_002eba73(*pbVar2,4);
  }
  if (uVar1 == 0) {
    if (DAT_003b6c30 < 2) {
      uVar1 = (byte)PTR_DAT_003b6c3c[(uint)pbVar2[1] * 2] & 4;
    }
    else {
      uVar1 = FUN_002eba73(pbVar2[1],4);
    }
    if (uVar1 == 0) {
      return 2;
    }
  }
  fVar3 = (float10)FUN_00295660();
  if (fVar3 < (float10)0.0) {
    return 2;
  }
  *unaff_EDI = -1;
  *(double *)(unaff_EDI + 2) = (double)((float10)local_4 * fVar3);
  return 0;
}
