/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECDC9E397AEB199EA50A7E15CA2EF7C3E2340719BC3AE3B3D550C6281E7ADF77
 * Entry: 0x001f1590, Ghidra index: 6990, label: FUN_001f1590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d0c8;
undefined4 FUN_001f1590(void)

{
  int *piVar1;
  int iVar2;
  char *in_EAX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_204;
  undefined1 local_200 [512];
  
  iVar6 = *(int *)(in_EAX + 0x248);
  piVar1 = (int *)(in_EAX + 0x248);
  while (iVar6 != 0) {
    if (*in_EAX != '\0') goto LAB_001f171f;
    iVar6 = *(int *)(*(int *)(in_EAX + 0x26c) * 0x10 + 4 + *(int *)(in_EAX + 0x268));
    while (iVar6 != 0) {
      XAPILIB__WaitForSingleObject(*(undefined4 *)(in_EAX + 0x2c),0xffffffff);
      iVar6 = *(int *)(*(int *)(in_EAX + 0x26c) * 0x10 + 4 + *(int *)(in_EAX + 0x268));
    }
    local_204 = *(int *)(in_EAX + 0x278);
    piVar3 = &local_204;
    if (*piVar1 <= *(int *)(in_EAX + 0x278)) {
      piVar3 = piVar1;
    }
    iVar6 = *piVar3;
    RtlEnterCriticalSection(&DAT_0046d0c8);
    *(undefined4 *)(*(int *)(in_EAX + 0x26c) * 0x10 + 4 + *(int *)(in_EAX + 0x268)) = 1;
    iVar2 = *(int *)(*(int *)(in_EAX + 0x26c) * 0x10 + *(int *)(in_EAX + 0x268));
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    iVar4 = FUN_001f1b90(iVar2,0);
    if (iVar4 < 0) {
      in_EAX[8] = '\x02';
      in_EAX[9] = '\0';
      in_EAX[10] = '\0';
      in_EAX[0xb] = '\0';
      return 0x80004005;
    }
    iVar4 = *(int *)(in_EAX + 0x278);
    puVar7 = (undefined4 *)(iVar2 + iVar6);
    for (uVar5 = (uint)(iVar4 - iVar6) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = iVar4 - iVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    RtlEnterCriticalSection(&DAT_0046d0c8);
    iVar4 = *(int *)(in_EAX + 0x26c) * 0x10 + *(int *)(in_EAX + 0x268);
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(in_EAX + 0x244);
    iVar2 = *piVar1;
    *(int *)(iVar4 + 0xc) = iVar6;
    *(uint *)(iVar4 + 4) = (iVar2 == iVar6) + 2;
    *(uint *)(in_EAX + 0x26c) = *(int *)(in_EAX + 0x274) - 1U & *(int *)(in_EAX + 0x26c) + 1U;
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    XAPILIB__SetEvent(*(undefined4 *)(in_EAX + 0x28));
    iVar6 = *piVar1 - iVar6;
    *piVar1 = iVar6;
  }
  if (*in_EAX == '\0') {
    FUN_001f1b90(local_200,0);
  }
LAB_001f171f:
  FUN_001f1770();
  *(uint *)(in_EAX + 4) = (-(uint)(in_EAX[0x27c] != '\0' || *in_EAX != '\0') & 2) + 4;
  return 0;
}
