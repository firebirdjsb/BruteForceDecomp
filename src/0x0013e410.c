/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F62538782DA28D90CAAC04FB13E800B6BAE8C6E8CDC2876F78AFC539C1606622
 * Entry: 0x0013e410, Ghidra index: 4026, label: FUN_0013e410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_0013e410(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(char *)((int)unaff_ESI + 0x36) != '\0') {
    (**(code **)(*unaff_ESI + 0x134))();
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_4 = 0x3f800000;
    uStack_14 = 0x3f800000;
    uStack_24 = 0x3f800000;
    FUN_0013e800(&uStack_24,unaff_ESI[9]);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    FUN_0001fa20(&uStack_24,((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 6.2831855);
    if (param_1 == 0) {
      param_1 = unaff_ESI[6];
    }
    iVar3 = 0;
    if ((char)unaff_ESI[0xd] != '\0') {
      do {
        uVar1 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        puVar4 = &uStack_24;
        DAT_0046cfd8 = uVar1;
        iVar5 = param_1;
        uVar2 = FUN_0013e740(puVar4,param_1);
        FUN_0013e600(unaff_ESI,uVar1 % (uint)*(byte *)((int)unaff_ESI + 0x36),uVar2,puVar4,iVar5);
        if ((*(byte *)((int)unaff_ESI + 0x35) & 1) != 0) {
          uStack_8 = 0;
          uStack_c = 0;
          uStack_10 = 0;
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_20 = 0;
          uStack_4 = 0x3f800000;
          uStack_14 = 0x3f800000;
          uStack_24 = 0x3f800000;
          FUN_0013e800(&uStack_24,unaff_ESI[9]);
          DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
          FUN_0001fa20(&uStack_24,((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 6.2831855);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(unaff_ESI + 0xd));
    }
  }
  return;
}
