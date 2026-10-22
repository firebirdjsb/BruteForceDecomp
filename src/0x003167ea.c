/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE7EA41844DF41F46001D99C685A517FA23395962AABF00BB37EACEED964D828
 * Entry: 0x003167ea, Ghidra index: 12150, label: CMcpxStream_Stop
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxStream_Stop(byte param_1)

{
  int *in_ECX;
  
  FUN_003118f0();
  if ((*(byte *)((int)in_ECX + 0x12) & 3) == 3) {
    if ((param_1 & 6) == 0) {
      FUN_00318851(0);
    }
    else {
      if ((param_1 & 4) == 0) {
        *(ushort *)((int)in_ECX + 0x12) = *(ushort *)((int)in_ECX + 0x12) & 0xefff;
      }
      else {
        *(ushort *)((int)in_ECX + 0x12) = *(ushort *)((int)in_ECX + 0x12) | 0x1000;
      }
      FUN_00317da9();
    }
    if ((param_1 & 4) == 0) {
      (**(code **)(*in_ECX + 0x18))(3,0,0,0);
    }
  }
  FUN_00311923();
  return 0;
}
