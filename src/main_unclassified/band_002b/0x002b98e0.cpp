/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E5679F4210359ABE502A45749104B180930450DF356C152CF8CAC2B71FDACFBF
 * Entry: 0x002b98e0, Ghidra index: 9872, label: FUN_002b98e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_002d1b60(void);
void FUN_002b98e0(undefined4 param_1)

{
  uint uVar1;
  int *in_EAX;
  
  if (*in_EAX <= (in_EAX[1] << 1) >> 1) {
    FUN_002d1b60();
  }
  *(undefined4 *)(in_EAX[2] + ((in_EAX[1] << 1) >> 1) * 4) = param_1;
  uVar1 = in_EAX[1];
  in_EAX[1] = (((int)(uVar1 * 2) >> 1) + 1U ^ uVar1) & 0x7fffffff ^ uVar1;
  return;
}
