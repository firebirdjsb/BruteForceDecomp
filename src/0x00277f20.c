/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 944D38CABD96421CCB223A4D841D9D618488EE738EF417074E8389AB912B7DD9
 * Entry: 0x00277f20, Ghidra index: 8915, label: FUN_00277f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00277f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_EAX;
  
  *in_EAX = param_1;
  in_EAX[1] = param_2;
  in_EAX[2] = param_3;
  in_EAX[3] = param_4;
  in_EAX[4] = 0xffffffff;
  return;
}
