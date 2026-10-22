/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BC6EE1749033B044223D565899C85344B4A70A156A5886A646A023C88E2C69D
 * Entry: 0x001551e0, Ghidra index: 4457, label: FUN_001551e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001551e0(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = *in_ECX;
  *(undefined1 *)(in_EAX + 3) = *(undefined1 *)(in_ECX + 1);
  in_EAX[4] = in_ECX[2];
  in_EAX[5] = in_ECX[3];
  return;
}
