/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A5E2E6F5242BCB055C841A58E7C5B158D3B8AB2AA479916752886E1D4EDA9E9
 * Entry: 0x001f1850, Ghidra index: 6993, label: FUN_001f1850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d0c8;
void FUN_001f1850(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = *(int *)(unaff_ESI + 8);
  do {
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x254) * 0x10 + 4 + *(int *)(unaff_ESI + 0x250));
    while (iVar3 != 1) {
      if (*(int *)(unaff_ESI + 8) != 0) {
        return;
      }
      local_10 = *(undefined4 *)(unaff_ESI + 0x30);
      local_c = *(undefined4 *)(unaff_ESI + 0x20);
      iVar3 = XAPILIB__WaitForMultipleObjects(2,&local_10,0,0xffffffff);
      if (iVar3 == -1) {
LAB_001f19ae:
        XAPILIB__ExitThread(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (iVar3 == 0) {
        XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x30));
        goto LAB_001f19ae;
      }
      iVar3 = *(int *)(*(int *)(unaff_ESI + 0x254) * 0x10 + 4 + *(int *)(unaff_ESI + 0x250));
    }
    RtlEnterCriticalSection(&DAT_0046d0c8);
    uVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 0x254) * 0x10 + *(int *)(unaff_ESI + 0x250));
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    iVar3 = XAPILIB__ReadFile(*(undefined4 *)(unaff_ESI + 0x240),uVar1,
                              *(undefined4 *)(unaff_ESI + 0x260),&stack0xffffffe4,0);
    if ((iVar3 == 0) && (iVar3 = XAPILIB__GetLastError(), iVar3 != 0x26)) {
      *(undefined4 *)(unaff_ESI + 8) = 2;
      XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x30));
    }
    RtlEnterCriticalSection(&DAT_0046d0c8);
    iVar3 = *(int *)(unaff_ESI + 0x254) * 0x10 + *(int *)(unaff_ESI + 0x250);
    *(undefined4 *)(iVar3 + 4) = 2;
    *(undefined4 *)(iVar3 + 0xc) = unaff_EDI;
    *(uint *)(unaff_ESI + 0x254) =
         *(int *)(unaff_ESI + 0x25c) - 1U & *(int *)(unaff_ESI + 0x254) + 1U;
    RtlLeaveCriticalSection(&DAT_0046d0c8);
    XAPILIB__SetEvent(*(undefined4 *)(unaff_ESI + 0x18));
    iVar3 = *(int *)(unaff_ESI + 8);
  } while( true );
}
