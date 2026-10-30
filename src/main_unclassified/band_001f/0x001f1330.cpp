/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9526D830D30DC4DF236991FE20A51230D525268D38935398EE04B9B461FC1D1C
 * Entry: 0x001f1330, Ghidra index: 6988, label: FUN_001f1330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d0c8;
undefined4 FUN_001f1330(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x2a0) = 0;
  *(undefined4 *)(unaff_ESI + 0x2a4) = 0;
  *(undefined4 *)(unaff_ESI + 0x2a8) = 0;
  *(undefined4 *)(unaff_ESI + 0x280) = 0;
  *(undefined4 *)(unaff_ESI + 0x28c) = 0;
  *(undefined4 *)(unaff_ESI + 0x290) = 0;
  *(undefined4 *)(unaff_ESI + 0x284) = 0;
  *(undefined1 *)(unaff_ESI + 0x27c) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c0) = 0;
  RtlEnterCriticalSection(&DAT_0046d0c8);
  *(undefined4 *)(unaff_ESI + 0x280) =
       *(undefined4 *)(*(int *)(unaff_ESI + 600) * 0x10 + *(int *)(unaff_ESI + 0x250));
  RtlLeaveCriticalSection(&DAT_0046d0c8);
  iVar1 = FUN_00252770(0x38);
  if (iVar1 != 0) {
    FUN_001f17f0();
    return 0x80004005;
  }
  iVar1 = *(int *)(*(int *)(unaff_ESI + 600) * 0x10 + 0xc + *(int *)(unaff_ESI + 0x250));
  *(int *)(unaff_ESI + 0x284) = iVar1;
  *(int *)(unaff_ESI + 0x23c) = *(int *)(unaff_ESI + 0x23c) - iVar1;
  FUN_001f1c90();
  if (*(int *)(unaff_ESI + 0x2c0) != 0) {
    *(undefined4 *)(unaff_ESI + 8) = 7;
    return 0x80004005;
  }
  *(undefined4 *)(unaff_ESI + 4) = 4;
  return 0;
}
