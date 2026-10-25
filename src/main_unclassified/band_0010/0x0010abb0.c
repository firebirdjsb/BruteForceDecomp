/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 925FDD7FEE9C95B51EC089F9A29AF2B31131827D67A72E3113D90DF7119BA10A
 * Entry: 0x0010abb0, Ghidra index: 3434, label: FUN_0010abb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* Observed DWORD fields +8 and +0x24 use integer storage. At +0x10,
 * the allocated path reads a guest address; the other path uses inline data. Guest address translation and full ABI remain unverified. */
void FUN_0010abb0(int param_1)

{
  float fVar1;
  uint32_t field_word;
  float *pfVar2;
  int unaff_ESI;
  float *unaff_EDI;
  float local_14;
  float local_10;
  int local_c;
  float local_8;
  float local_4;
  
  if ((unaff_EDI != (float *)0x0) && (*(int *)(unaff_ESI + 0xf0) != 0)) {
    local_4 = *(float *)(unaff_ESI + 0x10);
    local_8 = *(float *)(unaff_ESI + 0xc);
    local_c = *(int *)(unaff_ESI + 0x84);
    field_word = 0;
    memcpy(unaff_EDI + 2,&field_word,4);
    if ((local_c == 1) && ((*(int *)(unaff_ESI + 0x88) == 2 && (*(int *)(unaff_ESI + 0x8c) == 2))))
    {
      field_word = 6;
      memcpy(unaff_EDI + 2,&field_word,4);
      *unaff_EDI = *(float *)(unaff_ESI + 0x14) * 0.5 + local_8;
      unaff_EDI[1] = *(float *)(unaff_ESI + 0x18) * 0.5 + local_4;
      return;
    }
    local_10 = 0.0;
    local_14 = 0.0;
    /* CMP DWORD [object+0x24],8; JB selects inline +0x10. */
    memcpy(&field_word,unaff_EDI + 9,4);
    if (field_word < 8U) {
      pfVar2 = unaff_EDI + 4;
    }
    else {
      memcpy(&field_word,unaff_EDI + 4,4);
      pfVar2 = (float *)(uintptr_t)field_word;
    }
    FUN_000ccae0(*(undefined4 *)(unaff_ESI + 0xf0),pfVar2,&local_10,&local_14,0,0x3f800000);
    if (*(int *)(unaff_ESI + 0x88) == 0) {
      *unaff_EDI = local_8;
    }
    else {
      local_10 = *(float *)(unaff_ESI + 0x14) - local_10;
      if (*(int *)(unaff_ESI + 0x88) == 2) {
        local_10 = local_10 * 0.5;
      }
      *unaff_EDI = local_10 + local_8;
    }
    if (*(int *)(unaff_ESI + 0x8c) == 0) {
      unaff_EDI[1] = (float)param_1 * local_14 + local_4;
      return;
    }
    fVar1 = *(float *)(unaff_ESI + 0x18) - (float)local_c * local_14;
    if (*(int *)(unaff_ESI + 0x8c) == 2) {
      fVar1 = fVar1 * 0.5;
    }
    unaff_EDI[1] = (float)param_1 * local_14 + fVar1 + local_4;
  }
  return;
}
