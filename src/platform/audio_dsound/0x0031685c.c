/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA30EE6943B1C1C966487F29B937976B5B0BDFBCEDC3F4EB1F51AFE8A2A31237
 * Entry: 0x0031685c, Ghidra index: 12151, label: CMcpxStream_GetStatus
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxStream_GetStatus(uint *param_1)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x12);
  *param_1 = (uint)(*(int **)(in_ECX + 0xb8) != (int *)(in_ECX + 0xb8));
  if ((uVar1 & 0x2000) != 0) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 8;
  }
  if (((byte)uVar1 & 3) == 3) {
    if ((uVar1 & 0x444) != 0) {
      *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 2;
      if ((uVar1 & 0x400) == 0) {
        return 0;
      }
      *param_1 = *param_1 | 0x40000;
      return 0;
    }
  }
  else if ((uVar1 & 0x8001) != 0x8001) {
    return 0;
  }
  *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) | 1;
  return 0;
}
