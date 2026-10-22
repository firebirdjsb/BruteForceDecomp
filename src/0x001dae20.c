/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31FAC4A716513B1D2F44CB7F03CCF690AF62CAB8FE634CF5ACE7207D3CB1701B
 * Entry: 0x001dae20, Ghidra index: 6510, label: FUN_001dae20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dae20(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      param_1[5] = in_ECX[5];
      param_1[6] = in_ECX[6];
      param_1[7] = in_ECX[7];
      param_1[8] = in_ECX[8];
      param_1[9] = in_ECX[9];
      param_1[10] = in_ECX[10];
    }
    param_1 = param_1 + 0xb;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
