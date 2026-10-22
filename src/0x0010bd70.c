/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4190CEB4E42A63E9D2176BC6334AC47874F174742F5909771727DA4D8DCE8C9
 * Entry: 0x0010bd70, Ghidra index: 3454, label: FUN_0010bd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010bd70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    puStack00000004 = in_EAX + 4;
    FUN_001e0dd0();
    return;
  }
  return;
}
