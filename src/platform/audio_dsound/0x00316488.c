/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5B8A99C37769868AAACA4622492FBE2C80F195BD25945349399E89AB4F41265
 * Entry: 0x00316488, Ghidra index: 12139, label: FUN_00316488
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe801000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00316488(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = _DAT_fe801000;
  uVar2 = _DAT_fe801000 & 1;
  if (uVar2 != 0) {
    *(uint *)(in_ECX + 0x6f0) = *(uint *)(in_ECX + 0x6f0) | _DAT_fe801000;
    if ((uVar1 & 0x10) != 0) {
      FUN_0031636b();
    }
    if ((uVar1 & 8) != 0) {
      FUN_00315e0a();
    }
    if ((uVar1 & 0x40) != 0) {
      KeInsertQueueDpc(in_ECX + 0x700,0,0);
    }
  }
  return uVar2;
}
