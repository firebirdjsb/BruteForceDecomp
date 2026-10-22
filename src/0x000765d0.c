/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B6F7BC98495E349E7EAF61EA68E48B8015A8A1A3380C77BAB8F7AD890174BBC
 * Entry: 0x000765d0, Ghidra index: 1377, label: FUN_000765d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000765d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = param_1[3];
  in_ECX[3] = iVar1;
  *in_ECX = *param_1;
  in_ECX[2] = param_1[2];
  if (iVar1 == 4) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    in_ECX[1] = iVar1;
    in_ECX[2] = 0;
    if (in_ECX[3] == 4) {
      if ((in_ECX[1] != 0) && (param_1[1] != 0)) {
        FUN_00077000();
      }
      in_ECX[2] = 0;
      return;
    }
  }
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}
