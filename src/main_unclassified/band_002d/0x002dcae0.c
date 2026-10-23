/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF8B3C9BEE6230579FC38B3C5BBDC3E7262CF0D002C6D165C46F283F26348C04
 * Entry: 0x002dcae0, Ghidra index: 10306, label: FUN_002dcae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f24;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002dcae0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_48;
  int local_44;
  
  iVar2 = *(int *)(in_EAX + 8) * *(int *)(in_EAX + 4) + -1;
  while (-1 < iVar2) {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(*(int *)(in_EAX + 0xc) + 4 + iVar2 * 4) = 0;
  }
  local_44 = 0;
  local_48 = 0;
  iVar2 = 0;
  if (*(short *)(in_EAX + 0x26) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_EAX + 0x28) + local_48 * 4);
      fVar4 = (float10)FUN_002c2750();
      fVar5 = (float10)DAT_00469f24 - (float10)*(float *)(iVar2 + 0x5c);
      fVar6 = (float10)1.0;
      if (fVar5 < (float10)0.0) {
        fVar6 = (float10)20.0;
      }
      *(float *)(*(int *)(in_EAX + 0x10) + local_48 * 4) = (float)(fVar6 * fVar5 + fVar4);
      if (*(int *)(iVar2 + 0x58) != 0) {
        *param_2 = local_48;
        param_2 = param_2 + 1;
        local_44 = local_44 + 1;
      }
      if (*(int *)(iVar2 + 0x68) != 0) {
        FUN_002dc190(0xbf800000);
        FUN_002dca20(local_48,*(undefined4 *)(iVar2 + 0x68),*(undefined4 *)(iVar2 + 0x50));
      }
      if (*(int *)(iVar2 + 0x6c) != 0) {
        FUN_002dc190(0x3f800000);
        FUN_002dca20(local_48,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x54));
      }
      local_48 = local_48 + 1;
      iVar2 = local_44;
    } while (local_48 < (int)(uint)*(ushort *)(in_EAX + 0x26));
  }
  iVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((-1 < *(short *)(puVar1[0x10] + 0x48)) && (*(short *)(puVar1[0x10] + 0x48) != iVar3)) {
      _DAT_00000000 = 0;
    }
    iVar3 = iVar3 + 1;
  }
  return iVar2;
}
