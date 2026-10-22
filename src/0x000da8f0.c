/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99EE8979A3FB5E6BDD853F5D399B8FD39102B4FD1BF68602287E9C5E5BD9010D
 * Entry: 0x000da8f0, Ghidra index: 2695, label: FUN_000da8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_follow_cam__X_0040d5e0[];
int FUN_000da8f0(void)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [64];
  
  piVar5 = (int *)(-(uint)((*(byte *)(in_EAX + 0x26) & 0x40) != 0) & in_EAX);
  if (piVar5 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar5 + 0x124))();
    if (cVar1 != '\0') {
      iVar2 = FUN_00073510();
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(in_EAX + 0xc) + 4);
        iVar6 = 0;
        iVar3 = FUN_00160da0(0xffffffff,1);
        if (iVar3 != 0) {
          iVar6 = FUN_000da840(iVar3);
        }
        if (iVar6 != 0) {
          FUN_0006ff00();
          FUN_002eaa86(auStack_40,s_follow_cam__X_0040d5e0,*(undefined4 *)(in_EAX + 4));
          uVar4 = FUN_002383b0();
          *(undefined4 *)(iVar6 + 4) = uVar4;
          if (((iVar2 != 3) - 1 & in_EAX) != 0) {
            FUN_000ba040(iVar6);
          }
        }
        return iVar6;
      }
    }
  }
  return 0;
}
