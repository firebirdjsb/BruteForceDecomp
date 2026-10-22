/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04FB1DCE44A9699D8F53DAAF73E9A3D82F57BE6DA3CB34B713DC4FFFD4D97C4C
 * Entry: 0x00264a50, Ghidra index: 8710, label: FUN_00264a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b22c;
int FUN_00264a50(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int iStack_10;
  
  RtlEnterCriticalSection(&DAT_0046b22c);
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    piVar1 = (int *)(unaff_ESI + 0x14);
    while( true ) {
      iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x48) + 0x10))
                        (*(int **)(unaff_ESI + 0x48),piVar1,&stack0xffffffec);
      if (iVar2 < 0) {
        RtlLeaveCriticalSection(&DAT_0046b22c);
        return iVar2;
      }
      if (iStack_10 == 0) break;
      if (iStack_10 == -1) goto LAB_00264b15;
      FUN_00264b30(unaff_ESI);
      *piVar1 = *piVar1 + iStack_10;
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) - iStack_10;
      (**(code **)(**(int **)(unaff_ESI + 0x48) + 0x14))
                (*(int **)(unaff_ESI + 0x48),&stack0xffffffec);
      if (*(int *)(unaff_ESI + 0x18) == 0) {
        RtlLeaveCriticalSection(&DAT_0046b22c);
        return 0;
      }
    }
    *(undefined1 *)(unaff_ESI + 5) = 0;
    if (*(code **)(unaff_ESI + 0x40) != (code *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x20) = 0;
      (**(code **)(unaff_ESI + 0x40))
                (0,*(undefined4 *)(unaff_ESI + 0x38),*(undefined4 *)(unaff_ESI + 0x44));
    }
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
LAB_00264b15:
  RtlLeaveCriticalSection(&DAT_0046b22c);
  return 0;
}
