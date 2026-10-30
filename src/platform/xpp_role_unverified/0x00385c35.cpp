/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13715B313490A19446C910B5BC537CB40BFDE396FFD6D69699D06287ED6F7DB3
 * Entry: 0x00385c35, Ghidra index: 13680, label: FUN_00385c35
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_00385c35(void)

{
  char cVar1;
  int iVar2;
  uint *in_EDX;
  int iVar3;
  uint local_30;
  int local_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  code *local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_8 = in_EDX[8];
  in_EDX[2] = 0;
  local_30 = *in_EDX >> 0x1c;
  local_2c = (*in_EDX >> 0x18 & 7) + 1;
  local_14 = in_EDX[10];
  local_c = in_EDX + 4;
  local_28 = *local_c;
  uStack_24 = in_EDX[5];
  uStack_20 = in_EDX[6];
  local_18 = (code *)in_EDX[9];
  uStack_1c = in_EDX[7];
  iVar3 = (int)in_EDX - DAT_004a8fc0;
  *(int *)((uint)*(byte *)((int)in_EDX + 0x2d) * 0x40 + 8 + *(int *)(local_8 + 0x2c)) = iVar3;
  local_10 = iVar3;
  if ((*(byte *)(local_8 + 0x10) & 1) == 0) {
    MmLockUnlockPhysicalPage(in_EDX[1],1);
    if (((in_EDX[1] ^ in_EDX[3]) & 0xfffff000) != 0) {
      MmLockUnlockPhysicalPage(in_EDX[3],1);
    }
    cVar1 = *(char *)(local_8 + 0x25);
    *(char *)(local_8 + 0x25) = cVar1 + -1;
    if (cVar1 != *(char *)(local_8 + 0x24)) goto LAB_00385d16;
  }
  else {
    iVar2 = FUN_00384f75();
    iVar3 = iVar2 + 1;
    if (-1 < *(int *)(local_8 + 0x28) - (iVar2 + 1)) {
      iVar3 = *(int *)(local_8 + 0x28);
    }
    *(short *)in_EDX = (short)iVar3;
    *(uint *)(local_8 + 0x28) = (*(byte *)((int)in_EDX + 3) & 7) + 1 + iVar3;
    *local_c = in_EDX[0xc];
    local_c[1] = in_EDX[0xd];
    local_c[2] = in_EDX[0xe];
    local_c[3] = in_EDX[0xf];
    *(char *)(local_8 + 0x26) =
         (char)((ulonglong)(*(byte *)(local_8 + 0x26) + 1) %
               (ulonglong)(longlong)(int)(uint)*(byte *)(local_8 + 0x24));
    iVar3 = local_10;
  }
  *(int *)(local_8 + 4) = iVar3;
LAB_00385d16:
  (*local_18)(&local_30,local_14);
  return;
}
