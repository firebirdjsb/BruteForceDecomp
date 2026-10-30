/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3F830CC067836E86A5D1F5400BBBD36F931481E753EC1F39829BBE2B044DD53
 * Entry: 0x0035a590, Ghidra index: 13175, label: FUN_0035a590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b50cc;
extern uint32_t DAT_004b50d0;
/* XBE 0x0035a5c1 CALL EAX after loading [0x004b50dc]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_004b50dc;
extern uint32_t DAT_004b50ec;
extern uint32_t _DAT_004b50e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0035a590(void)

{
  int iVar1;
  
  DAT_004b50ec = (code *)((int)DAT_004b50ec + 1);
  if (DAT_004b50ec == (code *)0x1) {
    if (DAT_004b50d0 != 0) {
      if (DAT_004b50dc == (code *)0x0) {
        DAT_004b50ec = DAT_004b50dc;
        return 0;
      }
      iVar1 = (*DAT_004b50dc)(0,&DAT_004b50cc,0);
      if (iVar1 < 0) {
        DAT_004b50ec = (code *)((int)DAT_004b50ec + -1);
        return 0;
      }
    }
    _DAT_004b50e8 = 0;
  }
  return 1;
}
