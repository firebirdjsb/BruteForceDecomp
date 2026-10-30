/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FBFD5523AEA02B76A04AE6D3B6071D69C7D3BE7F327588EBBC99985B4FD89D3
 * Entry: 0x0020d970, Ghidra index: 7386, label: FUN_0020d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x001FC7F0 uses guest EBX/EDI register objects.
 * Host declaration matches zero-explicit-arg draft; Xbox ABI_UNVERIFIED. */
extern void FUN_001fc7f0(void);
int * FUN_0020d970(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x40;
    param_4 = param_4 + -0x40;
    if (param_4 != param_3) {
      FUN_001fc7f0();
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
