/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8387DCA60CEF03DF679000CE77BB7DA4C88D70210D07917533061765ED3DFB7C
 * Entry: 0x001e34b0, Ghidra index: 6767, label: FUN_001e34b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e34b0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  
  while (param_2 < in_EAX) {
    in_EAX = (in_EAX + -1) / 2;
    puVar1 = param_4;
    if (in_stack_00000024 < 0x10) {
      puVar1 = param_4;
    }
    iVar2 = FUN_000e0b20(0,puVar1,in_stack_00000020);
    if (-1 < iVar2) break;
    FUN_0001f4f0(in_EAX * 0x1c + param_1,0,0xffffffff);
  }
  FUN_0001f4f0(&param_3,0,0xffffffff);
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_4);
  }
  return;
}
