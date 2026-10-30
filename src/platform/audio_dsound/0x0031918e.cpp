/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 847A3948006934A46B7B410B82770F909DD83356270751FDBADC3A660344A28F
 * Entry: 0x0031918e, Ghidra index: 12216, label: CMcpxBuffer_GetStatus
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxBuffer_GetStatus(uint *param_1)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x12);
  if (((byte)uVar1 & 3) == 3) {
    *param_1 = ((uVar1 & 0x444) != 0) + 1;
    if ((uVar1 & 0x200) != 0) {
      *param_1 = *param_1 | 4;
    }
  }
  else {
    *param_1 = (uint)((uVar1 & 0x8001) == 0x8001);
  }
  return 0;
}
