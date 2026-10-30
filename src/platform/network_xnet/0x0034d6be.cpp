/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFA9EE45890B75322B99CFE14DB8DA11344F326BB53CF49E3B2DD8FDCDC925E1
 * Entry: 0x0034d6be, Ghidra index: 13006, label: FUN_0034d6be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00000;
extern uint32_t _DAT_fef00004;
extern uint32_t _DAT_fef00144;
extern uint32_t _DAT_fef00180;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d6be(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  while( true ) {
    uVar2 = _DAT_fef00180;
    uVar1 = _DAT_fef00000;
    if (_DAT_fef00000 == 0) break;
    if ((_DAT_fef00000 & 0x40) != 0) {
      FUN_0034cf6e(_DAT_fef00180,0);
    }
    _DAT_fef00000 = uVar1;
    _DAT_fef00180 = uVar2;
    FUN_0034d090();
    FUN_0034d1e4();
    if ((uVar1 & 4) != 0) {
      _DAT_fef00144 = 2;
    }
  }
  _DAT_fef00004 = 0x5f;
  return;
}
