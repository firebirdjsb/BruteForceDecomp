/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE43BDC755E2E90BCEC77E0B42CD6BC59AE5C16FA93F30C4941A0C0785C1CBD7
 * Entry: 0x002b3500, Ghidra index: 9764, label: FUN_002b3500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* The callee loads an IEEE-754 binary64 value from two incoming guest
 * stack DWORDs. Reassemble the bits, not a numeric integer-to-double cast.
 * Incoming EBX/EDI are additional, still-unverified guest ABI inputs. */
static double bf_2b3500_double_from_words(uint32_t low, uint32_t high)
{
  uint64_t bits = (uint64_t)low | ((uint64_t)high << 32);
  double value;
  _Static_assert(sizeof value == sizeof bits, "guest binary64 storage");
  memcpy(&value, &bits, sizeof value);
  return value;
}
void FUN_002b3500(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EDI;
  undefined1 local_14 [20];
  
  iVar1 = *(int *)(unaff_EDI + 0x90);
  FUN_002b4370(local_14,iVar1 + 0xdc,iVar1 + 0xec,
               (float)(((float10)bf_2b3500_double_from_words(param_1,param_2) -
                       (float10)*(double *)(iVar1 + 0x70)) * (float10)*(float *)(iVar1 + 0x78)));
  FUN_002b2b10(iVar1,unaff_EBX + 0x30,param_1,param_2);
  FUN_002b4100();
  if ((*(uint *)(unaff_EDI + 0x70) & 0xc00) == 0) {
    FUN_00150930();
  }
  if (*(int *)(unaff_EDI + 0x28) != 0) {
    FUN_002b3d00();
    FUN_002b4100();
  }
  return;
}
