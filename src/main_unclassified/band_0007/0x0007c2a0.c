/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EB495142A21495156A9E6FFE8543424C9E9865000C3443A4E0DC6B602F281C6
 * Entry: 0x0007c2a0, Ghidra index: 1476, label: FUN_0007c2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dc80;
int FUN_0007c2a0(void)

{
  uint uVar1;
  uint local_8;
  uint local_4;
  
  FUN_002f418b(&DAT_0040dc80,0,0,&local_8);
  uVar1 = local_8 >> 0xe | local_4 << 0x12;
  if (((local_4 >> 0xe == 0) && (uVar1 < 0xc352)) && (uVar1 < 10)) {
    return 0x28 - uVar1;
  }
  return 0;
}
