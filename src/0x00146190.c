/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5FD78550C8E237779921D67E48660DA93238E88F61B8FD1FDA74D84CC34EA60
 * Entry: 0x00146190, Ghidra index: 4207, label: FUN_00146190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00146190(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  
  if (*(int *)(in_ECX + 0x188) != DAT_0046d064) {
    FUN_0003f010();
    if (in_EAX != (int *)0x0) {
      cVar1 = FUN_00112790();
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*in_EAX + 0x40))();
        uStack_64 = *(undefined4 *)(iVar2 + 0x2c);
        uStack_68 = *(undefined4 *)(iVar2 + 0x28);
        local_6c = *(undefined4 *)(iVar2 + 0x24);
        uStack_60 = 1;
      }
      else {
        iVar2 = (**(code **)(*in_EAX + 0x40))();
        uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
        uStack_58 = *(undefined4 *)(iVar2 + 0x28);
        uStack_5c = *(undefined4 *)(iVar2 + 0x24);
        uStack_50 = 1;
      }
    }
    FUN_0017c020(&local_6c);
  }
  if ((*(int *)(in_ECX + 0x18c) != DAT_0046d064) && (in_EAX != (int *)0x0)) {
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_7c = 0x3f800000;
    local_8c = 0x3f800000;
    uStack_9c = 0x3f800000;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    iVar2 = (**(code **)(*in_EAX + 0x40))();
    uStack_70 = *(undefined4 *)(iVar2 + 0x2c);
    uStack_74 = *(undefined4 *)(iVar2 + 0x28);
    uStack_78 = *(undefined4 *)(iVar2 + 0x24);
    if (*(int *)(in_ECX + 0x18c) != DAT_0046d064) {
      piVar3 = (int *)FUN_000da800();
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(piVar3[0x3a] + 0xc) = 0;
        (**(code **)(*piVar3 + 0x44))(&uStack_9c);
        FUN_0021c380(0x3f800000);
      }
    }
  }
  return;
}
