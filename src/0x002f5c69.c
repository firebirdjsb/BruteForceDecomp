/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 546107EABD8F04AF46CA3246773AA2DDC3EFF174CFB6D9F3542B3DA1173FC476
 * Entry: 0x002f5c69, Ghidra index: 10906, label: XGetAudioFlags
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint XAPILIB__XGetAudioFlags(void)

{
  int iVar1;
  undefined1 local_c [4];
  uint local_8;
  
  iVar1 = ExQueryNonVolatileSetting(9,local_c,&local_8,4,0);
  if (iVar1 < 0) {
    local_8 = 0;
  }
  iVar1 = XGetAVPack();
  if (iVar1 == 3) {
    local_8 = 1;
  }
  else if (iVar1 == 6) {
    local_8 = local_8 & 0xffff;
  }
  return local_8;
}
