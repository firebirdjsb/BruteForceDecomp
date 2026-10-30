/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CBAC7FD9C2539BA7A030ABD7DC924113A485CF41C3F8DE992296DD543D015EE
 * Entry: 0x002baf20, Ghidra index: 9895, label: FUN_002baf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002baf20(int param_1)

{
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x7c);
  *(ulonglong *)(param_1 + 0xa0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0xa0) + (float)*(undefined8 *)(param_1 + 0x80));
  *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x8c);
  *(ulonglong *)(param_1 + 0xb0) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0xb0) + (float)*(undefined8 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}
