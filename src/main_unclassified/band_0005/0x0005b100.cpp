/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D11F8975E748023041C5154BD17108DF0981434A532AB31C92BDA4F8807F140
 * Entry: 0x0005b100, Ghidra index: 915, label: FUN_0005b100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005af30(int param_1,float param_2,float param_3,int *param_4);

void FUN_0005b100(undefined4 param_1)

{
  int in_ECX;
  undefined4 *in_EDX;
  
  *in_EDX = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    if ((*(byte *)(in_ECX + 0x10) & 8) != 0) {
      FUN_0005af30(0x38,param_1,*(undefined4 *)(in_ECX + 0xc));
      return;
    }
    FUN_0005af30(0x44,param_1,*(undefined4 *)(in_ECX + 0xc));
  }
  return;
}
