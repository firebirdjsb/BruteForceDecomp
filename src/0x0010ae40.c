/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FC8FEC31864C9E43B5DC0279490FF534B28C1C5484D523B35411143949625DA
 * Entry: 0x0010ae40, Ghidra index: 3438, label: FUN_0010ae40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ae40(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0xb0) = *in_ECX;
  *(undefined4 *)(unaff_EDI + 0xb4) = *in_EAX;
  *(float *)(unaff_EDI + 0xb8) = param_1;
  *(undefined4 *)(unaff_EDI + 0xc4) = 1;
  *(undefined4 *)(unaff_EDI + 0xbc) = 0;
  *(undefined4 *)(unaff_EDI + 0xc0) = 0x3f800000;
  *(undefined4 *)(unaff_EDI + 200) = *in_ECX;
  *(undefined4 *)(unaff_EDI + 0xcc) = *in_EAX;
  *(float *)(unaff_EDI + 0xd0) = param_1;
  *(undefined4 *)(unaff_EDI + 0xdc) = 1;
  *(undefined4 *)(unaff_EDI + 0xd4) = 0;
  *(undefined4 *)(unaff_EDI + 0xd8) = 0x3f800000;
  FUN_000b2070(param_1 * 0.5);
  *(undefined4 *)(unaff_EDI + 0xac) = param_2;
  return;
}
