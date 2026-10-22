/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBE4CD865ADB3843B1080F2560DFEFFC57837E26D90A7730A97623C4DBCEC49E
 * Entry: 0x003814f3, Ghidra index: 13565, label: FUN_003814f3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003814f3(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = CONCAT13((char)param_1,
                     CONCAT12((char)((uint)param_1 >> 8),CONCAT11(param_1._2_1_,param_1._3_1_)));
  return local_8;
}
