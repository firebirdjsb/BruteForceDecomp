/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E615AE3E5C1D1A39AD13BF373D211C6F5ADA33655ED82AB31F49A9029609E337
 * Entry: 0x002b6ac0, Ghidra index: 9833, label: FUN_002b6ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern undefined4 FUN_002b65a0(float *param_1);
void FUN_002b6ac0(void)

{
  float *in_EAX;
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_14 [5];
  
  local_44 = *in_EAX;
  local_40 = in_EAX[1];
  local_3c = in_EAX[2];
  local_38 = in_EAX[3];
  FUN_002b65a0(&local_44);
  local_30 = local_3c - local_44;
  local_34 = local_40;
  local_2c = -local_40;
  local_28 = 0;
  iVar1 = FUN_002b65a0(&local_34);
  if (iVar1 == 0) {
    local_30 = -local_3c;
    local_2c = local_40 - local_44;
    local_34 = local_3c;
    FUN_002b65a0(&local_34);
  }
  local_14[0] = 0;
  local_14[1] = 1;
  local_14[2] = 2;
  local_14[3] = 0;
  local_14[4] = 1;
  iVar1 = local_14[unaff_EDI];
  *(float *)(unaff_ESI + iVar1 * 4) = local_44;
  *(float *)(unaff_ESI + 0x10 + iVar1 * 4) = local_40;
  *(float *)(unaff_ESI + 0x20 + iVar1 * 4) = local_3c;
  iVar1 = local_14[unaff_EDI + 1];
  *(float *)(unaff_ESI + iVar1 * 4) = local_30 * local_3c - local_2c * local_40;
  *(float *)(unaff_ESI + 0x10 + iVar1 * 4) = local_2c * local_44 - local_34 * local_3c;
  *(float *)(unaff_ESI + 0x20 + iVar1 * 4) = local_34 * local_40 - local_30 * local_44;
  iVar1 = local_14[unaff_EDI + 2];
  *(float *)(unaff_ESI + iVar1 * 4) = local_34;
  *(float *)(unaff_ESI + 0x10 + iVar1 * 4) = local_30;
  *(float *)(unaff_ESI + 0x20 + iVar1 * 4) = local_2c;
  return;
}
