/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB4D1F38AB6E127E4DB657CC6EF6F881AA54B63D834C65C014BE4257FC6CC949
 * Entry: 0x001b6310, Ghidra index: 5689, label: FUN_001b6310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001b6310(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001e0710(param_3);
    FUN_000870c0(uVar1,*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
