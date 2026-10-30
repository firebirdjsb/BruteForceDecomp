/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5216ECE077766D2F19BB758BCC6F032D2A75B71D922FDAA9606337E7948C312
 * Entry: 0x00062490, Ghidra index: 1056, label: FUN_00062490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000624d0(void);
extern uint FUN_00238430(void);

undefined4 FUN_00062490(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == -0x105731ff) {
    FUN_000624d0();
    uVar1 = FUN_00238430();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    return 0;
  }
  return 0x80070005;
}
