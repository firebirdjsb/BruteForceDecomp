/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB4314C575E317674066C03311D46DFC7890258D3C11347A800AB9F9C735F414
 * Entry: 0x0033d796, Ghidra index: 12589, label: FUN_0033d796
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; original direct calls checked. Xbox ABI_UNVERIFIED. */
extern void FUN_0033bc7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5);
extern void FUN_0033d619(void);
void FUN_0033d796(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0033bc7e(7,param_3,0,0,1);
  FUN_0033d619();
  return;
}
