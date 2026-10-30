/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7660C237BEC673C3388042CFB9D57740A57BB57D91FDD4EBD3F5D57DC8021D9C
 * Entry: 0x0014a610, Ghidra index: 4292, label: FUN_0014a610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0014a610(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  
  *(char *)(unaff_ESI + 0x6e) = (char)in_EAX;
  iVar1 = *(int *)(unaff_ESI[3] + 0x19c + in_EAX * 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != DAT_0046d064) {
      FUN_0003f010();
      iVar3 = (**(code **)(*unaff_ESI + 0x40))();
      uStack_8c = *(undefined4 *)(iVar3 + 0x28);
      uStack_90 = *(undefined4 *)(iVar3 + 0x2c);
      local_6c = *(undefined4 *)(iVar3 + 0x24);
      uStack_60 = 1;
      uStack_68 = uStack_8c;
      uStack_64 = uStack_90;
      FUN_0017c020(&local_6c);
    }
    iVar3 = *(int *)(iVar1 + 4);
    if ((-1 < iVar3) && (iVar2 = *(int *)(unaff_ESI[3] + 0xcc), iVar2 != 0)) {
      if (*(int *)(iVar2 + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2;
      }
      if ((iVar3 < iVar4) && (*(int *)(*(int *)(iVar2 + 8) + iVar3 * 4) != 0)) {
        FUN_0014a760();
        FUN_000cdcb0(&uStack_91);
      }
    }
    if (*(int *)(iVar1 + 0x10) != DAT_0046d064) {
      FUN_000defa0((*(int *)(iVar1 + 0x14) != DAT_0046d064) + '\x01',0,unaff_ESI,
                   (int *)(iVar1 + 0x14),0x3f800000);
    }
  }
  return;
}
