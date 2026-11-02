/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC2067D2AF3F6D2FE2E9999E3F94D874FCB0775BA367DB4E9A51FE90AEFCE27F
 * Entry: 0x0010cbb0, Ghidra index: 3478, label: FUN_0010cbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original E8 call 0x0010CBC2: bytewise write to local DWORD; Xbox ABI_UNVERIFIED. */
extern void FUN_000ee5c0(byte *param_1,float param_2);
void FUN_0010cbb0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int unaff_ESI;
  undefined4 local_4;
  
  uVar1 = *in_EAX;
  local_4 = uVar1;
  FUN_000ee5c0(reinterpret_cast<byte *>(&local_4),0.5f);
  *(undefined4 *)(unaff_ESI + 0x84) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x88) = local_4;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0x3f800000;
  return;
}
