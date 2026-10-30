/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04770FBF12A2FFD43BD583F1C7D54342FFB93B6A9C197C05C70F27BAF4F3D620
 * Entry: 0x000cb470, Ghidra index: 2515, label: FUN_000cb470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ba4;
void FUN_000cb470(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  undefined1 local_100 [256];
  
  iVar4 = *(int *)(in_EAX + 0x60);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x10);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x70) & 1) != 0)) {
      if (*(uint *)(iVar4 + 0x54) < 8) {
        iVar4 = iVar4 + 0x40;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x40);
      }
      iVar2 = *(int *)(iVar1 + 0xe4);
      iVar5 = 0;
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 0xdc) != 0) {
          iVar5 = FUN_001e97c0();
        }
      }
      else if (*(uint *)(iVar2 + 0x54) < 8) {
        iVar5 = iVar2 + 0x40;
      }
      else {
        iVar5 = *(int *)(iVar2 + 0x40);
      }
      if ((iVar4 != 0) && (iVar5 != 0)) {
        *(byte *)(unaff_ESI + 0x13) = *(byte *)(unaff_ESI + 0x13) & 0xfe;
        *(byte *)(unaff_ESI + 0x75) = *(byte *)(unaff_ESI + 0x75) | 1;
        FUN_000ca000(unaff_ESI,&DAT_004a5ba4,0);
        uVar3 = FUN_001e97c0(iVar5,iVar4);
        FUN_002ea9a9(local_100,0x80,uVar3);
        FUN_000ca210();
        return;
      }
      *(byte *)(unaff_ESI + 0x13) = *(byte *)(unaff_ESI + 0x13) | 1;
      *(byte *)(unaff_ESI + 0x75) = *(byte *)(unaff_ESI + 0x75) & 0xfe;
      return;
    }
    if ((*(byte *)(unaff_ESI + 0x75) & 1) != 0) {
      *(byte *)(unaff_ESI + 0x13) = *(byte *)(unaff_ESI + 0x13) | 1;
      *(byte *)(unaff_ESI + 0x75) = *(byte *)(unaff_ESI + 0x75) & 0xfe;
    }
  }
  return;
}
