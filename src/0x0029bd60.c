/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 415835735755FE929B68635696416497774A491F38B54B69448D6CD0089A41D2
 * Entry: 0x0029bd60, Ghidra index: 9432, label: FUN_0029bd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029bd60(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0x3d) {
    uVar1 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FUN_0029ba30();
    return;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}
