/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AC84F98150C007D6A8E17D61CB48AA8C00ECC9D6E5511D530DCFA719F3ED4C8
 * Entry: 0x0031456e, Ghidra index: 12062, label: FUN_0031456e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031cbbc;
void FUN_0031456e(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  int *piVar6;
  int local_64 [16];
  undefined *local_24 [4];
  int *local_14;
  int local_c;
  int *local_8;
  
  iVar1 = param_1;
  iVar2 = FUN_003118df(0xa8);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00313a81();
  }
  *(int *)(param_1 + 8) = iVar2;
  if (-1 < (int)((-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e)) {
    iVar2 = FUN_003118df(0x778);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00315ad6(*(undefined4 *)(param_1 + 8));
    }
    *(int *)(param_1 + 0xc) = iVar2;
    if ((-1 < (int)((-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e)) &&
       (iVar2 = FUN_00316530(), -1 < iVar2)) {
      ppuVar5 = local_24;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppuVar5 = (undefined *)0x0;
        ppuVar5 = ppuVar5 + 1;
      }
      piVar6 = local_64;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      local_14 = &local_c;
      local_8 = local_64;
      local_24[0] = (undefined *)0x18;
      local_24[3] = &DAT_0031cbbc;
      local_c = 8;
      iVar2 = FUN_003148cf(0x626f5344,0x40,1);
      *(int *)(param_1 + 0x28) = iVar2;
      if (-1 < (int)((-(uint)(iVar2 != 0) & 0x7ff8fff2) + 0x8007000e)) {
        param_1 = 0;
        puVar4 = (undefined4 *)(iVar1 + 0x18);
        do {
          if (0x1f < param_1) {
            return;
          }
          uVar3 = 0;
          do {
            local_64[uVar3 * 2] = param_1 + uVar3;
            uVar3 = uVar3 + 1;
          } while (uVar3 < 8);
          if (local_64[0xe] == 0x1f) {
            local_c = local_c + -1;
          }
          iVar2 = DSOUND__CDirectSound_CreateSoundBuffer(iVar1,local_24,puVar4,0);
          if ((-1 < iVar2) &&
             (iVar2 = DSOUND__IDirectSoundBuffer_SetBufferData
                                (*puVar4,*(undefined4 *)(iVar1 + 0x28),0x40), -1 < iVar2)) {
            iVar2 = DSOUND__IDirectSoundBuffer_Play(*puVar4,0,0,1);
          }
          param_1 = param_1 + 8;
          puVar4 = puVar4 + 1;
        } while (-1 < iVar2);
      }
    }
  }
  return;
}
