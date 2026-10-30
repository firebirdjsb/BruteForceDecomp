/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 950D31CA4AEE72D6318D2AAD249A8BA44DC7C2DC9A7266BDE8F2696C33C2765A
 * Entry: 0x0025c100, Ghidra index: 8553, label: FUN_0025c100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
undefined4 FUN_0025c100(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  RtlEnterCriticalSection(&DAT_0046b2c8);
  piVar1 = *(int **)(unaff_EDI + 0x18);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    FUN_0025dde0();
  }
  FUN_0025d7d0(*(undefined4 *)(*(int *)(unaff_EDI + 0x18) + 4));
  *(int *)(*(int *)(unaff_EDI + 0x18) + 4) = *(int *)(unaff_EDI + 0x18);
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  *(undefined4 *)*(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_EDI + 0x18);
  *(int *)(*(int *)(unaff_EDI + 0x18) + 8) = *(int *)(unaff_EDI + 0x18);
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return 0x80004005;
}
