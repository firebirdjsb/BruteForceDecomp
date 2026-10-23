/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 548E711FA290F56BB34BFC675D3B71DAC4814FDD998EC8ADEE2294B3DA4CFEF2
 * Entry: 0x000efb40, Ghidra index: 2985, label: FUN_000efb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_000efb40(void)

{
  byte *apbStack_1c [2];
  byte abStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  apbStack_1c[0] = (byte *)0xefb53;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 300))();
  abStack_14[0] = abStack_14[0] & 0xe0 | 1;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_10 = 0xf745f94a;
  apbStack_1c[0] = abStack_14;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))();
  apbStack_1c[0] = (byte *)0xf228042f;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x8c))(apbStack_1c);
  return 1;
}
