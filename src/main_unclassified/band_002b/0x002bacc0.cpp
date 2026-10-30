/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9934F2B9E99628E25C53CF91DA564D0F04A32AA05B405ED800A26B7B9DF4F785
 * Entry: 0x002bacc0, Ghidra index: 9891, label: FUN_002bacc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bacc0(int param_1)

{
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_10;
  undefined8 local_c;
  
  FUN_002bae30(param_1);
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + local_10;
  *(ulonglong *)(param_1 + 0xa0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) +
                (float)((ulonglong)local_c >> 0x20),
                (float)*(undefined8 *)(param_1 + 0xa0) + (float)local_c);
  *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) + local_20;
  *(ulonglong *)(param_1 + 0xb0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) +
                (float)((ulonglong)local_1c >> 0x20),
                (float)*(undefined8 *)(param_1 + 0xb0) + (float)local_1c);
  return;
}
