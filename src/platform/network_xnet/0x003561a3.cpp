/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D40EDEC1EF8A792E5E38596F254F0A49E49F3CE4EDCED86DD7B678503E9F469A
 * Entry: 0x003561a3, Ghidra index: 13137, label: FUN_003561a3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00355bea(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_003561a3(int param_1,int param_2)

{
  int in_ECX;
  undefined4 uVar1;
  
  if (param_2 == -1) {
    param_2 = *(int *)(in_ECX + 0x268);
    param_1 = *(int *)(in_ECX + 0x268);
    uVar1 = 0x200;
  }
  else {
    *(int *)(in_ECX + 0x294) = param_2;
    if (param_2 == 0) {
      return;
    }
    uVar1 = 0x100;
  }
  FUN_00355bea(uVar1,param_1,param_2,0);
  return;
}
