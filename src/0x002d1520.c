/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 407B8C4734A6DF2F79C43E3672A946386F972F0580203C8F28FD083492BFCC24
 * Entry: 0x002d1520, Ghidra index: 10185, label: FUN_002d1520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d1520(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  FUN_002b3c60();
  *(undefined4 *)(in_ECX + 0x38 + param_1 * 4) = param_2;
  *(undefined4 *)(in_ECX + 0x20 + param_1 * 4) = 2;
  *(undefined4 *)(in_ECX + 0x50 + param_1 * 4) = param_3;
  FUN_002ce2c0();
  return;
}
