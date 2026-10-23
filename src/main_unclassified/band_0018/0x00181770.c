/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54B128D209F9474F769BC9EF2ED1D09ADEA213D0E4F686EE8B765F7D50C46BD1
 * Entry: 0x00181770, Ghidra index: 5162, label: FUN_00181770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038dae8;
bool FUN_00181770(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  char unaff_BL;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_18 [6];
  
  bVar4 = false;
  if (in_EAX != 0) {
    *(byte *)(in_EDX + 0x1c) =
         *(byte *)(in_EDX + 0x1c) ^ (unaff_BL << 1 ^ *(byte *)(in_EDX + 0x1c)) & 2;
    uVar2 = *(uint *)(in_EDX + 0x20) ^
            ((uint)*(ushort *)(in_EAX + 2) ^ *(uint *)(in_EDX + 0x20)) & 0xf;
    puVar3 = local_18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(uint *)(in_EDX + 0x20) = uVar2;
    local_18[0] = 0x18;
    if ((((byte)uVar2 & 0xf) != 1) || (local_18[1] = 0x10, unaff_BL != '\x01')) {
      local_18[1] = 0;
    }
    local_18[2] = 0;
    iVar1 = DSOUND__DirectSoundCreateBuffer(local_18,(undefined4 *)(in_EDX + 0x68));
    bVar4 = -1 < iVar1;
    if ((bVar4) && (unaff_BL != '\0')) {
      iVar1 = DSOUND__IDirectSoundBuffer_SetRolloffCurve
                        (*(undefined4 *)(in_EDX + 0x68),&DAT_0038dae8,5,1);
      bVar4 = -1 < iVar1;
    }
  }
  return bVar4;
}
