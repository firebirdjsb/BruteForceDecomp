/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBE4CD865ADB3843B1080F2560DFEFFC57837E26D90A7730A97623C4DBCEC49E
 * Entry: 0x0033f342, Ghidra index: 12643, label: FUN_0033f342
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
undefined4 FUN_0033f342(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = bf_x86_word_reverse_byte_order(param_1);
  return local_8;
}
