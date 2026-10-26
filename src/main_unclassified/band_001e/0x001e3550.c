/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B0543D80F9955768A2DF1D5A2231B3CCB5B2FE0061B247148A2E2F01868F347
 * Entry: 0x001e3550, Ghidra index: 6768, label: FUN_001e3550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e3550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_stack_00000014;
  uint in_stack_00000028;
  
  FUN_0001f4f0(param_1,0,0xffffffff);
  /* 0x001E356D: LEA EAX,[ESP+0x3C] after the verified RET 0x0C
   * from FUN_0001f4f0 and current pushes: entry ESP+0x10,
   * the fourth incoming 32-bit argument. Xbox ABI still unverified. */
  FUN_0001f4f0(&param_4,0,0xffffffff);
  FUN_001e3260(param_1);
  if (0xf < in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_00000014);
  }
  return;
}
