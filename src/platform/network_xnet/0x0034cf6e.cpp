/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B3AFCD2F9C8663A983F7B1ACEFA7CA15CEFFFCA34344EE9DEE59025A9801677
 * Entry: 0x0034cf6e, Ghidra index: 12993, label: FUN_0034cf6e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00080;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034cf6e(undefined4 param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = PhyGetLinkState(param_2 == 0);
  if (param_2 == 0) {
    if (uVar1 == *(uint *)(in_ECX + 0x214)) {
      return;
    }
    FUN_0034ce64();
  }
  *(uint *)(in_ECX + 0x210) = (-(uint)((uVar1 & 4) != 0) & 900) + 100;
  if ((uVar1 & 8) == 0) {
    _DAT_fef00080 = _DAT_fef00080 | 2;
  }
  else {
    _DAT_fef00080 = _DAT_fef00080 & 0xfffffffd;
  }
  if (param_2 == 0) {
    FUN_0034ce3c();
  }
  else if ((uVar1 & 1) != 0) {
    FUN_00352ebc(0x80000000);
  }
  *(uint *)(in_ECX + 0x214) = uVar1;
  return;
}
