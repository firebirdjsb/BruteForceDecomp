/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41CC4E29ED7EE100C250F227FAA9E1B06B5DE145176140C36F589C3ACC8DE827
 * Entry: 0x00078c20, Ghidra index: 1432, label: FUN_00078c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_0001f5a0(uint param_1,uint param_2);

void FUN_00078c20(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  if (in_EDX != (char *)0x0) {
    pcVar2 = in_EDX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
    return;
  }
  FUN_0001f5a0(0,0xffffffff);
  return;
}
