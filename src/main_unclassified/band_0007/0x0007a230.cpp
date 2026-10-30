/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58EE5E848042ADC0D8E2B2CAE2979CE1AC45D4235A7C8204CDDCA24633551A4C
 * Entry: 0x0007a230, Ghidra index: 1454, label: FUN_0007a230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0007a360(void);

extern uint32_t DAT_0046995c;
void FUN_0007a230(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined1 uStack_f;
  
  iVar4 = *(int *)(in_EAX + 0x6e8);
  while (iVar4 != 0) {
    iVar4 = *(int *)(in_EAX + 0x6e8) + *(int *)(in_EAX + 0x6e4) + -1;
    uVar3 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    iVar2 = uVar3 * -8;
    if (*(uint *)(in_EAX + 0x6e0) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(in_EAX + 0x6e0);
    }
    uVar1 = *(undefined2 *)(*(int *)(*(int *)(in_EAX + 0x6dc) + uVar3 * 4) + (iVar4 + iVar2) * 2);
    uStack_f = (undefined1)((ushort)uVar1 >> 8);
    if ((char)uVar1 == '\0') {
      if (*(int *)(in_EAX + 0x6d4) == 1) {
        *(byte *)(in_EAX + 0x5bc) = *(byte *)(in_EAX + 0x5bc) & 0xfd;
        FUN_0007a360(uStack_f);
      }
      iVar4 = *(int *)(in_EAX + 0x6d4) + -1;
    }
    else {
      if ((*(int *)(in_EAX + 0x6d4) == 0) && (*(int *)(DAT_0046995c + 0x1c) == 0)) {
        *(byte *)(in_EAX + 0x5bc) = *(byte *)(in_EAX + 0x5bc) | 2;
        FUN_0007a360(uStack_f);
      }
      iVar4 = *(int *)(in_EAX + 0x6d4) + 1;
    }
    *(int *)(in_EAX + 0x6d4) = iVar4;
    if ((*(int *)(in_EAX + 0x6e8) != 0) &&
       (iVar4 = *(int *)(in_EAX + 0x6e8) + -1, *(int *)(in_EAX + 0x6e8) = iVar4, iVar4 == 0)) {
      *(undefined4 *)(in_EAX + 0x6e4) = 0;
    }
    iVar4 = *(int *)(in_EAX + 0x6e8);
  }
  return;
}
