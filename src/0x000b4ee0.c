/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1672B89719FA7931D567844648FF970EBA2C764534B750C38621F5DCD19CEBD7
 * Entry: 0x000b4ee0, Ghidra index: 2183, label: FUN_000b4ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b4ee0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[10] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_ECX[10] + -0x2c;
  }
  *(byte *)(in_ECX + 0x15) =
       *(byte *)(in_ECX + 0x15) ^ (*(byte *)(iVar1 + 0x84) >> 2 ^ *(byte *)(in_ECX + 0x15)) & 1;
  FUN_000b4f20(in_ECX,param_1);
  (**(code **)(*in_ECX + 0x30))(param_1);
  return;
}
