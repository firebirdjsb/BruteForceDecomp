/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03A2A2F38268C683B32554677D77F97442A4577D00456D87479DD1AE2B04B0DF
 * Entry: 0x0037954e, Ghidra index: 13484, label: FUN_0037954e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037954e(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  *(undefined4 *)(iVar1 + 0x3224) = 0xf0078;
  *(undefined4 *)(iVar1 + 0x2044) = 0x101ffff;
  *(uint *)(iVar1 + 0x2040) = in_EAX[0x48] & 0x3ff;
  *(undefined4 *)(iVar1 + 0x2500) = 0;
  *(undefined4 *)(iVar1 + 0x3000) = 0;
  *(undefined4 *)(iVar1 + 0x3050) = 0;
  *(undefined4 *)(iVar1 + 0x3200) = 0;
  *(undefined4 *)(iVar1 + 0x3250) = 0;
  *(undefined4 *)(iVar1 + 0x3220) = 0;
  FUN_003795d3(1);
  *(undefined4 *)(iVar1 + 0x3210) = 0;
  *(undefined4 *)(iVar1 + 0x3270) = 0;
  *(undefined4 *)(iVar1 + 0x3250) = 1;
  *(undefined4 *)(iVar1 + 0x3200) = 1;
  *(undefined4 *)(iVar1 + 0x2500) = 1;
  *(undefined4 *)(iVar1 + 0x2500) = 0;
  return;
}
