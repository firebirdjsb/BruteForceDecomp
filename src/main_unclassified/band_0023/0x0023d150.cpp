/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB3832F20209CF15EC5A4EFD0CFFEE3F7B2E52AFAC811B11B4AD0D8D395BB479
 * Entry: 0x0023d150, Ghidra index: 7951, label: FUN_0023d150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d150(undefined4 param_1,float param_2)

{
  undefined4 unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0x3f800000;
  local_4 = 0;
  FUN_0001fc70(unaff_ESI,&local_c,param_2 * 57.295776);
  return;
}
