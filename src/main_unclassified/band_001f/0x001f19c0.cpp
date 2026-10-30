/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE244DAA901DCA7C22611FC1F59F0C6B47FA0EB527A18CCD7BA48125F0A604F9
 * Entry: 0x001f19c0, Ghidra index: 6994, label: FUN_001f19c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d0c8;
void FUN_001f19c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  undefined4 local_10;
  undefined4 local_c;
  
  do {
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x270) * 0x10 + 4 + *(int *)(unaff_ESI + 0x268));
    while ((iVar3 != 2 &&
           (*(int *)(*(int *)(unaff_ESI + 0x270) * 0x10 + 4 + *(int *)(unaff_ESI + 0x268)) != 3))) {
      if (*(int *)(unaff_ESI + 8) != 0) {
        return;
      }
      local_10 = *(undefined4 *)(unaff_ESI + 0x30);
      local_c = *(undefined4 *)(unaff_ESI + 0x28);
      iVar3 = XAPILIB__WaitForMultipleObjects(2,&local_10,0,0xffffffff);
      if (iVar3 == -1) {
LAB_001f1b2e:
        XAPILIB__ExitThread(0);
        return;
      }
      if (iVar3 == 0) {
        XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x30));
        goto LAB_001f1b2e;
      }
      iVar3 = *(int *)(*(int *)(unaff_ESI + 0x270) * 0x10 + 4 + *(int *)(unaff_ESI + 0x268));
    }
    RtlEnterCriticalSection(&DAT_0046d0c8);
    iVar3 = *(int *)(unaff_ESI + 0x268);
    iVar4 = *(int *)(unaff_ESI + 0x270) * 0x10;
    auStack_1c[0] = *(undefined4 *)(iVar4 + 0xc + iVar3);
    uVar1 = *(undefined4 *)(iVar4 + iVar3);
    uVar2 = *(undefined4 *)(iVar4 + 8 + iVar3);
    uStack_20 = CONCAT13(*(int *)(iVar4 + iVar3 + 4) == 3,(undefined3)uStack_20);
    *(undefined4 *)(iVar4 + iVar3 + 4) = 4;
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    iVar3 = XAPILIB__WriteFile(uVar2,uVar1,uStack_20,auStack_1c,0);
    if ((iVar3 == 0) && (iVar3 = XAPILIB__GetLastError(), iVar3 != 0x26)) {
      *(undefined4 *)(unaff_ESI + 8) = 1;
    }
    RtlEnterCriticalSection(&DAT_0046d0c8);
    iVar3 = *(int *)(unaff_ESI + 0x270) * 0x10 + *(int *)(unaff_ESI + 0x268);
    if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
      XAPILIB__CloseHandle(*(undefined4 *)(iVar3 + 8));
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(uint *)(unaff_ESI + 0x270) =
         *(int *)(unaff_ESI + 0x274) - 1U & *(int *)(unaff_ESI + 0x270) + 1U;
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x2c));
  } while( true );
}
