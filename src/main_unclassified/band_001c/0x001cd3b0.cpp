/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E68CBE0C05AB69FEAC86427617BA8C6F49740A339B7F11122DBB1D0F910471D5
 * Entry: 0x001cd3b0, Ghidra index: 5971, label: FUN_001cd3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd3b0(int *param_1)

{
  int *unaff_EBX;
  
  if (*param_1 == 0) {
    FUN_00051760();
  }
  else if (*unaff_EBX == 0) {
    FUN_001b4ef0(unaff_EBX);
    FUN_00051800();
  }
  if (*param_1 != 0) {
    FUN_001cd650();
    FUN_001cd360();
  }
  return;
}
