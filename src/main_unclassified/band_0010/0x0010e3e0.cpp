/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49FC99A324DD51D17BBE52F488F60C6AA1D7398D43912F0B11A82F0014E96362
 * Entry: 0x0010e3e0, Ghidra index: 3510, label: FUN_0010e3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010e3e0(void)

{
  int *in_EAX;
  
  if (((*(byte *)(in_EAX + 7) & 1) != 0) && (in_EAX[6] != 0)) {
    *(byte *)(in_EAX + 7) = *(byte *)(in_EAX + 7) & 0xfe;
    (**(code **)(*in_EAX + 0x124))();
    (**(code **)(*in_EAX + 300))();
    if (0.0 < *(float *)(in_EAX[6] + 0x490)) {
      FUN_00140a60(*(undefined4 *)(*(int *)(in_EAX[6] + 8) + 0xbe8),in_EAX[6],0x9087c9c,0);
      return 1;
    }
    FUN_00140a60(*(undefined4 *)(*(int *)(in_EAX[6] + 8) + 0xbe8),in_EAX[6],0xee0a5cbc,0);
    return 1;
  }
  return 0;
}
