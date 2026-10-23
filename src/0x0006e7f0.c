/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E79D182E61C97223FAED956A0FD8096ED0280C81D489152B555EC0C2D999FA0
 * Entry: 0x0006e7f0, Ghidra index: 1243, label: FUN_0006e7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f24;
extern uint32_t PTR_DAT_004021a0;
ushort FUN_0006e7f0(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = (ushort)DAT_003f7f24;
  uVar1 = uVar2;
  while( true ) {
    bVar3 = 0xffe < uVar1;
    uVar1 = uVar1 + 1;
    if (bVar3) {
      uVar1 = 1;
    }
    if ((*(uint *)(PTR_DAT_004021a0 + (uint)(uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) == 0)
    break;
    if (uVar1 == uVar2) {
      DAT_003f7f24 = bf_x86_word_replace_lo16(DAT_003f7f24,(uint16_t)uVar1);
      return 0;
    }
  }
  DAT_003f7f24 = bf_x86_word_replace_lo16(DAT_003f7f24,(uint16_t)uVar1);
  if (uVar1 == uVar2) {
    uVar1 = 0;
  }
  return uVar1;
}
